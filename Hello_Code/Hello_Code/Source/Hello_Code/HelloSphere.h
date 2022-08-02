// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "HelloSphere.generated.h"

UCLASS()
class HELLO_CODE_API AHelloSphere : public AActor
{
	GENERATED_BODY()

protected:
	class UTextRenderComponent* TextRenderComponent;
	UFUNCTION()
		void MyOnBeginOverlap(AActor* OverlappedActor, AActor* otherActor);
	UFUNCTION()
		void MyOnEndOverlap(AActor* OverlappedActor, AActor* otherActor);
	
public:	
	// Sets default values for this actor's properties
	AHelloSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
