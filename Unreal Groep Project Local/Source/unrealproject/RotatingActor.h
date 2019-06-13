// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingActor.generated.h"

UCLASS()
class UNREALPROJECT_API ARotatingActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	int CounterDoNutTouchMyCounter;
	//Groetjes Ming
	ARotatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float PitchValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float YawValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float RollValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
		bool ActorIntializeRotate;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float AmountToRotate;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float Timer;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float TheCorrectPosition;

	UPROPERTY(EditAnywhere, Category = "Movement")
		bool ThisObjectHasTheRightPositon;
	//UPROPERTY(EditAnywhere, Catergory = "Movemen")
	//	float TheCorrectPosition;

	
};
