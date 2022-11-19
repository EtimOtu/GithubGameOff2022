// Fill out your copyright notice in the Description page of Project Settings.


//#include "Enemy/AI
#include "FindRandomLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "EnemyAiController.h"
//#include "BegaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "blackboard_keys.h"

UFindRandomLocation::UFindRandomLocation(FObjectInitializer const& Object_Initializer)
{
	NodeName = TEXT("Find Random Location");
}
EBTNodeResult::Type UFindRandomLocation::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_Memory)
{
	//Get AI controller and Enemy
	auto const cont = Cast<AEnemyAiController>(owner_comp.GetAIOwner());
	auto const enemy = cont->GetPawn();

	//Obtain enemy location to use as an origin location
	FVector const origin = enemy->GetActorLocation();
	FNavLocation loc;

	//Get the navigation system and generate random location on the nav mesh
	UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (nav_sys->GetRandomPointInNavigableRadius(origin, search_radius, loc, nullptr))
	{
		cont->get_blackboard()->SetValueAsVector(bb_keys::target_location, loc.Location);
	}

	//finish with success
	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
