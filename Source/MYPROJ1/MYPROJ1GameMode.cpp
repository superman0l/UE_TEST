// Copyright Epic Games, Inc. All Rights Reserved.

#include "MYPROJ1GameMode.h"
#include "MYPROJ1Character.h"
#include "UObject/ConstructorHelpers.h"

AMYPROJ1GameMode::AMYPROJ1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
