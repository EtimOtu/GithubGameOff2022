// Copyright Epic Games, Inc. All Rights Reserved.

#include "GithubGameJamGameMode.h"
#include "GithubGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGithubGameJamGameMode::AGithubGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
