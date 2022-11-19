#pragma once

#include "CoreMinimal.h"
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class  GITHUBGAMEJAM_API UCombatInterface : public UInterface
{
	GENERATED_BODY()
};

class GITHUBGAMEJAM_API ICombatInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
		int melee_attack();
};
