// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GithubGameJamCharacter.generated.h"

UCLASS(config=Game)
class AGithubGameJamCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	virtual void Landed(const FHitResult& Hit) override;


public:
	AGithubGameJamCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION()
		void DoubleJump();

	UPROPERTY()
		int DoubleJumpCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int JumpHeight;

	UFUNCTION()
		void Sprint();

	UFUNCTION()
		void Walk();

	UPROPERTY(EditAnywhere)
		float WalkSpeed;

	UPROPERTY(EditAnywhere)
		float SprintSpeed;

	UFUNCTION()
		void Dash();

	UPROPERTY(EditAnywhere)
		float DashDistance;

	UPROPERTY(EditAnywhere)
		float DashCooldown;

	UPROPERTY()
		bool CanDash;

	UPROPERTY(EditAnywhere)
		float DashStop;

	UPROPERTY()
		FTimerHandle UnusedHandle;

	UFUNCTION()
		void StopDashing();

	UFUNCTION()
		void ResetDashCooldown();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CurrentAmmo;

	UFUNCTION(BlueprintImplementableEvent)
		void FireGun();

	UFUNCTION(BlueprintCallable)
		void Reload();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool canShoot;
};
