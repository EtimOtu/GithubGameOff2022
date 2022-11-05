// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GithubGameJam/GithubGameJamGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGithubGameJamGameMode() {}
// Cross Module References
	GITHUBGAMEJAM_API UClass* Z_Construct_UClass_AGithubGameJamGameMode_NoRegister();
	GITHUBGAMEJAM_API UClass* Z_Construct_UClass_AGithubGameJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GithubGameJam();
// End Cross Module References
	void AGithubGameJamGameMode::StaticRegisterNativesAGithubGameJamGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGithubGameJamGameMode_NoRegister()
	{
		return AGithubGameJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGithubGameJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGithubGameJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GithubGameJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGithubGameJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GithubGameJamGameMode.h" },
		{ "ModuleRelativePath", "GithubGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGithubGameJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGithubGameJamGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGithubGameJamGameMode_Statics::ClassParams = {
		&AGithubGameJamGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGithubGameJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGithubGameJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGithubGameJamGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGithubGameJamGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGithubGameJamGameMode, 4275457986);
	template<> GITHUBGAMEJAM_API UClass* StaticClass<AGithubGameJamGameMode>()
	{
		return AGithubGameJamGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGithubGameJamGameMode(Z_Construct_UClass_AGithubGameJamGameMode, &AGithubGameJamGameMode::StaticClass, TEXT("/Script/GithubGameJam"), TEXT("AGithubGameJamGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGithubGameJamGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
