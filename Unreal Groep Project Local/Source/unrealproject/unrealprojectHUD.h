#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "unrealprojectHUD.generated.h"

UCLASS()
class AunrealprojectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AunrealprojectHUD();

	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

private:

	class UTexture2D* CrosshairTex;

	UPROPERTY(EditAnywhere, Category = "Health")
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Health")
	class UUserWidget* CurrentWidget;
};