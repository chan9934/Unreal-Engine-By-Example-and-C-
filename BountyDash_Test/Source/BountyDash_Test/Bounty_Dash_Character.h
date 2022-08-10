// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Bounty_Dash_Character.generated.h"

class ATargetPoint;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class BOUNTYDASH_TEST_API ABounty_Dash_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABounty_Dash_Character();
private:
	UPROPERTY(EditAnywhere, Category = Logic)
	TArray<ATargetPoint*> Target_Arr;

	UPROPERTY(EditAnywhere, Category = Logic)
	float CharSpeed;

	short CurrentLocation;
	
	bool BeingPush;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;
		

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
