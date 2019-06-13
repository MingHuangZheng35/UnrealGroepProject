// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyCard.h"
#include <list>
#include "Lock.generated.h"

UCLASS()
class UNREALPROJECT_API ALock : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY()
		TArray<AKeyCard*> keys;

public:
	// Sets default values for this actor's properties
	ALock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = Locks)
		bool Unlock(AKeyCard* key);

	UFUNCTION(BlueprintCallable, Category = Locks)
		void Lock(AKeyCard* key);

	UFUNCTION(BlueprintCallable, Category = Locks)
		void MultipleLocks(TArray<AKeyCard*> newKeys);

	UFUNCTION(BlueprintCallable, Category = Locks)
		TArray<AKeyCard*> GetAllKeys();
};