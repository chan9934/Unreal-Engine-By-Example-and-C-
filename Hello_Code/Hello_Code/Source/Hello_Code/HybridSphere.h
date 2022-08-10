// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HybridSphere.generated.h"

UCLASS(BlueprintType)
class HELLO_CODE_API AHybridSphere : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHybridSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent)
		void MyOnBeginOverlap(AActor* OverlappedActor, AActor* otherActor);

	void MyOnBeginOverlap_Implementation(AActor* OverlappedActor, AActor* otherActor);

	UFUNCTION(BluePrintNativeEvent)
		void MyOnEndOverlap(AActor* OverlappedActor, AActor* otherActor);

	void MyOnEndOverlap_Implementation(AActor* OverlappedActor, AActor* otherActor);

protected:
	UPROPERTY(Category = "Components", EditAnywhere)
		class USphereComponent* Sphere;

	UPROPERTY(Category = "Components", EditAnywhere)
		class UStaticMeshComponent* Mesh;

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(Category = "Components", EditAnywhere)
		class UParticleSystemComponent* Particles;

};
