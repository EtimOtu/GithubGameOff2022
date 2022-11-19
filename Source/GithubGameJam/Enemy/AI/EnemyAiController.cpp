// Fill out your copyright notice in the Description page of Project Settings.


//#include "Enemy/AI/EnemyAiController.h"
#include "GithubGameJam/Enemy/AI/EnemyAiController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"
//#include "GithubGameJam/Enemy/EnemyBase.h"
#include "GithubGameJam/GithubGameJamCharacter.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "blackboard_keys.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "GameFramework/Character.h"
#


AEnemyAiController::AEnemyAiController(FObjectInitializer const& object_initializer)
{
	//static ConstructorHelpers::FObjectFinder<UBehaviorTree> obj(TEXT("BehaviorTree'/Game/Blueprints/AI/Enemy_BT.Enemy_BT'"));
	/*if (obj.Succeeded())
	{
		btree = obj.Object;
	}*/
	behavior_tree_component = object_initializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorComp"));
	blackboard = object_initializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboardComp"));
	setup_perception_system();
}

void AEnemyAiController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(btree);
	behavior_tree_component->StartTree(*btree);
}

//void AEnemyAiController::OnPossess(APawn* const pawn)
//{
//	Super::OnPossess(pawn);
//	if (blackboard)
//	{
//		blackboard->InitializeBlackboard(*btree->BlackboardAsset);
//	}
//}

UBlackboardComponent* AEnemyAiController::get_blackboard() const
{
	return blackboard;
}

void AEnemyAiController::on_target_detected(AActor* actor, FAIStimulus const stimulus)
{
	if (auto const ch = Cast<AGithubGameJamCharacter>(actor))
	{
		get_blackboard()->SetValueAsBool(bb_keys::can_see_player, stimulus.WasSuccessfullySensed());
	}
}

void AEnemyAiController::setup_perception_system()
{
	// create and initialise sight configuration object
	sight_config = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight_Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
	sight_config->SightRadius = 500.f;
	sight_config->LoseSightRadius = sight_config->SightRadius + 50.f;
	sight_config->PeripheralVisionAngleDegrees = 90.f;
	sight_config->SetMaxAge(5.f);
	sight_config->AutoSuccessRangeFromLastSeenLocation = 900.f;
	sight_config->DetectionByAffiliation.bDetectEnemies = true;
	sight_config->DetectionByAffiliation.bDetectFriendlies = true;
	sight_config->DetectionByAffiliation.bDetectNeutrals = true;

	// add sight configuration component to perception component
	GetPerceptionComponent()->SetDominantSense(*sight_config->GetSenseImplementation());
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyAiController::on_target_detected);
	GetPerceptionComponent()->ConfigureSense(*sight_config);
}
