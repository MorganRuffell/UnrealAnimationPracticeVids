// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterDataAsset.h"

UCharacterDataAsset::UCharacterDataAsset()
{
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
	
	CurrentWalkSpeed = 600.0f;
	CurrentSprintSpeed = 850.0f;


}

UCharacterDataAsset::~UCharacterDataAsset()
{

}