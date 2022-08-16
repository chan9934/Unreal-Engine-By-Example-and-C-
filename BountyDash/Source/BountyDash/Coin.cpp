// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"
#include "Coin.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "BountyDashCharacter.h"

ACoin::ACoin()
{
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	check(Mesh);

	Mesh->AttachTo(RootComponent);
	
	Mesh->SetCollisionProfileName("OverlapAllDynamic");
	
}

void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mesh->AddLocalRotation(FRotator(5.0f, 0.0f, 0.0f));
}

void ACoin::MyOnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->GetClass()->IsChildOf(AObstacle::StaticClass())&& !BeingPulled)
	{
		USphereComponent* thisSphere = Cast<USphereComponent>(GetComponentByClass(USphereComponent::StaticClass()));

		USphereComponent* otherSphere = Cast<USphereComponent>(OtherActor->GetComponentByClass(USphereComponent::StaticClass()));

		if (otherSphere)
		{
			AddActorLocalOffset(FVector(0.0f, 0.0f, (otherSphere->GetUnscaledSphereRadius() * 2.0f) + Collider->GetUnscaledSphereRadius()));
		}
	}

	if (OtherActor->GetClass()->IsChildOf(ABountyDashCharacter::StaticClass()))
	{
		ABountyDashCharacter* myChar = Cast<ABountyDashCharacter>(OtherActor);
		myChar->ScoreUp();
		GetWorld()->DestroyActor(this);
	}
}
	
