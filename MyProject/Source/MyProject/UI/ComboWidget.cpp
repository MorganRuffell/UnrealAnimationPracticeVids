// Fill out your copyright notice in the Description page of Project Settings.

#include "ComboWidget.h"
#include "Engine.h"

UComboWidget::UComboWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

UComboWidget::~UComboWidget()
{
}

void UComboWidget::NativeConstruct()
{
	//When implementing something like a begin play, you need to make a call to the super class.
	Super::NativeConstruct();

	//Store all of the animations we've created in a map with a call to this method
	StoreWidgetAnimations();
	
	//Add all of the animations you are going to do with the UI.
	ComboFadeAnim = GetAnimationByName(TEXT("ComboFade"));
	ComboShakeAnim = GetAnimationByName(TEXT("ComboShake"));
	ComboAddShakeAnim = GetAnimationByName(TEXT("ComboAddShake"));
}


void UComboWidget::AddToViewport(int32 ZOrder)
{
	Super::AddToViewport();
}

void UComboWidget::UpdateComboCount(int32 Value)
{
	if (TxtBoxCombo != NULL && Value > 1)
	{
		// turn text box visible if already hidden, the preceding if checks to see if it actually exists
		if (TxtBoxCombo->Visibility == ESlateVisibility::Hidden)
		{
			TxtBoxCombo->SetVisibility(ESlateVisibility::Visible);
		}

		//Generate output like 2x combo. We are casting our string into an int plus multiplied by combo
		TxtBoxCombo->SetText(FText::FromString(FString::FromInt(Value) + "x combo"));
		
		if (ComboFadeAnim)
		{
			PlayAnimation(ComboFadeAnim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.f);
		}
	
		if (ComboAddShakeAnim)
		{
			PlayAnimation(ComboAddShakeAnim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.f);
		}

		if (ComboShakeAnim)
		{
			PlayAnimation(ComboShakeAnim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.f);
		}


	}
}


void UComboWidget::CountResetCombo()
{
	//if the box combo is finished we can the reset the visibility of the combo box.
	if (TxtBoxCombo)
	{
		TxtBoxCombo->SetVisibility(ESlateVisibility::Hidden);
	}



}

void UComboWidget::StoreWidgetAnimations()
{
	//Emptying the key value map
	AnimationsMap.Empty();

	//Getting all of the properties from the class.
	UProperty* properties = GetClass()->PropertyLink;


	while (properties)
	{

		//We Only deal with object properties. We are storing the properties in an RValue called properties of type UProperty*
		//We populate this RValue with a variable 
		if (properties->GetClass() == UObjectProperty::StaticClass())
		{
			UObjectProperty* ObjProp = Cast<UObjectProperty>(properties);

			//Only get properties that are widget animations
			if (ObjProp->PropertyClass == UWidgetAnimation::StaticClass())
			{
				UObject* Obj = ObjProp->GetObjectPropertyValue_InContainer(this);
				UWidgetAnimation* WidgetAnimation = Cast<UWidgetAnimation>(Obj);

				if (WidgetAnimation && WidgetAnimation->MovieScene)
				{
					//Storing the WidgetAnimation
					FName AnimName = WidgetAnimation->MovieScene->GetFName();
					
					GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Emerald, AnimName.ToString());
		
					AnimationsMap.Add(AnimName, WidgetAnimation);

				}

			}

		}

		properties = properties->PropertyLinkNext;

	}
}

UWidgetAnimation* UComboWidget::GetAnimationByName(FName AnimationName) const
{
	UWidgetAnimation* const* WidgetAnimation = AnimationsMap.Find(AnimationName);
	if (WidgetAnimation)
	{
		return *WidgetAnimation;
	}

	return nullptr;
}
