// Copyright Epic Games, Inc. All Rights Reserved.

#include "TABTestProjectGameMode.h"
#include "UObject/ConstructorHelpers.h"

ATABTestProjectGameMode::ATABTestProjectGameMode()
	: Super()
{
	// set default pawn class back to it's Blueprinted character default or other desired class. 
	// See setup.txt in Plugins folder for details of why these lines are here.
	// Note: this path is the default Third Person Blueprint template location.
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
