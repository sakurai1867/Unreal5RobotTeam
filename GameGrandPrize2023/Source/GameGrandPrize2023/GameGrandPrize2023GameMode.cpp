// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameGrandPrize2023GameMode.h"
#include "GameGrandPrize2023Character.h"
#include "UObject/ConstructorHelpers.h"

AGameGrandPrize2023GameMode::AGameGrandPrize2023GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
