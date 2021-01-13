// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PracticeDataAsset.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ELogLevel : uint8
{	
	TRACE		UMETA("DisplayName = "Trace"),
	DEBUG		UMETA("DisplayName = "Debug"),
	INFO		UMETA("DisplayName = "Info"),
	WARNING		UMETA("DisplayName = "Warning"),
	ERROR		UMETA("DisplayName = "Error"),
};

enum class ELogLevel : uint8
{	
	TRACE		UMETA("DisplayName = "Trace"),
	DEBUG		UMETA("DisplayName = "Debug"),
	INFO		UMETA("DisplayName = "Info"),
	WARNING		UMETA("DisplayName = "Warning"),
	ERROR		UMETA("DisplayName = "Error"),
}

UCLASS()
class MYPROJECT_API UPracticeDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPracticeDataAsset();	

	~UPracticeDataAsset();

};
