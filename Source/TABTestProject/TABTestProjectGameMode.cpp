// Copyright Epic Games, Inc. All Rights Reserved.

#include "TABTestProjectGameMode.h"
#include "UObject/ConstructorHelpers.h"

ATABTestProjectGameMode::ATABTestProjectGameMode()
	: Super()
{
	// Replace the two settings changed in the Blueprint class here in C++ to avoid needing to create a new Blueprint just to change them.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonPlayerController"));
	if (PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
