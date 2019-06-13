// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSCharacter.h"
#include "unrealprojectGameModeBase.generated.h"

UENUM()
enum class EGamePlayState 
{
	EPlaying,
	EGameOver,
	EUnknown
};

UCLASS()
class AunrealprojectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AunrealprojectGameModeBase();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	AFPSCharacter * MyCharacter;

	// Returns the current playing state
	UFUNCTION(BlueprintPure, Category = "Health")
		EGamePlayState GetCurrentState() const;

	// Sets a new playing state
	void SetCurrentState(EGamePlayState NewState);

private:
	// Keeps track of the current playing state 
	EGamePlayState CurrentState;

	// Handle any function calls that rely upon changing the playing state of our game
	void HandleNewState(EGamePlayState NewState);
};