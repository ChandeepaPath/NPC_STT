// Copyright Epic Games, Inc. All Rights Reserved.

#include "NPC_STTGameMode.h"
#include "NPC_STTCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANPC_STTGameMode::ANPC_STTGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
