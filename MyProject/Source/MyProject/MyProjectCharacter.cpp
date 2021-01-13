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
 

//////////////////////////////////////////////////////////////////////////
// AMyProjectCharacter

AMyProjectCharacter::AMyProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// set our animation montage play speed
	AnimationMontageSpeed = 1.0f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

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

	//Including intialisation directives for our collision boxes, these are intialised to a subObject	
	LeftFistCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollsionBox"));
	RightFistCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollsionBox"));

	//We like we do with the camera access the setup attachment method through a pointer.
	LeftFistCollisionBox->SetupAttachment(RootComponent);
	RightFistCollisionBox->SetupAttachment(RootComponent);


	//Set both to be hidden in game - No point doing it in BP
	LeftFistCollisionBox->SetHiddenInGame(false);
	RightFistCollisionBox->SetHiddenInGame(false);

	//This is forcing it to ensure that rigidbody collsion notifications are setup correctly.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(false);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(false);

	
	//Based on what we set up in project settings we need to add these collision profiles.
	//Go to the project settings and read through this, if you're stuck!
	LeftFistCollisionBox->SetCollisionProfileName("NoCollision");
	RightFistCollisionBox->SetCollisionProfileName("NoCollision");

}

//Begin play is essentially awake. 
void AMyProjectCharacter::BeginPlay()
{
	//Passing a call to the super class iteration before we start playing.
	Super::BeginPlay();
	
	//Attach Collision Components to sockets based on transformation definitions.
	//Sockets are little collider locations set up on the bone structure which is imported into unreal.
	//Look into this and see the different params that this takes. 15:10 on video to see how this works. WATCH IT.
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	//Attaching to the sockets that we defined on the skeleton
	LeftFistCollisionBox->AttachToComponent(GetMesh(),AttachmentRules,"LSocket_Collider");
	RightFistCollisionBox->AttachToComponent(GetMesh(), AttachmentRules, "RSocket_Collider");

	//OnComponent hit, similar to bp we are creating this implementation inside our begin play.
	LeftFistCollisionBox->OnComponentHit.AddDynamic(this, &AMyProjectCharacter::OnAttackHit);
	RightFistCollisionBox->OnComponentHit.AddDynamic(this, &AMyProjectCharacter::OnAttackHit);

	//Checking to see where the overlap begins.
	LeftFistCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyProjectCharacter::OnAttackOverlapBegin);
	RightFistCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyProjectCharacter::OnAttackOverlapBegin);

	//Checking to see where the overlap ends.
	LeftFistCollisionBox->OnComponentEndOverlap.AddDynamic(this, &AMyProjectCharacter::OnAttackOverlapEnd);
	RightFistCollisionBox->OnComponentEndOverlap.AddDynamic(this, &AMyProjectCharacter::OnAttackOverlapEnd);

}

//////////////////////////////////////////////////////////////////////////
// Input

void AMyProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyProjectCharacter::MoveRight);

	//Attack input
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyProjectCharacter::AttackInput);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &AMyProjectCharacter::AttackEnd);


	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyProjectCharacter::LookUpAtRate);
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
	if ( (Controller != NULL) && (Value != 0.0f) )
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


void AMyProjectCharacter::AttackStart()
{
	//You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	Log(ELogLevel::INFO, __FUNCTION__);

	//Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	//want to force simulates hit to be true.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(true);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(true);

	//Whenever the Attack is started the Collision profile is changed to weapon and the colliders are live.	
	LeftFistCollisionBox->SetCollisionProfileName("Weapon");
	RightFistCollisionBox->SetCollisionProfileName("Weapon");

	//Collision boxes we are setting this to generate overlap events.
	LeftFistCollisionBox->SetGenerateOverlapEvents(true);
	RightFistCollisionBox->SetGenerateOverlapEvents(true);

}


void AMyProjectCharacter::AttackInput()
{
	//In order to solve a weird firing bug we are going to refactor the method to have everything in here. 


	//You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	Log(ELogLevel::INFO, __FUNCTION__);

	//PlayAnimMontage(MeleeFistAttackMontage, AnimationMontageSpeed,FName("start_1"));

	//Generate a random number between 1 & 2
	int MontageSectionIndex = rand() % 3 + 1;

	//Create a new fstring reference for the animation section
	FString MontageSection = "start_" + FString::FromInt(MontageSectionIndex);

	//Then play the result
	PlayAnimMontage(MeleeFistAttackMontage, AnimationMontageSpeed, FName(*MontageSection));


}

void AMyProjectCharacter::AttackEnd()
{
	//You've seen __Function before, this is a helper method that allows us to print out where something is coming from!
	Log(ELogLevel::INFO, __FUNCTION__);

	//Before the attack, we also need to set up the onCollsion logic this is a weird thing by epic. Do this if you
	//want to force simulates hit to be true.
	LeftFistCollisionBox->SetNotifyRigidBodyCollision(false);
	RightFistCollisionBox->SetNotifyRigidBodyCollision(false);
	

	//Then when attack end is called post attack. We then make the colliders not live. Think of them like
	//live wires, on enemies die. Off Enemies don't die.
	LeftFistCollisionBox->SetCollisionProfileName("NoCollision");
	RightFistCollisionBox->SetCollisionProfileName("NoCollision");


	//Collision boxes we are setting this to generate overlap events.
	LeftFistCollisionBox->SetGenerateOverlapEvents(false);
	RightFistCollisionBox->SetGenerateOverlapEvents(false);


}

//This is a delegate method, it takes a pointer to a UPrimative Component, 
//A pointer to AAActor*, to overlapping primitive component, an FVector

//Paramater list :
// 1. The component that is instigating the collision, left or right fist? in this case.
// 2. The actor that we are interfacing with.
// 3. The primitive component on the actor we are interfacing with.
// 4. A struct that contains the normals of the collider?
// 5. Contains infomation about impact of a trace.

void AMyProjectCharacter::OnAttackHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Log(ELogLevel::TRACE, __FUNCTION__);
	Log(ELogLevel::TRACE, Hit.GetActor()->GetName());
}

//Paramater List
void AMyProjectCharacter::OnAttackOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Log(ELogLevel::TRACE, __FUNCTION__);
}

void AMyProjectCharacter::OnAttackOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Log(ELogLevel::TRACE, __FUNCTION__);
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