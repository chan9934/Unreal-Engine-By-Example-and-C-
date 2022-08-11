// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BountyDash_TestGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class BOUNTYDASH_TEST_API ABountyDash_TestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY()
		float gameSpeed;
	UPROPERTY()
		int32 gameLevel;

public:
	ABountyDash_TestGameModeBase();
	void CharScoreUp(unsigned int charScore);

	UFUNCTION()
		float GetInvGameSpeed();

	UFUNCTION()
		flaot GetGameSpeed();

	UFUNCTION()
		int32 GetGameLevel();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 numCoinsForSpeedIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		float ameSpeedIncrease;

};
