// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "MyAttackAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyAttackAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
	UMyAttackAnimNotify();
	~UMyAttackAnimNotify();


public:

	UFUNCTION()
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	//This implementation is used inside of the blueprint implementation. We need to use another type for C++	
	//UFUNCTION(BlueprintImplementableEvent)
	//bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;

};
