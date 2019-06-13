// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCharacter.h"
#include "unrealproject.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Engine.h"
#include "Lock.h"
#include "RotatingActor.h"


// Sets default values
AFPSCharacter::AFPSCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a first person camera component.
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	// Attach the camera component to our capsule component.
	FPSCameraComponent->SetupAttachment(GetCapsuleComponent());
	// Position the camera slightly above the eyes.
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
	// Allow the pawn to control camera rotation.
	FPSCameraComponent->bUsePawnControlRotation = true;

	// Create a first person mesh component for the owning player.
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	// Only the owning player sees this mesh.
	FPSMesh->SetOnlyOwnerSee(true);
	// Attach the FPS mesh to the FPS camera.
	FPSMesh->SetupAttachment(FPSCameraComponent);
	// Disable some environmental shadowing to preserve the illusion of having a single mesh.
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	// The owning player doesn't see the regular (third-person) body mesh.
	GetMesh()->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		// Put up a debug message for five seconds. The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));
	}

	FullHealth = 1000.0f;
	Health = FullHealth;
	HealthPercentage = 1.0f;
	PreviousHealth = HealthPercentage;
	bCanBeDamaged = true;
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MyTimeline.TickTimeline(DeltaTime);
}

void AFPSCharacter::PickUp(AActor* actor)
{
	if (actor == nullptr)
		return;

	// Is item in inventory?
	actor->SetActorHiddenInGame(true);

	// PLEASE SET THE OBJECT POSITION TO WHERE THE PLAYER IS
	// ADD TO ROOT?

	inventory.push_back(actor);
}

void AFPSCharacter::Drop(AActor* actor)
{
	if (actor == nullptr)
		return;

	if (!InInventory(actor))
		return;

	// Enable item
	actor->SetActorHiddenInGame(false);

	// Set the actor on my current position
	actor->GetActorTransform().SetLocation(GetTransform().GetLocation());

	// Remove from inventory
	inventory.remove(actor);
}

void AFPSCharacter::Use(AActor* actor, AActor* target)
{
	
}

void AFPSCharacter::Interact()
{
	if (GetWorld() == nullptr)
		return;

	// TO DO: MOVE TO CLASS AND MAKE BLUEPRINTEDITABLE
	float length = 1000; // IN CM
	APlayerCameraManager* camManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	FTransform camera = camManager->GetTransform();
	FHitResult hit;
	FVector begin = camera.GetLocation();
	FQuat rotation = camera.GetRotation();
	FVector end = rotation.GetForwardVector() * length;
	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Emerald, FString::FString("Banaan"));

	DrawDebugLine(GetWorld(), begin, begin + end, FColor::Green, false, 1, 0, 1);
	if (GetWorld()->LineTraceSingleByChannel(hit, begin, begin + end, ECC_GameTraceChannel3))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Emerald, FString::FString("Initalize Line"));

		ALock* lock = Cast<ALock>(hit.Actor);
		ARotatingActor* RotateThisObject = Cast<ARotatingActor>(hit.Actor);


		if (lock != nullptr)
		{

			TArray<AKeyCard*> keys = lock->GetAllKeys();
			for (size_t i = 0; i < keys.Num(); i++)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Emerald, FString::FString("Lock Banaan"));

				if (!InInventory(keys[i]))
					continue;

				// TO DO: PLEASE CHECK IF THE LOCK HAS MULTIPLE KEYS
				if (lock->Unlock(keys[i]))
					lock->Destroy();
				//FString text = FString::Printf("Unlocked with ").Append(keys[i]->GetName());
				//GEngine->AddOnScreenDebugMessage(1, 5, FColor::Purple, FString::Printf("Unlocked"));
			}
		}
		else if (RotateThisObject != nullptr)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Emerald, FString::FString("Rotate Banaan"));

			RotateThisObject->ActorIntializeRotate = true;
		}
	}
}

bool AFPSCharacter::InInventory(AActor* actor)
{
	// Is the item in the inventory?
	for (AActor* item : inventory)
		if (item == actor)
			return true;

	return false;
}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	// Set up "look" bindings.
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	// Set up "action" bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AFPSCharacter::Interact);

}

void AFPSCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::StartJump()
{
	bPressedJump = true;
}

void AFPSCharacter::StopJump()
{
	bPressedJump = false;
}



float AFPSCharacter::GetHealth() 
{
	return HealthPercentage;
}

FText AFPSCharacter::GetHealthIntText() 
{
	int32 HP = FMath::RoundHalfFromZero(HealthPercentage * 100);
	FString HPS = FString::FromInt(HP);
	FString HealthHUD = HPS + FString(TEXT("%"));
	FText HPText = FText::FromString(HealthHUD);
	return HPText;
}

void AFPSCharacter::SetDamageState() 
{
	bCanBeDamaged = true;
}

void AFPSCharacter::DamageTimer() 
{
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AFPSCharacter::SetDamageState, 2.0f, false);
}

bool AFPSCharacter::PlayFlash() 
{
	if(redFlash) 
	{
		redFlash = false;
		return true;
	}
	 
	return false;
}

void AFPSCharacter::RecievePointDamage(float Damage, const UDamageType * DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent * HitComponent, FName BoneName, FVector ShotFromDirection, AController * InstigatedBy, AActor * DamageCauser, const FHitResult & HitInfo) 
{
	bCanBeDamaged = false;
	redFlash = true;
	UpdateHealth(-Damage);
	DamageTimer();
}

void AFPSCharacter::UpdateHealth(float HealthChange) 
{
	Health += HealthChange;
	Health = FMath::Clamp(Health, 0.0f, FullHealth);
	PreviousHealth = HealthPercentage;
	HealthPercentage = Health / FullHealth;
}