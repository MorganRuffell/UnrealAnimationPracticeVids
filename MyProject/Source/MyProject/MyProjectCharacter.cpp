// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MyProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "UI/InGameHUD.h"
#include "CharacterDataAsset.h"

#include "GameFramework/Pawn.h"


//////////////////////////////////////////////////////////////////////////
// AMyProjectCharacter

AMyProjectCharacter::AMyProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//Set our current Combo count
	CurrentComboCount = 0;
	ComboResetDelay = 5.0f;


	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// set our animation montage play speed
	AnimationMontageSpeed = 1.0f;

	// Set our upper and lower punching sound pitch rate
	LowerPitchBound = 0.9f;
	UpperPitchBound = 1.3f;

	// Set the animation stop delay to a default value
	AnimationStopDelay = 0.0f;
	AnimationPlayback = -1.0f;

	//Debug Box & Line paramaters
	DebugBoxColor = FColor::Cyan;
	DebugBoxLifeTime = 5.0f;
	DebugBoxLineThickness = 2.0f;


	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//Load our animation montage, through a construction helper.
	static ConstructorHelpers::FObjectFinder<UAnimMontage>MeleeFistAttackMontageObject(TEXT("AnimMontage'/Game/Anim/Animations/MeleeFistAttackMontage.MeleeFistAttackMontage'"));
	if (MeleeFistAttackMontageObject.Succeeded())
	{
		MeleeFistAttackMontage = MeleeFistAttackMontageObject.Object;
	}


	//Load player attack montage datatable
	//You can load the  CSV and JSON implementations of this as well.
	//As they both come in as datatables. 20:21 on the video.
	static ConstructorHelpers::FObjectFinder<UDataTable>PlayerAttackMontageDataObject(TEXT("DataTable'/Game/Anim/DataTables/PlayFistAttackMontageDataTable.PlayFistAttackMontageDataTable'"));
	if (PlayerAttackMontageDataObject.Succeeded())
	{
		PlayerFistAttackDataTable = PlayerAttackMontageDataObject.Object;
	}

	//Load player attack montage datatable
//You can load the  CSV and JSON implementations of this as well.
//As they both come in as datatables. 20:21 on the video.
	static ConstructorHelpers::FObjectFinder<UDataTable>PlayerKickAttackDataTable(TEXT("DataTable'/Game/Anim/DataTables/PlayKickAttackMontageDataTable.PlayKickAttackMontageDataTable'"));
	if (PlayerAttackMontageDataObject.Succeeded())
	{
		PlayerFistAttackDataTable = PlayerAttackMontageDataObject.Object;
	}



	//Load the sound Cue Object
	static ConstructorHelpers::FObjectFinder<USoundCue> PunchSoundCueObject(TEXT("SoundCue'/Game/Anim/Audio/PunchSoundCue.PunchSoundCue'"));

	if (PunchSoundCueObject.Succeeded())
	{
		PunchSoundCue = PunchSoundCueObject.Object;

		PunchAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PunchAudioComponent"));
		PunchAudioComponent->SetupAttachment(RootComponent);

		//Do not do this, It will play on beginplay
		//PunchAudioComponent->SetSound(PunchSoundCue);
	}


	static ConstructorHelpers::FObjectFinder<USoundCue> PunchThrowSoundCueObject(TEXT("SoundCue'/Game/Anim/Audio/PunchThrowSoundCue.PunchThrowSoundCue'"));

	if (PunchThrowSoundCueObject.Succeeded())
	{
		PunchThrowSoundCue = PunchSoundCueObject.Object;

		PunchThrowAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PunchThrowSoundCueAudioComponent"));
		PunchThrowAudioComponent->SetupAttachment(RootComponent);

		//Do not do this, It will play on beginplay
		//PunchAudioComponent->SetSound(PunchSoundCue);
	}


	//Including intialisation directives for our collision boxes, these are intialised to a subObject	
	LeftFistCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollsionBox"));
	RightFistCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollsionBox"));
	LeftLegCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftLegCollisionBox"));
	RightLegCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RightLegCollisionBox"));


	//We like we do with the camera access the setup attachment method through a pointer.
	LeftFistCollisionBox->SetupAttachment(RootComponent);
	RightFistCollisionBox->SetupAttachment(RootComponent);
	LeftLegCollisionBox->SetupAttachment(RootComponent);
	RightLegCollisionBox->SetupAttachment(RootComponent);



	//Set both to be hidden in game - No point doing it in BP
	LeftFistCollisionBox->SetHiddenInGame(false);
	RightFistCollisionBox->SetHiddenInGame(false);
	LeftLegCollisionBox->SetHiddenInGame(false);
	RightLegCollisionBox->SetHiddenInGame(false);


	//This is forcing it to ensure that rigidbody collsion notifications are setup correctly.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(false);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(false);
	LeftLegCollisionBox->SetNotifyRigidBodyCollision(false);
	RightLegCollisionBox->SetNotifyRigidBodyCollision(false);

	//Based on what we set up in project settings we need to add these collision profiles.
	//Go to the project settings and read through this, if you're stuck!
	LeftFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);
	RightFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);
	LeftLegCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);
	RightLegCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);


	LineTraceType = ELineTraceType::CAMERA_SINGLE;
	LineTraceDistance = 100.0f;
	LineTraceSpread = 10.0f;
	
}

//Begin play is essentially awake. 

//////////////////////////////////////////////////////////////////////////
// Input

void AMyProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMyProjectCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMyProjectCharacter::StopSprinting);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyProjectCharacter::MoveRight);

	//Attack input
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyProjectCharacter::PunchAttack);

	PlayerInputComponent->BindAction("KickAttack", IE_Pressed, this, &AMyProjectCharacter::KickAttack);

	//Line trace firing input bindings
	PlayerInputComponent->BindAction("FireLineTrace", IE_Pressed, this, &AMyProjectCharacter::FireLineTrace);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyProjectCharacter::LookUpAtRate);
}

void AMyProjectCharacter::GetValues()
{
	BaseLookUpRate = CharacterDataAsset->BaseLookUpRate;

	CurrentWalkSpeed = CharacterDataAsset->CurrentWalkSpeed;
	CurrentSprintSpeed = CharacterDataAsset->CurrentSprintSpeed;

}

void AMyProjectCharacter::BeginPlay()
{
	//Passing a call to the super class iteration before we start playing.
	Super::BeginPlay();

	CurrentSprintSpeed = CharacterDataAsset->CurrentSprintSpeed;
	CurrentWalkSpeed = CharacterDataAsset->CurrentWalkSpeed;

	GetValues();

	//Setting the Lvalues of our components to be equal to the character data asset lvalues.
	//Done at begin play so that the game starts with these values.

	//Line Hit result, cone / Spread system, we are turning the amount created into radians so that those float values can be
	//properly processed



	//Attach Collision Components to sockets based on transformation definitions.
	//Sockets are little collider locations set up on the bone structure which is imported into unreal.
	//Look into this and see the different params that this takes. 15:10 on video to see how this works. WATCH IT.
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	//Attaching to the sockets that we defined on the skeleton
	LeftFistCollisionBox->AttachToComponent(GetMesh(), AttachmentRules, "LSocket_Collider");
	RightFistCollisionBox->AttachToComponent(GetMesh(), AttachmentRules, "RSocket_Collider");
	LeftLegCollisionBox->AttachToComponent(GetMesh(), AttachmentRules, "LeftLeg_Socket");
	RightLegCollisionBox->AttachToComponent(GetMesh(), AttachmentRules, "RightLeg_Socket");


	//OnComponent hit, similar to bp we are creating this implementation inside our begin play.
	LeftFistCollisionBox->OnComponentHit.AddDynamic(this, &AMyProjectCharacter::OnAttackHit);
	RightFistCollisionBox->OnComponentHit.AddDynamic(this, &AMyProjectCharacter::OnAttackHit);
	LeftLegCollisionBox->OnComponentHit.AddDynamic(this, &AMyProjectCharacter::OnAttackHit); //If you are going to do a custom method you need to alter this
	RightLegCollisionBox->OnComponentHit.AddDynamic(this, &AMyProjectCharacter::OnAttackHit);


	// In the interests of expanding gameplay, I've commented this out. It's a useful thing to learn to do. though!
	//if (PlayerFistAttackDataTable)
	//{
	//	FPlayerAttackMontage AttackMontage;
	//	AttackMontage.AnimMontage = NULL;
	//	AttackMontage.Description = "Created From BeginPlay";
	//	AttackMontage.AnimSectionCount = 3;

	//	PlayerFistAttackDataTable->AddRow(FName(TEXT("New Row")), AttackMontage);
	//}


	//Linking our sound on begin play rather than in the constructor.
	//This if statement checks to ensure that they are not null.
	if (PunchAudioComponent && PunchSoundCue)
	{
		PunchAudioComponent->SetSound(PunchSoundCue);
	}

	//Linking our sound on begin play rather than in the constructor.
	//This if statement checks to ensure that they are not null.
	if (PunchThrowAudioComponent && PunchThrowSoundCue)
	{
		PunchThrowAudioComponent->SetSound(PunchThrowSoundCue);
	}
}

void AMyProjectCharacter::Tick(float DeltaTime)   
{
	Super::Tick(DeltaTime);
	
	//In this example we are constantly firing line trace. Useful for working out where play is and using those values.
	//FireLineTrace();

}

void AMyProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMyProjectCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMyProjectCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

//Depreceated. In favour of using a method for each attack type.
void AMyProjectCharacter::AttackInput(EAttackType AttackType)
{
	////You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	//Log(ELogLevel::INFO, __FUNCTION__);

	////Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	////want to force simulates hit to be true.
	//LeftFistCollisionBox->SetNotifyRigidBodyCollision(true);
	//RightFistCollisionBox->SetNotifyRigidBodyCollision(true);

	////Whenever the Attack is started the Collision profile is changed to weapon and the colliders are live.	
	//LeftFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);
	//RightFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);

	////Collision boxes we are setting this to generate overlap events.
	//LeftFistCollisionBox->SetGenerateOverlapEvents(true);
	//RightFistCollisionBox->SetGenerateOverlapEvents(true);

	////In order to solve a weird firing bug we are going to refactor the method to have everything in here. 

	////You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	//Log(ELogLevel::INFO, __FUNCTION__);

	//This whole section is new, we are taking the values from our data driven asset and passing them in to our
	//Attack montage. This is allowing us to create a solution to allow data driven gameplay.
}

void AMyProjectCharacter::PunchAttack()
{
	//You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	Log(ELogLevel::INFO, __FUNCTION__);

	//Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	//want to force simulates hit to be true.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(true);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(true);

	//Whenever the Attack is started the Collision profile is changed to weapon and the colliders are live.	
	LeftFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);
	RightFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);

	//Collision boxes we are setting this to generate overlap events.
	LeftFistCollisionBox->SetGenerateOverlapEvents(true);
	RightFistCollisionBox->SetGenerateOverlapEvents(true);

	if (PlayerFistAttackDataTable != NULL)
	{
		static const FString ContextString(TEXT("Player Attack Montage Context"));
		AttackMontage = PlayerFistAttackDataTable->FindRow<FPlayerAttackMontage>(FName(TEXT("AnimationMontage0")), ContextString, true);

		if (AttackMontage != NULL)
		{
			//Generate a random number between 1 & whatever is defined in the datatable for this montage
			int MontageSectionIndex = rand() % AttackMontage->AnimSectionCount + 1;

			//Create a new FString reference for the animation section
			FString MontageSection = "start_" + FString::FromInt(MontageSectionIndex);

			//Then play the result
			PlayAnimMontage(AttackMontage->AnimMontage, AnimationMontageSpeed, FName(*MontageSection));

			AttackEnd();
		}
	}

	//17:07 https://www.youtube.com/watch?v=rJ1JIhfTKJk&t=698s
}

void AMyProjectCharacter::KickAttack()
{
	//You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	Log(ELogLevel::INFO, __FUNCTION__);

	//Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	//want to force simulates hit to be true.
	LeftLegCollisionBox->SetNotifyRigidBodyCollision(true);
	RightLegCollisionBox->SetNotifyRigidBodyCollision(true);

	//Whenever the Attack is started the Collision profile is changed to weapon and the colliders are live.	
	LeftLegCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);
	RightLegCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);

	//Collision boxes we are setting this to generate overlap events.
	LeftLegCollisionBox->SetGenerateOverlapEvents(true);
	RightLegCollisionBox->SetGenerateOverlapEvents(true);

	PlayAnimMontage(KickAttackMontage,AnimationMontageSpeed);

	//It doesn't play the kick attack montage, could be something to do with the data asset
	if (PlayerKickAttackDataTable != NULL)
	{
		static const FString ContextString(TEXT("Player Attack Montage Context"));
		AttackMontage = PlayerKickAttackDataTable->FindRow<FPlayerAttackMontage>(FName(TEXT("AnimationMontage1")), ContextString, true);

		if (KickAttackMontage != nullptr)
		{
			//Generate a random number between 1 & whatever is defined in the datatable for this montage
			int MontageSectionIndex = rand() % AttackMontage->AnimSectionCount + 1;

			//Create a new FString reference for the animation section
			FString MontageSection = "start_" + FString::FromInt(MontageSectionIndex);

			//Then play the result
			PlayAnimMontage(AttackMontage->AnimMontage, AnimationMontageSpeed, FName(*MontageSection));

		}
	}
}

void AMyProjectCharacter::AttackStart()
{	
	Log(ELogLevel::INFO, __FUNCTION__);

	//Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	//want to force simulates hit to be true.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(true);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(true);

	//Whenever the Attack is started the Collision profile is changed to weapon and the colliders are live.	
	LeftFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);
	RightFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Enabled);

	//Collision boxes we are setting this to generate overlap events.
	LeftFistCollisionBox->SetGenerateOverlapEvents(true);
	RightFistCollisionBox->SetGenerateOverlapEvents(true);
}

void AMyProjectCharacter::AttackEnd()
{
	//You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	Log(ELogLevel::INFO, __FUNCTION__);

	//Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	//want to force simulates hit to be true.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(false);
	LeftLegCollisionBox->SetNotifyRigidBodyCollision(false);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(false);
	RightLegCollisionBox->SetNotifyRigidBodyCollision(false);

	//Then when attack end is called post attack. We then make the colliders not live. Think of them like
	//live wires, on enemies die. Off Enemies don't die.
	LeftFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);
	LeftLegCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);
	RightFistCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);
	RightLegCollisionBox->SetCollisionProfileName(MeleeCollisionProfile.Disabled);

	//Collision boxes we are setting this to generate overlap events.
	LeftFistCollisionBox->SetGenerateOverlapEvents(false);
	LeftLegCollisionBox->SetGenerateOverlapEvents(false);
	RightFistCollisionBox->SetGenerateOverlapEvents(false);
	RightLegCollisionBox->SetGenerateOverlapEvents(false);
	
}

//This is a delegate method, it takes a pointer to a UPrimative Component, 
//A pointer to AAActor*, to overlapping primitive component, an FVector

//Paramater list :
// 1. The component that is instigating the collision, left or right fist? in this case.
// 2. The actor that we are interfacing with.
// 3. The primitive component on the actor we are interfacing with.
// 4. A struct that contains the normals of the collider?
// 5. Contains infomation about impact of a trace.

// This is a multicast delegate, so called because it casts to multiple actors.
void AMyProjectCharacter::OnAttackHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Log(ELogLevel::TRACE, __FUNCTION__);
	Log(ELogLevel::TRACE, Hit.GetActor()->GetName());

	if (PunchAudioComponent && !PunchAudioComponent->IsPlaying())
	{
		//Default value is 1.0.
		PunchAudioComponent->SetPitchMultiplier(FMath::RandRange(LowerPitchBound, UpperPitchBound));
		PunchAudioComponent->Play(0.1f);
	}

	//Getting the animation instance, and checking to see if it is valid. We are using an inline-if. If it is not loaded on Attack
	//Then it will show an error.
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance != NULL)
	{
		//Working allows us but the animation still moves through the collision object.
		//AnimInstance->Montage_Stop(AnimationStopDelay, AttackMontage->AnimMontage);	
	
		//This pauses the animation, not quite what we want.
		//AnimInstance->Montage_Pause(AttackMontage->AnimMontage);
	
		//This is pretty good, this stops the animation montage on contact?
		//AnimInstance->Montage_Stop(AnimationStopDelay,MeleeFistAttackMontage);
	
		//Play back the montage in reverse, based on this montages position, and play it backwards. Based on the 
		AnimInstance->Montage_Play(AttackMontage->AnimMontage, AnimationPlayback, EMontagePlayReturnType::Duration, AnimInstance->Montage_GetPosition(AttackMontage->AnimMontage), true );
	
	}

	AttackEnd();

	//This is a pointer to the InGameHUD Actor which we included in our header file.
	//We then cast this as AInGameHUD, and get the world, and then access the GetFirstPlayerController method
	//and then get HUD from there.

	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		CurrentComboCount++;
		InGameHUD->UpdateComboCount(CurrentComboCount);

	}

	if (!GetWorld()->GetTimerManager().IsTimerActive(ComboResetHandle))
	{
		GetWorld()->GetTimerManager().SetTimer(ComboResetHandle, this, &AMyProjectCharacter::ResetCombo, ComboResetDelay, false);
	}
	else {
		GetWorld()->GetTimerManager().ClearTimer(ComboResetHandle);
		GetWorld()->GetTimerManager().SetTimer(ComboResetHandle, this, &AMyProjectCharacter::ResetCombo, ComboResetDelay, false);
	}

	AttackEnd();

}

void AMyProjectCharacter::ResetCombo()
{
	CurrentComboCount = 0;

	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		InGameHUD->ResetCombo();

	}
}

void AMyProjectCharacter::Sprint()
{
	//Log(ELogLevel::TRACE, __FUNCTION__);

	GetCharacterMovement()->MaxWalkSpeed = CurrentSprintSpeed;

	//CameraBoom->TargetArmLength = FMath::FInterpTo(300.0f, 350.0f, 100.0f, 100.0f); // The camera follows at this distance behind the character	
	CameraBoom->TargetArmLength = FMath::Lerp(300.0f, 350.0f, 0.9f);


}

void AMyProjectCharacter::StopSprinting()
{
	//Log(ELogLevel::TRACE, __FUNCTION__);
	GetCharacterMovement()->MaxWalkSpeed = CurrentWalkSpeed;
	CameraBoom->TargetArmLength = FMath::FInterpTo(350.0f, 300.0f, 20.0f, 20.0f);; // The camera follows at this distance behind the character	

}

void AMyProjectCharacter::FireLineTrace()
{
	FVector End;
	FVector Start;

	const float Spread = FMath::DegreesToRadians(LineTraceSpread * 0.5f);

	if (LineTraceType == ELineTraceType::CAMERA_SINGLE || LineTraceType == ELineTraceType::CAMERA_SPREAD)
	{
		//Get Camera point of v
		FVector cameraLocation = FollowCamera->GetComponentLocation();
		FRotator cameraRotation = FollowCamera->GetComponentRotation();

		Start = cameraLocation;
		if (LineTraceType == ELineTraceType::CAMERA_SPREAD)
		{
			End = cameraLocation + FMath::VRandCone(cameraRotation.Vector(), Spread, Spread) * LineTraceDistance;
		}
		else
		{
			//Ending location is where the camera is facing based on the line trace distance.
			End = cameraLocation + (cameraRotation.Vector() * LineTraceDistance );
		}

	}

	else if (LineTraceType == ELineTraceType::PLAYER_SINGLE || LineTraceType == ELineTraceType::PLAYER_SPREAD)
	{
		FVector PlayerEyesLocation;
		FRotator PlayerEyesRotation;
	
		//Populates FVectors and FRotators with what the player is currently looking at.
		GetActorEyesViewPoint(PlayerEyesLocation, PlayerEyesRotation);

		Start = PlayerEyesLocation;

		//42:08 https://www.youtube.com/watch?v=mz9C656dUuY&feature=youtu.be - My math is off, or the spraed is too wide/

		if (LineTraceType == ELineTraceType::PLAYER_SPREAD)
		{
			End = PlayerEyesLocation + FMath::VRandCone(PlayerEyesRotation.Vector(), Spread, Spread) * LineTraceDistance;
		}
		else
		{
			End = PlayerEyesLocation + (PlayerEyesRotation.Vector() * LineTraceDistance);
		}
	}

	FHitResult HitDetails = FHitResult(ForceInit);
	FCollisionQueryParams TraceParams(FName(TEXT("Line Trace Paramaters")), true, NULL);
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;


	bool bIsHit = GetWorld()->LineTraceSingleByChannel(HitDetails, Start, End, ECollisionChannel::ECC_WorldDynamic, TraceParams);

	if (bIsHit)
	{
		Log(ELogLevel::INFO, "We Hit something!");
		DrawDebugLine(GetWorld(),Start, End, FColor::Green, true, 5.0f , ECC_WorldStatic, 1.0f);
		Log(ELogLevel::WARNING, HitDetails.Actor->GetName());
		Log(ELogLevel::DEBUG, FString::SanitizeFloat(HitDetails.Distance));

		DrawDebugBox(GetWorld(), HitDetails.ImpactPoint, FVector(2.0f,2.0f,2.0f), DebugBoxColor, false , DebugBoxLifeTime , ECC_WorldStatic, DebugBoxLineThickness);

	}
	else
	{
		Log(ELogLevel::INFO, "We Hit Nothing!");
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, true, 5.0f, ECC_WorldStatic, 1.0f);
	}

}

void AMyProjectCharacter::Log(ELogLevel LogLevel, FString Message)
{
	Log(LogLevel, Message, ELogOutput::ALL);
}

void AMyProjectCharacter::Log(ELogLevel LogLevel, FString Message, ELogOutput LogOutput)
{
	//Only print when the screen is selected, and the GEngine object is avaliable.
	if ((LogOutput == ELogOutput::ALL || LogOutput == ELogOutput::SCREEN) && GEngine)
	{
		//Default Color is cyan
		FColor LogColor = FColor::Cyan;

		//Flip the color based on the type of log, warning would be red. Info would be white...
		switch (LogLevel)
		{
		case ELogLevel::TRACE:
			LogColor = FColor::Green;
			break;

		case ELogLevel::DEBUG:
			LogColor = FColor::Cyan;
			break;

		case ELogLevel::INFO:
			LogColor = FColor::White;
			break;

		case ELogLevel::WARNING:
			LogColor = FColor::Orange;
			break;

		case ELogLevel::ERROR:
			LogColor = FColor::Red;
			break;
		default:
			break;
		}
		GEngine->AddOnScreenDebugMessage(-1, 4.5f, LogColor, Message);
	}

	if (LogOutput == ELogOutput::ALL || LogOutput == ELogOutput::OUTPUT_LOG)
	{
		//flip the message based on error level
		switch (LogLevel)
		{
		case ELogLevel::TRACE:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message)
				break;

		case ELogLevel::DEBUG:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message)
				break;

		case ELogLevel::INFO:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message)
				break;

		case ELogLevel::WARNING:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message)
				break;

		case ELogLevel::ERROR:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message)
				break;
		default:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message)
				break;
		}
	}
}