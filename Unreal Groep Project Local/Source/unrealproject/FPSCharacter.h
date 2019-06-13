// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/TimelineComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include <list>
#include "FPSCharacter.generated.h"

UCLASS()
class UNREALPROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	std::list<AActor*> inventory;

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Interact();

	UFUNCTION()
		bool InInventory(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void PickUp(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Drop(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Use(AActor* actor, AActor* target);

	UFUNCTION()
		void MoveForward(float Value);

	// Handles input for moving right and left.
	UFUNCTION()
		void MoveRight(float Value);

	// Sets jump flag when key is pressed.
	UFUNCTION()
		void StartJump();

	// Clears jump flag when key is released.
	UFUNCTION()
		void StopJump();

	// FPS camera.
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	// First-person mesh (arms), visible only to the owning player.
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float FullHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float HealthPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float PreviousHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float FullMagic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float redFlash;

	FTimeline MyTimeline;
	float CurveFloatValue;
	float TimelineValue;
	FTimerHandle MemberTimerHandle;

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth();

	UFUNCTION(BlueprintCallable, Category = "Health")
	void UpdateHealth(float HealthChange);

	UFUNCTION(BlueprintPure, Category = "Health")
	FText GetHealthIntText();

	UFUNCTION()
	void DamageTimer();

	UFUNCTION()
	void SetDamageState();

	UFUNCTION(BlueprintPure, Category = "Health")
	bool PlayFlash();

	UFUNCTION()
	void RecievePointDamage(float Damage, const UDamageType * DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent * HitComponent, FName BoneName, FVector ShotFromDirection, AController * InstigatedBy, AActor * DamageCauser, const FHitResult & HitInfo);
};
