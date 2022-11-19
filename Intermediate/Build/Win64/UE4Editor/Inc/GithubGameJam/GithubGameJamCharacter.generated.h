// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GITHUBGAMEJAM_GithubGameJamCharacter_generated_h
#error "GithubGameJamCharacter.generated.h already included, missing '#pragma once' in GithubGameJamCharacter.h"
#endif
#define GITHUBGAMEJAM_GithubGameJamCharacter_generated_h

#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_SPARSE_DATA
#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFaceLeft); \
	DECLARE_FUNCTION(execFaceRight); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execResetDashCooldown); \
	DECLARE_FUNCTION(execStopDashing); \
	DECLARE_FUNCTION(execDash); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execDoubleJump);


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFaceLeft); \
	DECLARE_FUNCTION(execFaceRight); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execResetDashCooldown); \
	DECLARE_FUNCTION(execStopDashing); \
	DECLARE_FUNCTION(execDash); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execDoubleJump);


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_EVENT_PARMS \
	struct GithubGameJamCharacter_eventDamaged_Parms \
	{ \
		int32 Damage; \
	};


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_CALLBACK_WRAPPERS
#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGithubGameJamCharacter(); \
	friend struct Z_Construct_UClass_AGithubGameJamCharacter_Statics; \
public: \
	DECLARE_CLASS(AGithubGameJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GithubGameJam"), NO_API) \
	DECLARE_SERIALIZER(AGithubGameJamCharacter)


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGithubGameJamCharacter(); \
	friend struct Z_Construct_UClass_AGithubGameJamCharacter_Statics; \
public: \
	DECLARE_CLASS(AGithubGameJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GithubGameJam"), NO_API) \
	DECLARE_SERIALIZER(AGithubGameJamCharacter)


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGithubGameJamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGithubGameJamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGithubGameJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGithubGameJamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGithubGameJamCharacter(AGithubGameJamCharacter&&); \
	NO_API AGithubGameJamCharacter(const AGithubGameJamCharacter&); \
public:


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGithubGameJamCharacter(AGithubGameJamCharacter&&); \
	NO_API AGithubGameJamCharacter(const AGithubGameJamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGithubGameJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGithubGameJamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGithubGameJamCharacter)


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AGithubGameJamCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGithubGameJamCharacter, CameraBoom); }


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_9_PROLOG \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_EVENT_PARMS


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_SPARSE_DATA \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_RPC_WRAPPERS \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_CALLBACK_WRAPPERS \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_INCLASS \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_SPARSE_DATA \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_CALLBACK_WRAPPERS \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GITHUBGAMEJAM_API UClass* StaticClass<class AGithubGameJamCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GithubGameOff2022_Source_GithubGameJam_GithubGameJamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
