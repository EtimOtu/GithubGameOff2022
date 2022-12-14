// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//// Set size for collision capsule
	//GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//// Don't rotate when the controller rotates.
	//bUseControllerRotationPitch = false;
	//bUseControllerRotationYaw = false;
	//bUseControllerRotationRoll = false;

	//// Create a camera boom attached to the root (capsule)
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);
	//CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	//CameraBoom->bDoCollisionTest = false;
	//CameraBoom->TargetArmLength = 500.f;
	//CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	//CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

	//// Create a camera and attach to boom
	//SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	//SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	//SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	//// Configure character movement
	//GetCharacterMovement()->bOrientRotationToMovement = false; // Face in the direction we are moving..
	//GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	//GetCharacterMovement()->GravityScale = 2.f;
	//GetCharacterMovement()->AirControl = 0.80f;
	//GetCharacterMovement()->JumpZVelocity = 1000.f;
	//GetCharacterMovement()->GroundFriction = 3.f;
	//GetCharacterMovement()->MaxWalkSpeed = 600.f;
	//GetCharacterMovement()->MaxFlySpeed = 600.f;

	//// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	//// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//JumpHeight = 600.f;
	//WalkSpeed = 600.f;
	//SprintSpeed = 1000.f;

	//CanDash = true;
	////facingRight = true;
	//DashDistance = 2000.f;
	//DashCooldown = 1.25f;
	//DashStop = 0.1f;

	//MaxAmmo = 11;
	//CurrentAmmo = MaxAmmo;
	//canShoot = true;
	//power = 1;

	//setup_stimulus();

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

