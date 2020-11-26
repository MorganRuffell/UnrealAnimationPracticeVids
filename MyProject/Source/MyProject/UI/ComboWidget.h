// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/UMG.h"

#include "Blueprint/UserWidget.h"
#include "ComboWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UComboWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
		
	UComboWidget(const FObjectInitializer& ObjectInitializer);

	~UComboWidget();

	virtual void NativeConstruct();



	UFUNCTION()
	void UpdateComboCount(int32 Value);

	UFUNCTION()
	void CountResetCombo();

	
	//This meta tag, bind widget
	//This allows you to bind it directly to the derieved widget class. It does 
	//it automatically for you, if that is what you'd like.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UEditableTextBox* TxtBoxCombo;

	



};
