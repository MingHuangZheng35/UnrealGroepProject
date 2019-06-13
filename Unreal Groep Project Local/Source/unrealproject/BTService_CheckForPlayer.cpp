// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_CheckForPlayer.h"
#include "unrealproject.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "FPSCharacter.h"
#include "EnemyAI.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Engine.h"
#include "EnemyCharacter.h"

UBTService_CheckForPlayer::UBTService_CheckForPlayer() 
{
	bCreateNodeInstance = true;
}

void UBTService_CheckForPlayer::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	AEnemyAI *EnemyPC = Cast<AEnemyAI>(OwnerComp.GetAIOwner());

	if (EnemyPC) 
	{
		AFPSCharacter *Enemy = Cast<AFPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

		if (Enemy) 
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->EnemyKeyID, Enemy);
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Enemy detected");
		}
	}
}
