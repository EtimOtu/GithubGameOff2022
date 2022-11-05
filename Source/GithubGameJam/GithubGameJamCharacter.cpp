// Copyright Epic Games, Inc. All Rights Reserved.

#include "GithubGameJamCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

AGithubGameJamCharacter::AGithubGameJamCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	JumpHeight = 600.f;
	WalkSpeed = 600.f;
	SprintSpeed = 1000.f;

	CanDash = true;
	DashDistance = 2000.f;
	DashCooldown = 1.25f;
	DashStop = 0.1f;

	MaxAmmo = 11;
	CurrentAmmo = MaxAmmo;
	canShoot = true;
}

void AGithubGameJamCharacter::DoubleJump()
{
	if (DoubleJumpCounter <= 1)
	{
		ACharacter::LaunchCharacter(FVector(0, 0, JumpHeight), false, true);
		DoubleJumpCounter++;
	}
}

void AGithubGameJamCharacter::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void AGithubGameJamCharacter::Walk()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AGithubGameJamCharacter::Dash()
{
	if (CanDash)
	{
		GetCharacterMovement()->BrakingFrictionFactor = 0.f;
		LaunchCharacter(FVector(GetMesh()->GetForwardVector().Y, GetMesh()->GetForwardVector().X, 0).GetSafeNormal() * DashDistance, true, true);
		CanDash = false;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AGithubGameJamCharacter::StopDashing, DashStop, false);
	}
}

void AGithubGameJamCharacter::StopDashing()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AGithubGameJamCharacter::ResetDashCooldown, DashCooldown, false);
	GetCharacterMovement()->BrakingFrictionFactor = 2.f;
}

void AGithubGameJamCharacter::ResetDashCooldown()
{
	CanDash = true;
}

//void AGithubGameJamCharacter::FireGun()
//{
//	
//}

void AGithubGameJamCharacter::Reload()
{
	CurrentAmmo = MaxAmmo;
	canShoot = true;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AGithubGameJamCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGithubGameJamCharacter::DoubleJump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGithubGameJamCharacter::MoveRight);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AGithubGameJamCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AGithubGameJamCharacter::Walk);
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &AGithubGameJamCharacter::Dash);
	PlayerInputComponent->BindAction("FirePistol", IE_Pressed, this, &AGithubGameJamCharacter::FireGun);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AGithubGameJamCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AGithubGameJamCharacter::TouchStopped);
}

void AGithubGameJamCharacter::Landed(const FHitResult& Hit)
{
	DoubleJumpCounter = 0;
}

void AGithubGameJamCharacter::MoveRight(float Value)
{
	//Snap rotation to movement direction
	if (Value > 0.f)
	{
		SetActorRotation(FRotator(0.0f, -90.f, 0.f), ETeleportType::None);
	}
	else if (Value < 0.f)
	{
		SetActorRotation(FRotator(0.0f, 90.0f, 0.0f), ETeleportType::None);
	}

	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void AGithubGameJamCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void AGithubGameJamCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

