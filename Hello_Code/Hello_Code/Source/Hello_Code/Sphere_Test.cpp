// Fill out your copyright notice in the Description page of Project Settings.


#include "Sphere_Test.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/TextRenderComponent.h"

// Sets default values
ASphere_Test::ASphere_Test()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	RootComponent = SphereComponent;

	SphereComponent->InitSphereRadius(220.0f);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	UStaticMeshComponent* StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	StaticMeshComponent->AttachTo(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereAsset.Succeeded())
	{
		StaticMeshComponent->SetStaticMesh(SphereAsset.Object);
		StaticMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -50.0f));
	}
	UParticleSystemComponent* Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles"));
	Particle->AttachTo(SphereComponent);
	Particle->bAutoActivate = true;

	ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleVisual = TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire");
	if (ParticleVisual.Succeeded())
	{
		Particle->SetTemplate(ParticleVisual.Object);
	}

	TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	TextRenderComponent->AttachTo(SphereComponent);
	TextRenderComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 110.0f));

	TextRenderComponent->SetHorizontalAlignment(EHTA_Center);
	TextRenderComponent->SetYScale(2.0f);
	TextRenderComponent->SetXScale(2.0f);
	TextRenderComponent->SetVisibility(true);
	TextRenderComponent->SetText(NSLOCTEXT("AnyNS", "Any", "HelloWorld"));


}

// Called when the game starts or when spawned
void ASphere_Test::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASphere_Test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

