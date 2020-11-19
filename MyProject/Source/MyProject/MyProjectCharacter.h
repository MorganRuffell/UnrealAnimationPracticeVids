// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"
#include "MyProjectCharacter.generated.h"

UENUM(BlueprintType)
enum class ELogLevel : uint8
{
	TRACE				UMETA(DisplayName = "Trace"),
	DEBUG				UMETA(DisplayName = "Debug"),
	INFO				UMETA(DisplayName = "Info"),
	WARNING				UMETA(DisplayName = "Warning"),
	ERROR				UMETA(DisplayName = "Error"),

};

UENUM(BlueprintType)
enum class ELogOutput : uint8
{
	ALL					UMETA(DisplayName = "All Levels"),
	OUTPUT_LOG			UMETA(DisplayName = "Output Log"),
	SCREEN				UMETA(DisplayName = "Screen"),

};

UENUM(BlueprintType)
enum class EAttackType : uint8
{
	MELEE_FIST			UMETA(DisplayName = "Melee - Fist"),

};


UCLASS(config=Game)
class AMyProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	//Attack Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation, meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* MeleeFistAttackMontage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* LeftFistCollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* RightFistCollisionBox;



public:
	AMyProjectCharacter();
	
	//This is declaring the begin play method, this is called when the game begins.
	//This is how it is declared. This is becuase Characters inherit from AActor which contains the abstract definition
	virtual void BeginPlay() override;


	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	float AnimationMontageSpeed;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

private:

	//Log Enum Decleration
	// param LogLevel affects the color of the log
	// param FString the message for display

	void Log(ELogLevel LogLevel, FString Message);


	//Log - prints a message to all the log outputs with a specific color
	//Param 1 LogLevel, Affects color of log
	//Param 2 FString, The message to display
	//Param 3 ELogOutput - All, Output log or screen

	void Log(ELogLevel LogLevel, FString Message, ELogOutput LogOutput);


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface


public:
	//Triggered when the player intiates an attack
	void AttackStart();

	//Called when the player ends an attack
	void AttackEnd();

	//Triggers attack animation based on user input/.
	void AttackInput();


	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

