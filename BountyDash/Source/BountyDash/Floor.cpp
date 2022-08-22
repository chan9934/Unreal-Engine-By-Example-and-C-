// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor.h"
#include "BountyDashGameMode.h"
#include "components/SceneComponent.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "BountyDash.h"
#include "DestroyedFloorPiece.h"
#include "DestructibleComponent.h"

// Sets default values
AFloor::AFloor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	ConstructorHelpers::FObjectFinder<UStaticMesh>myMesh(TEXT("/Game/Static_Mesh/Destroyable_Mesh.Destroyable_Mesh"));

	ConstructorHelpers::FObjectFinder<UMaterial>myMaterial(TEXT("/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles"));
	
	if (myMesh.Succeeded())
	{
		NumRepeatingMesh = 30;

		FBoxSphereBounds myBounds = myMesh.Object->GetBounds();
		float XBounds = myBounds.BoxExtent.X * 2;
		float ScenePos = ((XBounds * (NumRepeatingMesh - 1)) / 2.0f) * -1;

		KillPoint = ScenePos - (XBounds * 0.5f);
		SpawnPoint = (ScenePos * -1) + (XBounds * 0.5f);

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
			UStaticMeshComponent* thisMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(*MeshName));
			check(thisMesh);

			thisMesh->AttachTo(FloorMeshScenes[i]);
			thisMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
			thisMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

			if (myMaterial.Succeeded())
			{
				thisMesh->SetStaticMesh(myMesh.Object);
				thisMesh->SetMaterial(0, myMaterial.Object);
			}
			FloorMeshes.Add(thisMesh);


		}
		CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollsionBox"));
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

// Called every frame
void AFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (auto Scene : FloorMeshScenes)
	{
		Scene->AddLocalOffset(FVector(GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed(), 0.0f, 0.0f));
		
	

		if (Scene->GetComponentTransform().GetLocation().X <= KillPoint)
		{
			ADestroyedFloorPiece* thisPiece = GetWorld()->SpawnActor<ADestroyedFloorPiece>(ADestroyedFloorPiece::StaticClass(), Scene->GetComponentTransform());
			
			if (thisPiece)
			{
				thisPiece->Destructable->ApplyDamage(100000, thisPiece->GetActorLocation(), FVector(-FMath::RandRange(-10, 10), -FMath::RandRange(-10, 10), -FMath::RandRange(-10, 10)), 10000);
			
			}

			Scene->SetRelativeLocation(FVector(SpawnPoint, 0.0f, 0.0f));
		}
	}

	
	

}

