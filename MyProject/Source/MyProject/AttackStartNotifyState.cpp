// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AttackStartNotifyState.h"
#include "Engine.h"

UAttackStartNotifyState::UAttackStartNotifyState()
{


}

void UAttackStartNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	//The debug method that we saw yesterday. It takes two floats, an FColor::Type and an argument. We are using _FUNCTION_

	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Magenta, __FUNCTION__);
	
	//Owner is the base class which owns the mesh.
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		//Perform a cast to the player character. This allows us to access it's methods through it's pointer.
		AMyProjectCharacter* Player = Cast<AMyProjectCharacter>(MeshComp->GetOwner());
	
		//If player is not null, then access the AttackStart method through a pointer.
		if (Player != NULL)
		{
			//Call the AttackStart method on the class called player. Which as we know is of type AMyProjectCharacter.
			Player->AttackStart();
		}
	}
}


void UAttackStartNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	//The debug method that we saw yesterday, taking two floats, a color type inherited from the color struct. And another type.
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Magenta, __FUNCTION__);

	//If the mesh is not null and the owener of the mesh is not null.
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{		
		//Cast to the character class.
		AMyProjectCharacter* Player = Cast<AMyProjectCharacter>(MeshComp->GetOwner());

		if (Player != NULL)
		{
			//Call the attack start method from the player class. 
			Player->AttackStart();
		}

	}

}

