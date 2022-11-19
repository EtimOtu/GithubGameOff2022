// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Animation/AnimMontage.h"
#include "EnemyBase.generated.h"

UENUM(BlueprintType)
enum class EAIState : uint8
{
	E_Idle		UMETA(DisplayName = "Idle"),
	E_Roam		UMETA(DisplayName = "Roam"),
	E_Attack	UMETA(DisplayName = "Attack")

};

UCLASS()
class GITHUBGAMEJAM_API AEnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int health;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Gameplay")
		void DamageSelf(int damage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Gameplay")
		void Death();

	
	void melee_attack();

	UAnimMontage* get_montage() const;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (AllowPrivateAccess = "true"))
		UAnimMontage * montage;
};
