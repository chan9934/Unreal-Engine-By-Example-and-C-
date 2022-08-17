// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BountyDashObject.generated.h"

UCLASS()
class BOUNTYDASH_TEST_API ABountyDashObject : public AActor
{
	GENERATED_BODY()
private:
	float KillPoint;

public:
	// Sets default values for this actor's properties
	ABountyDashObject();

	void SetKillPoint(float point);
	float GetKillPoint();



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

protected:
	UFUNCTION()
		virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);


	UFUNCTION()
		virtual void MyOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UPROPERTY(EditAnywhere)
		class USphereComponent* Collider;
};
