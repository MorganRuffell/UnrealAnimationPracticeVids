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
		
	//Constructor
	UComboWidget(const FObjectInitializer& ObjectInitializer);

	//Destructor
	~UComboWidget();

	virtual void NativeConstruct();
	
	void AddToViewport(int32 ZOrder);

	UFUNCTION()
	void UpdateComboCount(int32 Value);

	UFUNCTION()
	void CountResetCombo();

	
	//This meta tag, bind widget
	//This allows you to bind it directly to the derieved widget class. It does 
	//it automatically for you, if that is what you'd like.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TxtBoxCombo;


	void StoreWidgetAnimations();

	UWidgetAnimation* GetAnimationByName(FName AnimationName) const;
private:

	TMap<FName, UWidgetAnimation*> AnimationsMap;

	UWidgetAnimation* ComboFadeAnim;
	UWidgetAnimation* ComboShakeAnim;
	UWidgetAnimation* ComboAddShakeAnim;
};
