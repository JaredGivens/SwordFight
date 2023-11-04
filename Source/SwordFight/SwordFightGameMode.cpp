// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwordFightGameMode.h"
#include "SwordFightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwordFightGameMode::ASwordFightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
