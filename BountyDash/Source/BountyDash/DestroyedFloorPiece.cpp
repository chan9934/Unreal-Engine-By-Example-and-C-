// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyedFloorPiece.h"
#include "DestructibleComponent.h"
#include "DestructibleMesh.h"
#include "Materials/Material.h"


// Sets default values
ADestroyedFloorPiece::ADestroyedFloorPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	check(RootComponent);

	Destructable = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Destructable"));
	check(Destructable);

	Destructable->AttachTo(RootComponent);
	Destructable->SetCollisionProfileName("OverlapAllDynamic");

	ConstructorHelpers::FObjectFinder<UDestructibleMesh>myDestMesh(TEXT("/Game/Static_Mesh/Destroyable_Mesh_DM.Destroyable_Mesh_DM"));
	ConstructorHelpers::FObjectFinder<UMaterial>myMaterial(TEXT("/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles"));
	if (myDestMesh.Succeeded()&&myMaterial.Succeeded())
	{
		Destructable->SetDestructibleMesh(myDestMesh.Object);
		Destructable->SetMaterial(0, myMaterial.Object);
	}


}

// Called when the game starts or when spawned
void ADestroyedFloorPiece::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle thisTimer;
	GetWorld()->GetTimerManager().SetTimer(thisTimer, this, &ADestroyedFloorPiece::Death, 4.0f, false);
}

void ADestroyedFloorPiece::Death()
{
	GetWorld()->DestroyActor(this);
}
