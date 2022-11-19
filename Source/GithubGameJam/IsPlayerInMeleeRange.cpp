// Fill out your copyright notice in the Description page of Project Settings.


#include "IsPlayerInMeleeRange.h"
#include "Enemy/AI/EnemyAiController.h"
#include "Enemy/EnemyBase.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Enemy/AI/blackboard_keys.h"

UIsPlayerInMeleeRange::UIsPlayerInMeleeRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player in Melee Range");
}

void UIsPlayerInMeleeRange::OnBecomeRelevant(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	Super::OnBecomeRelevant(owner_comp, node_memory);

	// get enemy
	AEnemyAiController* const cont = Cast<AEnemyAiController>(owner_comp.GetAIOwner());
	AEnemyBase* const enemy = Cast<AEnemyBase>(cont->GetPawn());

	// get player character
	ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// write true or false depending on whether the player is within melee_range
	cont->get_blackboard()->SetValueAsBool(bb_keys::player_is_in_melee_range,
		enemy->GetDistanceTo(player) <= melee_range);
}
