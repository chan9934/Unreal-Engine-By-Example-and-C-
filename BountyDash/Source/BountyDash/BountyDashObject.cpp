// Fill out your copyright notice in the Description page of Project Settings.


#include "BountyDashObject.h"
#include "Components/SphereComponent.h"
#include "BountyDashGameMode.h"
#include "BountyDash.h"

// Sets default values
ABountyDashObject::ABountyDashObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	check(Collider);

	RootComponent = Collider;

	Collider->SetCollisionProfileName("OverlapAllDynamic");

	OnActorBeginOverlap.AddDynamic(this, &ABountyDashObject::MyOnActorEndOverlap);
	OnActorEndOverlap.AddDynamic(this, &ABountyDashObject::MyOnActorEndOverlap);

}

// Called when the game starts or when spawned
void ABountyDashObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABountyDashObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float gameSpeed = GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed();

	AddActorWorldOffset(FVector(gameSpeed, 0.0f, 0.0f));;

	if (GetActorLocation().X < KillPoint)
	{
		Destroy();
	}

}

void ABountyDashObject::SetKillPoint(float Point)
{
	KillPoint = Point;
}

float ABountyDashObject::GetKillPoint()
{
	return KillPoint;
}

void ABountyDashObject::MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

void ABountyDashObject::MyOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

