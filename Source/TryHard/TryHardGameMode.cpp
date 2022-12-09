// Copyright Epic Games, Inc. All Rights Reserved.

#include "TryHardGameMode.h"
#include "TryHardCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATryHardGameMode::ATryHardGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
