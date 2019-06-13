// Fill out your copyright notice in the Description page of Project Settings.

#include "Lock.h"

// Sets default values
ALock::ALock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALock::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ALock::Unlock(AKeyCard * key)
{
	if (!keys.Contains(key))
		return false;

	// Remove the key
	keys.Remove(key);
	key->Destroy();

	// If array num == 0
	if (keys.Num() == 0)
		// Open door (animation or whatever)
		Destroy();

	return true;
}

void ALock::Lock(AKeyCard * key)
{
	keys.AddUnique(key);
}

void ALock::MultipleLocks(TArray<AKeyCard*> newKeys)
{
	for (size_t i = 0; i < newKeys.Num(); i++)
		Lock(newKeys[i]);
}

TArray<AKeyCard*> ALock::GetAllKeys()
{
	return keys;
}