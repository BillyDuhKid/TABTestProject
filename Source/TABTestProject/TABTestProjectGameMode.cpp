// Copyright Epic Games, Inc. All Rights Reserved.

#include "TABTestProjectGameMode.h"
#include "Subsystems/TAB_GameCreatorSubsystem.h"

#include "UObject/ConstructorHelpers.h"
#include "Logging/StructuredLog.h"	//UE_LOGFMT

#include UE_INLINE_GENERATED_CPP_BY_NAME(TABTestProjectGameMode)


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

void ATABTestProjectGameMode::InitializeGameCreator()
{
	// get GameCreator.
	UTAB_GameCreatorSubsystem* GameCreator = GetWorld()->GetGameInstance()->GetSubsystem<UTAB_GameCreatorSubsystem>();
	if (!IsValid(GameCreator)){ return; }

	TArray <FGameMapStruct> MainMenuMaps{ FGameMapStruct(FText::FromString("Main Menu Map"), "/Game/Maps/GameStartupMap") };
	GameCreator->SetMainMenuMaps(MainMenuMaps);

	TArray<FGameModeStruct> GameModes{};

	if (true)	//Test 3 map progression.
	{
		FGameMapStruct Map1 = FGameMapStruct(FText::FromString("Test Level 1"), "/Game/Maps/Level1.Level1");
		FGameMapStruct Map2 = FGameMapStruct(FText::FromString("Test Level 2"), "/Game/Maps/Level2.Level2");
		FGameMapStruct Map3 = FGameMapStruct(FText::FromString("Test Level 3"), "/Game/Maps/Level3.Level3");
		GameModes = { FGameModeStruct("TABTestProjectMenuGameMode", 2, { Map1, Map2, Map3 }) };
	}
	else
	{
		GameModes = { FGameModeStruct("TABTestProjectMenuGameMode", 2, { FGameMapStruct(FText::FromString("TAB Test Map"), "/Game/ThirdPerson/Lvl_ThirdPerson") }) };
	}

	GameCreator->SetGameModes(GameModes);
}
