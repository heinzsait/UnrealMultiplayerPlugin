// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_MenuSystemGameMode.h"
#include "MP_MenuSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_MenuSystemGameMode::AMP_MenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
