// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GithubGameJam/GithubGameJamCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGithubGameJamCharacter() {}
// Cross Module References
	GITHUBGAMEJAM_API UClass* Z_Construct_UClass_AGithubGameJamCharacter_NoRegister();
	GITHUBGAMEJAM_API UClass* Z_Construct_UClass_AGithubGameJamCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GithubGameJam();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AGithubGameJamCharacter::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGithubGameJamCharacter::execResetDashCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDashCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGithubGameJamCharacter::execStopDashing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDashing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGithubGameJamCharacter::execDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGithubGameJamCharacter::execWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Walk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGithubGameJamCharacter::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGithubGameJamCharacter::execDoubleJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoubleJump();
		P_NATIVE_END;
	}
	static FName NAME_AGithubGameJamCharacter_FireGun = FName(TEXT("FireGun"));
	void AGithubGameJamCharacter::FireGun()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGithubGameJamCharacter_FireGun),NULL);
	}
	void AGithubGameJamCharacter::StaticRegisterNativesAGithubGameJamCharacter()
	{
		UClass* Class = AGithubGameJamCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dash", &AGithubGameJamCharacter::execDash },
			{ "DoubleJump", &AGithubGameJamCharacter::execDoubleJump },
			{ "Reload", &AGithubGameJamCharacter::execReload },
			{ "ResetDashCooldown", &AGithubGameJamCharacter::execResetDashCooldown },
			{ "Sprint", &AGithubGameJamCharacter::execSprint },
			{ "StopDashing", &AGithubGameJamCharacter::execStopDashing },
			{ "Walk", &AGithubGameJamCharacter::execWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_Dash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_Dash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "Dash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_Dash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_Dash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "DoubleJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_FireGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_FireGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_FireGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "FireGun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_FireGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_FireGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_FireGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_FireGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "ResetDashCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "StopDashing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGithubGameJamCharacter_Walk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGithubGameJamCharacter_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGithubGameJamCharacter_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGithubGameJamCharacter, nullptr, "Walk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGithubGameJamCharacter_Walk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGithubGameJamCharacter_Walk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGithubGameJamCharacter_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGithubGameJamCharacter_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGithubGameJamCharacter_NoRegister()
	{
		return AGithubGameJamCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGithubGameJamCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleJumpCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DoubleJumpCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanDash_MetaData[];
#endif
		static void NewProp_CanDash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanDash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnusedHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canShoot_MetaData[];
#endif
		static void NewProp_canShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canShoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGithubGameJamCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GithubGameJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGithubGameJamCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_Dash, "Dash" }, // 2885658479
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_DoubleJump, "DoubleJump" }, // 253517250
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_FireGun, "FireGun" }, // 2797238508
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_Reload, "Reload" }, // 3750626285
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_ResetDashCooldown, "ResetDashCooldown" }, // 2013711190
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_Sprint, "Sprint" }, // 1356721236
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_StopDashing, "StopDashing" }, // 2722274595
		{ &Z_Construct_UFunction_AGithubGameJamCharacter_Walk, "Walk" }, // 1794369957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GithubGameJamCharacter.h" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DoubleJumpCounter_MetaData[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DoubleJumpCounter = { "DoubleJumpCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, DoubleJumpCounter), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DoubleJumpCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DoubleJumpCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_JumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashDistance_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, DashDistance), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashCooldown_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, DashCooldown), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash_MetaData[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash_SetBit(void* Obj)
	{
		((AGithubGameJamCharacter*)Obj)->CanDash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash = { "CanDash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGithubGameJamCharacter), &Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashStop_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashStop = { "DashStop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, DashStop), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_UnusedHandle_MetaData[] = {
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_UnusedHandle = { "UnusedHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, UnusedHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_UnusedHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_UnusedHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGithubGameJamCharacter, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot_MetaData[] = {
		{ "Category", "GithubGameJamCharacter" },
		{ "ModuleRelativePath", "GithubGameJamCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot_SetBit(void* Obj)
	{
		((AGithubGameJamCharacter*)Obj)->canShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot = { "canShoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGithubGameJamCharacter), &Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGithubGameJamCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DoubleJumpCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_JumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CanDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_DashStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_UnusedHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGithubGameJamCharacter_Statics::NewProp_canShoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGithubGameJamCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGithubGameJamCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGithubGameJamCharacter_Statics::ClassParams = {
		&AGithubGameJamCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGithubGameJamCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGithubGameJamCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGithubGameJamCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGithubGameJamCharacter, 2213883278);
	template<> GITHUBGAMEJAM_API UClass* StaticClass<AGithubGameJamCharacter>()
	{
		return AGithubGameJamCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGithubGameJamCharacter(Z_Construct_UClass_AGithubGameJamCharacter, &AGithubGameJamCharacter::StaticClass, TEXT("/Script/GithubGameJam"), TEXT("AGithubGameJamCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGithubGameJamCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
