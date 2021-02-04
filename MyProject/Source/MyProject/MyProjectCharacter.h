// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"

#include "Engine/DataTable.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"

#include "MyProjectCharacter.generated.h"

//Data Tables are essentially structs with more stuff, and they inherit from FTableRowBase.
//The combonation of these allow unreal to get this infomation from the base implementation and the FTable struct.

USTRUCT(BlueprintType)
struct FPlayerAttackMontage : public FTableRowBase
{
	GENERATED_BODY()

	//Attack Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* AnimMontage;

	//Amount of sections marked start in our montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AnimSectionCount;

	//Description.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Description;

};

USTRUCT(BlueprintType)
struct FMeleeCollisionProfile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Disabled;

	//default constructor
	FMeleeCollisionProfile()
	{
		Enabled = FName(TEXT("Weapon"));
		Disabled = FName(TEXT("NoCollision"));
		//You can use this with alternate ones as well! Experiment and find a solution.
	}
};

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = DataTable, meta = (AllowPrivateAccess = "true"))
	class UDataTable* PlayerAttackDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = DataAsset, meta =(AllowPrivateAccess = "true"))
	class UCharacterDataAsset* CharacterDataAsset;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Sounds, meta = (AllowPrivateAccess = "true"))
	class USoundCue* PunchSoundCue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Sounds, meta = (AllowPrivateAccess = "true"))
	class USoundCue* PunchThrowSoundCue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* LeftFistCollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* RightFistCollisionBox;
	

public:
	AMyProjectCharacter();
	
	//This is declaring the begin play method, this is called when the game begins.
	//This is how it is declared. This is because Characters inherit from AActor which contains the abstract definition
	virtual void BeginPlay() override;


	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Camera)
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	float AnimationMontageSpeed;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	//Upper & Lower pitch bounds for our sound manipulation.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	float LowerPitchBound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	float UpperPitchBound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float CurrentWalkSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float CurrentSprintSpeed = 850.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float CameraDelay = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combo)
	float ComboResetDelay;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Animation, meta = (AllowPrivateAccess = "true"))
	float AnimationStopDelay;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation, meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Negative to rewind animation, postive for normal playback"))
	float AnimationPlayback;

	
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

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	int8 CurrentComboCount;
	FTimerHandle ComboResetHandle;

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

	//Punch throw audio componenents
	UAudioComponent* PunchAudioComponent;

public:
	UAudioComponent* PunchThrowAudioComponent;

	FMeleeCollisionProfile MeleeCollisionProfile;

	FPlayerAttackMontage* AttackMontage;


	//Triggers attack animation based on user input/.
	UFUNCTION()
	void AttackInput();

	//Triggered when the player intiates an attack
	UFUNCTION()
	void AttackStart();

	//Called when the player ends an attack
	UFUNCTION()
	void AttackEnd();

	//Triggers when the collider hits an enemy entity
	UFUNCTION()
	void OnAttackHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void Sprint();

	UFUNCTION()
	void StopSprinting();

	UFUNCTION()
	void ResetCombo();

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

