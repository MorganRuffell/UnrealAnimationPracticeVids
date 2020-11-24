// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAttackAnimNotify.h"
#include "MyProjectCharacter.h"
#include "Engine.h"

UMyAttackAnimNotify::UMyAttackAnimNotify()
{
}

UMyAttackAnimNotify::~UMyAttackAnimNotify()
{
}

void UMyAttackAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	////Anim notify log.
	//GEngine->AddOnScreenDebugMessage(-1,4.5,FColor::Turquoise,__FUNCTION__);

	////Same as we did with the colliders, we are checking to see if the mesh component is not null,
	////And the owner is not null.
	//if (MeshComp != NULL && MeshComp->GetOwner()!= NULL)
	//{
	//	AMyProjectCharacter* Player = Cast<AMyProjectCharacter>(MeshComp->GetOwner());
	//	
	//	if (Player != NULL && !Player->PunchThrowAudioComponent->IsPlaying())
	//	{
	//		//If you accidently mark Anything has private it cannot be accessed by other classes... But you know that!
	//		Player->PunchThrowAudioComponent->Play(0.0f);
	//	}	
	//}
}
