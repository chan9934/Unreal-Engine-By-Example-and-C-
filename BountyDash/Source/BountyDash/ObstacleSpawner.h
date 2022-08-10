// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.h"
#include "ObstacleSpawner.generated.h"

UCLASS()
class BOUNTYDASH_API AObstacleSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AObstacleSpawner();

protected:

	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	void SpawnObstacle();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<AObstacle>> ObstaclesToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class ATargetPoint* > SpawnTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SpawnTimer; 

	UPROPERTY()
		class USceneComponent* Scene;

private:
	float KillPoint;
	float SpawnPoint;
	float TimeSinceLastSpawn;

};
