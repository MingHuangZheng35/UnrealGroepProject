// Fill out your copyright notice in the Description page of Project Settings.

#include "KeyCard.h"
#include "Box.h"
#include "Engine.h"
#include "FPSCharacter.h"

// Sets default values
AKeyCard::AKeyCard()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->sceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	this->RootComponent = sceneComponent;

	trigger = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	trigger->SetWorldScale3D(FVector(5, 5, 5));
	trigger->SetGenerateOverlapEvents(true);
	trigger->OnComponentBeginOverlap.AddDynamic(this, &AKeyCard::OnOverlapBegin);
	trigger->SetupAttachment(RootComponent);

	mesh = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Mesh"));
	mesh->SetWorldScale3D(FVector(0.1F, 0.75F, 0.5F));
	mesh->SetupAttachment(RootComponent);
	mesh->bHiddenInGame = false;
}

// Called when the game starts or when spawned
void AKeyCard::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(1, 5, FColor::Purple, FString::Printf(TEXT("Just started and created a sphere")));
}

// Called every frame
void AKeyCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKeyCard::OnOverlapBegin(UPrimitiveComponent * overlappedComponent, AActor * actor, UPrimitiveComponent * otherComponent,
	int32 bodyIndex, bool fromSweep, const FHitResult & result)
{
	GEngine->AddOnScreenDebugMessage(1, 5, FColor::Purple, FString::Printf(TEXT("Overlapped")));

	if (actor != nullptr && actor != this && otherComponent != nullptr)
		//GEngine->AddOnScreenDebugMessage(1, 5, FColor::Purple, FString::Printf(TEXT("Just started and created a sphere")));
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Purple, FString::Printf(TEXT("Picked up by: %s"), *actor->GetName()));

		AFPSCharacter* player = dynamic_cast<AFPSCharacter*>(actor);
		SetActorEnableCollision(false);

		player->PickUp(this);
		// Destroy();
	}
}

