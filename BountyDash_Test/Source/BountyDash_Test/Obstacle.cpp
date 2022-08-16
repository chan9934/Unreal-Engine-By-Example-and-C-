// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "BountyDash_Test.h"
#include "BountyDash_TestGameModeBase.h"
#include "Components/SphereComponent.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);
	Mesh->AttachTo(Collider);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
}


