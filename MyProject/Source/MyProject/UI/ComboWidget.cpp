// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboWidget.h"

UComboWidget::UComboWidget(const FObjectInitializer& ObjectInitializer)
{

}

UComboWidget::~UComboWidget()
{
}

void UComboWidget::NativeConstruct()
{
	//When implementing something like a begin play, you need to make a call to the super class.
	Super::NativeConstruct();

}

void UComboWidget::UpdateComboCount(int32 Value)
{
	if (TxtBoxCombo != NULL && Value > 1)
	{
		
	}

}


void UComboWidget::CountResetCombo()
{
}
