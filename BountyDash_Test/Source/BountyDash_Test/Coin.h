// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Obstacle.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class BOUNTYDASH_TEST_API ACoin : public AObstacle
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoin();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)override;

public:
	void ScoreUp();

};
