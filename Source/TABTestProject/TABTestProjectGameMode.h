// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Game/TAB_GameMode.h"
#include "TABTestProjectGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class ATABTestProjectGameMode : public ATAB_GameMode
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	ATABTestProjectGameMode();
};



