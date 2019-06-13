// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_MoveToPlayer.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnemyAI.h"
#include "FPSCharacter.h"
#include "EnemyCharacter.h"
#include "unrealproject.h"

EBTNodeResult::Type UBTTask_MoveToPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAI *charPC = Cast<AEnemyAI>(OwnerComp.GetAIOwner());

	AFPSCharacter *Enemy = Cast<AFPSCharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(charPC->EnemyKeyID));

	if (Enemy) 
	{
		charPC->MoveToActor(Enemy, 5.f, true, true, true, 0, true);
		return EBTNodeResult::Succeeded;
	}
	else 
	{
		return EBTNodeResult::Failed;
	}

	EBTNodeResult::Failed;
}

