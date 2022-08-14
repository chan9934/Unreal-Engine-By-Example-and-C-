// Copyright Epic Games, Inc. All Rights Reserved.


#include "BountyDash_TestGameModeBase.h"
#include "Bounty_Dash_Character.h"

ABountyDash_TestGameModeBase::ABountyDash_TestGameModeBase()
{
	DefaultPawnClass = ABounty_Dash_Character::StaticClass();
	gameSpeed = 10.0;
	gameLevel = 1;
	numCoinsForSpeedIncrease = 5;
	gameSpeedIncrease =5.2 ;

}

void ABountyDash_TestGameModeBase::CharScoreUp(unsigned int charScore)
{
	if (charScore != 0 && charScore % numCoinsForSpeedIncrease == 0)
	{
		gameSpeed += gameSpeedIncrease;
		gameLevel++;
	}
}

float ABountyDash_TestGameModeBase::GetInvGameSpeed()
{
	return -gameSpeed;
}

float ABountyDash_TestGameModeBase::GetGameSpeed()
{
	return gameSpeed;
}

int32 ABountyDash_TestGameModeBase::GetGameLevel()
{
	return gameLevel;
}
