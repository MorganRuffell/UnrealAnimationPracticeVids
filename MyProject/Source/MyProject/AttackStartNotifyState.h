// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MyProjectCharacter.h"

#include "AttackStartNotifyState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UAttackStartNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()

	UAttackStartNotifyState();

public:

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override ;
	//virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override ;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override ;


	
};
