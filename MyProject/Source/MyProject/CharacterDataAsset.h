// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UCharacterDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UCharacterDataAsset();
	~UCharacterDataAsset();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraMovementRates")
	float BaseTurnRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraMovementRates")
	float BaseLookUpRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerMovementRates")
	float CurrentWalkSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerMovementRates")
	float CurrentSprintSpeed;


};
