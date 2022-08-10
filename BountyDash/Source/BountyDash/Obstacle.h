// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class BOUNTYDASH_API AObstacle : public AActor
{
	GENERATED_BODY()

private:
	float KillPoint;

	
public:	
	// Sets default values for this actor's properties
	AObstacle();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetKillPoint(float point);
	float GetKillPoint();

protected:
	UFUNCTION()
		virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor);

	UFUNCTION()
		virtual void MyOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USphereComponent* Collider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Mesh;

};
