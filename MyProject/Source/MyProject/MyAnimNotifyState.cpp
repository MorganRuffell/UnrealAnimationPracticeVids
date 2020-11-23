// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimNotifyState.h"
#include "Engine.h"

UMyAnimNotifyState::UMyAnimNotifyState()
{
}

void UMyAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	//Anim notify log.
	GEngine->AddOnScreenDebugMessage(-1, 4.5, FColor::Purple, __FUNCTION__);
}

void UMyAnimNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5, FColor::Black, __FUNCTION__);

}

void UMyAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	//Anim notify log.
	GEngine->AddOnScreenDebugMessage(-1, 4.5, FColor::Purple, __FUNCTION__);
}


//21:46 video end