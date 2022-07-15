// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNPC.h"

// Sets default values
AMyNPC::AMyNPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyNPC::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyNPC::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

}

void AMyNPC::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, Axis);
}

void AMyNPC::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, Axis);
}

void AMyNPC::MoveLeft(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(LeftDirection, Axis);
}

void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	void JumpCallback();
	//The binding looks like this:

	// If we have a valid InputComponent...
	if (InputComponent)
	{
		// Bind an action to it
		InputComponent->BindAction
		(
			"Jump", // The input identifier (specified in DefaultInput.ini)
			IE_Pressed, // React when button pressed (or on release, etc., if desired)
			this, // The object instance that is going to react to the input
			&ACustomActor::JumpCallback // The function that will fire when input is received
		);
	}

	void SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
	{
		return PlayerInputComponent
	}

	CameraBoom->AMyNPC::SetupAttachment(RootComponent)
	{
		return CameraBoom ->();
	}

	FollowCamera->AMyNPC::SetupAttachment(CameraBoom)
	{
		return FollowCamera ->();
	}
}

