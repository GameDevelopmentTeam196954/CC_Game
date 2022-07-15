// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

UCLASS()
class CHARACTERCUSTOMIZER_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter::AMyCharacter()
	{
		// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;

		CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
		CameraBoom->SetupAttachment(RootComponent);

		CameraBoom->TargetArmLength = 300.0f;

		FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Follow Camera"));
		FollowCamera->SetupAttachment(CameraBoom);
	}
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
