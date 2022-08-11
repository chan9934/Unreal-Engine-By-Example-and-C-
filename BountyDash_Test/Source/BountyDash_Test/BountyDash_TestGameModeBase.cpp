// Copyright Epic Games, Inc. All Rights Reserved.


#include "BountyDash_TestGameModeBase.h"
#include "Bounty_Dash_Character.h"

ABountyDash_TestGameModeBase::ABountyDash_TestGameModeBase()
{
	DefaultPawnClass = ABounty_Dash_Character::StaticClass();
}

void ABountyDash_TestGameModeBase::CharScoreUp(unsigned int charScore)
{
}

float ABountyDash_TestGameModeBase::GetInvGameSpeed()
{
	return -gameSpeed;
}

flaot ABountyDash_TestGameModeBase::GetGameSpeed()
{
	return gameSpeed;
}

int32 ABountyDash_TestGameModeBase::GetGameLevel()
{
	return gameLevel;
}
