// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/WidgetComponent.h"
#include "ComboWidget.h"

#include "InGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AInGameHUD : public AHUD
{
	GENERATED_BODY()

public:

	AInGameHUD();
	~AInGameHUD();


	virtual void ShowHUD() override;

	UFUNCTION(BlueprintCallable)
	virtual void DrawHUD() override;

	UFUNCTION(BlueprintCallable)
	virtual void Tick(float DeltaSeconds) override;
		
	UFUNCTION(BlueprintCallable)
	void UpdateComboCount(int32 Value);
	
	UFUNCTION(BlueprintCallable)
	void ResetCombo();
	
	UFUNCTION(BlueprintCallable)
	void BeginPlay();

public:

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> ComboWidgetClass;

private:

	
	UComboWidget* ComboWidget;



	
};
