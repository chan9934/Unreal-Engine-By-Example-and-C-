// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BountyDashObject.h"
#include "Obstacle.generated.h"

UCLASS()
class BOUNTYDASH_TEST_API AObstacle : public ABountyDashObject
{
	GENERATED_BODY()



public:
	// Sets default values for this actor's properties
	AObstacle();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Mesh;


};
