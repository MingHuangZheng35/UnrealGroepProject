// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAI.generated.h"

UCLASS()
class UNREALPROJECT_API AEnemyAI : public AAIController
{
	GENERATED_BODY()

public:

	UPROPERTY(transient)
	class UBlackboardComponent *BlackboardComp;

	UPROPERTY(transient)
	class UBehaviorTreeComponent * BehaviorComp;

	AEnemyAI();

	virtual void Possess(APawn *InPawn) override;

	uint8 EnemyKeyID;

};
