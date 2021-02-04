// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameHUD.h"

AInGameHUD::AInGameHUD()
{
	
}

AInGameHUD::~AInGameHUD()
{
}

void AInGameHUD::ShowHUD()
{
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AInGameHUD::UpdateComboCount(int32 Value)
{
	if (ComboWidget)
	{
		ComboWidget->UpdateComboCount(Value);
	}

}

void AInGameHUD::ResetCombo()
{
	if (ComboWidget)
	{
		ComboWidget->CountResetCombo();
	}

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (ComboWidgetClass)
	{
		ComboWidget = CreateWidget<UComboWidget>(GetWorld(), ComboWidgetClass);
		
		if (ComboWidget)
		{
			ComboWidget->AddToViewport(0);
		}	
	}

}
