// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpeedRunnerGameMode.h"
#include "SpeedRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpeedRunnerGameMode::ASpeedRunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
