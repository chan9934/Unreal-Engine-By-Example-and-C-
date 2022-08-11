// Fill out your copyright notice in the Description page of Project Settings.


#include "Bounty_Dash_Character.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EngineUtils.h"
#include "Engine/TargetPoint.h"


// Sets default values
ABounty_Dash_Character::ABounty_Dash_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	ConstructorHelpers::FObjectFinder<UAnimBlueprint> myAnimBP(TEXT("/Game/Barrel_Hopper/Character/Animations/BH_Character_AnimBP.BH_Character_AnimBP"));

	ConstructorHelpers::FObjectFinder<USkeletalMesh> myMesh(TEXT("/Game/Barrel_Hopper/Character/Mesh/SK_Mannequin.SK_Mannequin"));

	if (myAnimBP.Succeeded() && myMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(myMesh.Object);
		GetMesh()->SetAnimInstanceClass(myAnimBP.Object->GeneratedClass);
	}

	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()));

	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	GetCharacterMovement()->JumpZVelocity = 1450.0f;
	GetCharacterMovement()->GravityScale = 4.5f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));

	check(CameraBoom);

	CameraBoom->AttachTo(RootComponent);

	CameraBoom->TargetArmLength = 500.0f;

	CameraBoom->AddRelativeLocation(FVector(0.0f, 0.0f, 160.0f));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	check(FollowCamera);
	FollowCamera->AttachTo(CameraBoom, USpringArmComponent::SocketName);

	FollowCamera->AddRelativeRotation(FQuat(FRotator(-10.0f, 0.0f, 0.0f)));

	CharSpeed = 10.0f;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	/*GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, ABounty_Dash_Character::MyOnComponentOverlap);*/
}

// Called when the game starts or when spawned
void ABounty_Dash_Character::BeginPlay()
{
	Super::BeginPlay();
	for (TActorIterator<ATargetPoint>TargetIter(GetWorld()); TargetIter; ++TargetIter)
	{
		Target_Arr.Add(*TargetIter);
	}
	auto SortPred = [](const AActor& A, const AActor& B)->bool
	{
		return A.GetActorLocation().Y > B.GetActorLocation().Y;
	};
	Target_Arr.Sort(SortPred);
	CurrentLocation = Target_Arr.Num() / 2 + Target_Arr.Num() % 2 - 1;
	
}

// Called every frame
void ABounty_Dash_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Target_Arr.Num() > 0)
	{
		FVector Target_Loc = Target_Arr[CurrentLocation]->GetActorLocation();
		Target_Loc.X = GetActorLocation().X;
		Target_Loc.Z = GetActorLocation().Z;
		if (Target_Loc != GetActorLocation())
		{
			SetActorLocation(FMath::Lerp(GetActorLocation(), Target_Loc, DeltaTime * CharSpeed));
		}
	
		
	}

}

// Called to bind functionality to input
void ABounty_Dash_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(InputComponent);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::StopJumping);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &ABounty_Dash_Character::MoveRight);
	InputComponent->BindAction("MoveLeft", IE_Released, this, &ABounty_Dash_Character::MoveLeft);


}

void ABounty_Dash_Character::MoveRight()
{
	if ((Controller != nullptr))
	{
		if (CurrentLocation < Target_Arr.Num() - 1)
		{
			++CurrentLocation;
		}
		else
		{
			//아무것도 하지 않는다.
		}
	}

}

void ABounty_Dash_Character::MoveLeft()
{
	if (Controller != nullptr)
	{
		if (CurrentLocation > 0)
		{
			--CurrentLocation;
		}
		else
		{
			// 아무것도 하지 않는다
		}
	}
}