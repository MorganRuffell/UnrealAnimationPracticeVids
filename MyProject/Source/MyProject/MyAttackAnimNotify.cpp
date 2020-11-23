// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAttackAnimNotify.h"
#include "Engine.h"

UMyAttackAnimNotify::UMyAttackAnimNotify()
{
}

UMyAttackAnimNotify::~UMyAttackAnimNotify()
{
}

void UMyAttackAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	//Anim notify log.
	GEngine->AddOnScreenDebugMessage(-1,4.5,FColor::Yellow,__FUNCTION__);

}
