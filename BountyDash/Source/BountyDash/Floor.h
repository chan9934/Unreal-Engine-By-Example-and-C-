// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floor.generated.h"

UCLASS()
class BOUNTYDASH_API AFloor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloor();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetKillPoint();
	float GetSpawnPoint();

protected:
	UPROPERTY(EditAnywhere)
		TArray<class USceneComponent*> FloorMeshScenes;

	UPROPERTY(EditAnywhere)
		TArray<class UStaticMeshComponent*> FloorMeshes;

	UPROPERTY(EditAnywhere)
		class UBoxComponent* CollisionBox;

	int32 NumRepeatingMesh;
	float KillPoint;
	float SpawnPoint;

};
