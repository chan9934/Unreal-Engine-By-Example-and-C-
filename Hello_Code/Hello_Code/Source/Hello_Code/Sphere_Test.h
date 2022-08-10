// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "Sphere_Test.generated.h"

UCLASS()
class HELLO_CODE_API ASphere_Test : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASphere_Test();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	class UTextRenderComponent* TextRenderComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
