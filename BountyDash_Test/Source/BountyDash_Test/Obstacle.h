// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class BOUNTYDASH_TEST_API AObstacle : public AActor
{
	GENERATED_BODY()

private:
	float KillPoint;

public:
	// Sets default values for this actor's properties
	AObstacle();

	void SetKillPoint(float point);


	float GetKillPoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USphereComponent* Collider;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
		virtual void MyOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
