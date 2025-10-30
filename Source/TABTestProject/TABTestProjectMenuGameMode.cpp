// Fill out your copyright notice in the Description page of Project Settings.


#include "TABTestProjectMenuGameMode.h"
#include "Subsystems/TAB_GameCreatorSubsystem.h"

void ATABTestProjectMenuGameMode::BeginPlay()
{
	// get GameCreator.
	UTAB_GameCreatorSubsystem* GameCreator = GetWorld()->GetGameInstance()->GetSubsystem<UTAB_GameCreatorSubsystem>();
	if (GameCreator == nullptr)
	{
		return;
	}

	//TODO: Should be a better place to set these game specific set once values.
	TArray<FGameModeStruct> GameModes{ FGameModeStruct("TABTestProjectMenuGameMode", 2, { FGameMapStruct(FText::FromString("TAB Test Map"), "/Game/ThirdPerson/Maps/ThirdPersonMap") }) };
	GameCreator->SetGameModes(GameModes);
	TArray <FGameMapStruct> MainMenuMaps{ FGameMapStruct(FText::FromString("Main Menu Map"), "/Game/Maps/GameStartupMap") };
	GameCreator->SetMainMenuMaps(MainMenuMaps);

	Super::BeginPlay();
}
