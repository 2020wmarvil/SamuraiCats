// Copyright Epic Games, Inc. All Rights Reserved.

#include "SamuraiCat_UE5GameMode.h"
#include "SamuraiCat_UE5Character.h"
#include "UObject/ConstructorHelpers.h"

ASamuraiCat_UE5GameMode::ASamuraiCat_UE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
