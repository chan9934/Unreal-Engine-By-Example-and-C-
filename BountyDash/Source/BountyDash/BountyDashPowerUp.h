// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BountyDashObject.h"
#include "BountyDashPowerUp.generated.h"

/**
 * 
 */
UCLASS()
class BOUNTYDASH_API ABountyDashPowerUp : public ABountyDashObject
{
	GENERATED_BODY()

public:
	ABountyDashPowerUp();

public:

		virtual void MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)override;


protected:
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Mesh;

private:
	class UPowerUpObject* PowerUp;
	
};
