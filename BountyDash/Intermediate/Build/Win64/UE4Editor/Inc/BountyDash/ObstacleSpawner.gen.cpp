// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/ObstacleSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleSpawner() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacleSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOUNTYDASH_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AObstacleSpawner::StaticRegisterNativesAObstacleSpawner()
	{
	}
	UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister()
	{
		return AObstacleSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AObstacleSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObstaclesToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstaclesToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObstaclesToSpawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacleSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstacleSpawner.h" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_Inner = { "ObstaclesToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObstacle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn = { "ObstaclesToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, ObstaclesToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_Inner = { "SpawnTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets = { "SpawnTargets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, SpawnTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer = { "SpawnTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, SpawnTimer), METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstaclesToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacleSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstacleSpawner_Statics::ClassParams = {
		&AObstacleSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacleSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstacleSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstacleSpawner, 2466291792);
	template<> BOUNTYDASH_API UClass* StaticClass<AObstacleSpawner>()
	{
		return AObstacleSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstacleSpawner(Z_Construct_UClass_AObstacleSpawner, &AObstacleSpawner::StaticClass, TEXT("/Script/BountyDash"), TEXT("AObstacleSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
