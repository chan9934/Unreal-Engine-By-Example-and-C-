// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"



/**
 *
 */
UCLASS()
class BOUNTYDASH_API ACoin : public AObstacle
{
	GENERATED_BODY()
public:
	ACoin();

private:
	virtual void Tick(float DeltaSeconds) override;


	virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)override;



};
