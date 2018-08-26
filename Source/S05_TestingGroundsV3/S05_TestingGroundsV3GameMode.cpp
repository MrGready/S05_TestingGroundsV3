// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGroundsV3GameMode.h"
#include "S05_TestingGroundsV3HUD.h"
#include "S05_TestingGroundsV3Character.h"
#include "UObject/ConstructorHelpers.h"

AS05_TestingGroundsV3GameMode::AS05_TestingGroundsV3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TestingGroundsV3HUD::StaticClass();
}
