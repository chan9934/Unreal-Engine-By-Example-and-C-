// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "Components/SphereComponent.h"
#include "BountyDash_Test.h"
#include "BountyDash_TestGameModeBase.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	check(Collider);
	RootComponent = Collider;
	Collider->SetCollisionProfileName("OverlapAllDynamic");

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);
	Mesh->AttachTo(Collider);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	KillPoint = -20000.0f;

	OnActorBeginOverlap.AddDynamic(this, &AObstacle::MyOnActorOverlap);
	OnActorEndOverlap.AddDynamic(this, &AObstacle::MyOnActorEndOverlap);




}

void AObstacle::SetKillPoint(float point)
{
	KillPoint = point;
}

float AObstacle::GetKillPoint()
{
	return KillPoint;
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

void AObstacle::MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

void AObstacle::MyOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float GameSpeed = GetCustomGameMode<ABountyDash_TestGameModeBase>(GetWorld())->GetInvGameSpeed();
	AddActorLocalOffset(FVector(GameSpeed, 0.0f, 0.0f));

	if (GetActorLocation().X < KillPoint)
	{
		Destroy();
	}
}

