// Copyright Epic Games, Inc. All Rights Reserved.

#include "FreeCodeCampTutorialGameMode.h"
#include "FreeCodeCampTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFreeCodeCampTutorialGameMode::AFreeCodeCampTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
