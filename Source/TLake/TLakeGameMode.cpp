// Copyright Epic Games, Inc. All Rights Reserved.

#include "TLakeGameMode.h"
#include "TLakeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATLakeGameMode::ATLakeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
