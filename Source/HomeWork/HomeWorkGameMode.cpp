// Copyright Epic Games, Inc. All Rights Reserved.
#include "HomeWork.h"
#include "HomeWorkGameMode.h"
#include "HomeWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomeWorkGameMode::AHomeWorkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void AHomeWorkGameMode::StartPlay()
{
	Super::StartPlay();


	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World"));
	}
}