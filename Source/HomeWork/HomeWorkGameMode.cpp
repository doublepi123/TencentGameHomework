// Copyright Epic Games, Inc. All Rights Reserved.

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
