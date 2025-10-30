// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/TAB_MenuGameMode.h"
#include "TABTestProjectMenuGameMode.generated.h"

UCLASS()
class TABTESTPROJECT_API ATABTestProjectMenuGameMode : public ATAB_MenuGameMode
{
	GENERATED_BODY()

public:
	/** Initialization */
	virtual void BeginPlay() override;

};
