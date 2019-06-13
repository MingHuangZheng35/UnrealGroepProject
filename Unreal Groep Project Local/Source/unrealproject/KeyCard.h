// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "KeyCard.generated.h"

UCLASS()
class UNREALPROJECT_API AKeyCard : public AActor
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	AKeyCard();

protected:
	UPROPERTY(EditAnywhere)
		USceneComponent* sceneComponent;

	UPROPERTY(EditAnywhere)
		USphereComponent* trigger;

	UPROPERTY(EditAnywhere)
		UBoxComponent* mesh;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "KeyAndLock")
		void OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* actor,
			UPrimitiveComponent* otherComponent, int32 bodyIndex, bool fromSweep, const FHitResult& result);
};