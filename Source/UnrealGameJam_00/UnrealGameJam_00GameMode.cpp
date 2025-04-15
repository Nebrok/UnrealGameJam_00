// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameJam_00GameMode.h"
#include "UnrealGameJam_00Character.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGameJam_00GameMode::AUnrealGameJam_00GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
