// Fill out your copyright notice in the Description page of Project Settings.

#include "FlameThrower.h"

// Sets default values
AFlameThrower::AFlameThrower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlameThrower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlameThrower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

