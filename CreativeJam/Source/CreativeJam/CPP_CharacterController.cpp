// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CharacterController.h"

// Sets default values
ACPP_CharacterController::ACPP_CharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_CharacterController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_CharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_CharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

