#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BountyDashGameMode.generated.h"

/**
 *
 */
UCLASS()
class BOUNTYDASH_API ABountyDashGameMode : public AGameMode
{
	GENERATED_BODY()
private:

	UPROPERTY()
		float gameSpeed;

	UPROPERTY()
		int32 gameLevel;

	//ÇÔ¼ö
public:
	ABountyDashGameMode();

	void CharScoreUp(unsigned int charScore);

	UFUNCTION()
		float GetInvGameSpeed();

	UFUNCTION()
		float GetGameSpeed();

	UFUNCTION()
		int32 GetGameLevel();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 numCoinsForSpeedIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float gameSpeedIncrease;

public:
	void ReduceGameSpeed();

protected:
	UPROPERTY()
		float RunTime;

public:
	float GetRunTime();

	UFUNCTION()
		virtual void Tick(float DeltaSeconds)override;

	UFUNCTION()
		bool GetGameOver();

	UFUNCTION()
		void GameOver();

	UFUNCTION()
		void SetGamePaused(bool gamePaused);

	UPROPERTY()
		bool bGameOver;

	UPROPERTY()
		bool startGameOverCount;

	UPROPERTY()
		float timeTillGameOver;

	UPROPERTY()
		float gameOverTimer;

	
};
