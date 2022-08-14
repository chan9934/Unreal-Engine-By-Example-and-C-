// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor.h"
#include "Components/BoxComponent.h"
#include "Components/BoxComponent.h"
#include "BountyDash_TestGameModeBase.h"
#include "BountyDash_Test.h"

// Sets default values
AFloor::AFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	ConstructorHelpers::FObjectFinder<UStaticMesh>myMesh(TEXT("/Game/StaticMesh/Mesh_Bounty_Floor.Mesh_Bounty_Floor"));
	ConstructorHelpers::FObjectFinder<UMaterial>MyMaterial(TEXT("/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles"));
	if (myMesh.Succeeded())
	{
		NumRepeatingMesh = 3;

		FBoxSphereBounds myBounds = myMesh.Object->GetBounds();
		float XBounds = myBounds.BoxExtent.X * 2;
		float ScenePos = ((XBounds * (NumRepeatingMesh - 1)) / 2.0f) * -1;
		KillPoint = ScenePos - (XBounds * 0.5f);
		SpawnPoint = -1 * ScenePos + XBounds * 0.5f;
		for (int i = 0; i < NumRepeatingMesh; ++i)
		{
			FString SceneName = "Scene" + FString::FromInt(i);
			FName SceneID = FName(*SceneName);
			USceneComponent* thisScene = CreateDefaultSubobject<USceneComponent>(SceneID);

			check(thisScene);

			thisScene->AttachTo(RootComponent);
			thisScene->SetRelativeLocation(FVector(ScenePos, 0.0f, 0.0f));
			ScenePos += XBounds;
			FloorMeshScenes.Add(thisScene);

			FString MeshName = "Mesh" + FString::FromInt(i);
			UStaticMeshComponent* thisMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(MeshName));

			check(thisMesh);

			thisMesh->AttachTo(FloorMeshScenes[i]);
			thisMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
			thisMesh->SetCollisionProfileName("OverlapAllDynamic");

			if (MyMaterial.Succeeded())
			{
				thisMesh->SetStaticMesh(myMesh.Object);
				thisMesh->SetMaterial(0, MyMaterial.Object);
			}
			FloorMeshes.Add(thisMesh);
		}

		CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
		check(CollisionBox);
		CollisionBox->AttachTo(RootComponent);
		CollisionBox->SetBoxExtent(FVector(SpawnPoint, myBounds.BoxExtent.Y, myBounds.BoxExtent.Z));

		CollisionBox->SetCollisionProfileName(TEXT("BlockAllDynamic"));


		
	}
	

}
	
float AFloor::GetKillPoint()
{
	return KillPoint;
}

float AFloor::GetSpawnPoint()
{
	return SpawnPoint;
}

// Called when the game starts or when spawned
void AFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	for (USceneComponent* Scene : FloorMeshScenes)
	{
		Scene->AddLocalOffset(FVector(GetCustomGameMode<ABountyDash_TestGameModeBase>(GetWorld())->GetInvGameSpeed(), 0.0f, 0.0f));

		if (Scene->GetComponentLocation().X < GetKillPoint())
		{
			Scene->SetRelativeLocation(FVector(SpawnPoint, 0.0f, 0.0f));
		}
			
	}

}

