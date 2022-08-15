// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/CoinSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinSpawner() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ACoinSpawner_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ACoinSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashPowerUp_NoRegister();
// End Cross Module References
	void ACoinSpawner::StaticRegisterNativesACoinSpawner()
	{
	}
	UClass* Z_Construct_UClass_ACoinSpawner_NoRegister()
	{
		return ACoinSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACoinSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoinObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSetCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSetCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSetCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinSetCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinSetTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoinSetTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoinTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUpObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PowerUpChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinSpawner.h" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject = { "CoinObject", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, CoinObject), Z_Construct_UClass_ACoin_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_Inner = { "SpawnTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_MetaData[] = {
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms = { "SpawnTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, SpawnTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins = { "MaxSetCoins", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, MaxSetCoins), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins = { "MinSetCoins", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, MinSetCoins), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval = { "CoinSetTimeInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, CoinSetTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval = { "CoinTimeInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, CoinTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval = { "MovementTimeInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, MovementTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpObject_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpObject = { "PowerUpObject", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, PowerUpObject), Z_Construct_UClass_ABountyDashPowerUp_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpChance_MetaData[] = {
		{ "Category", "CoinSpawner" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "CoinSpawner.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpChance = { "PowerUpChance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinSpawner, PowerUpChance), METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_SpawnTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MaxSetCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MinSetCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinSetTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_CoinTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_MovementTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinSpawner_Statics::NewProp_PowerUpChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoinSpawner_Statics::ClassParams = {
		&ACoinSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoinSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoinSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoinSpawner, 2973892962);
	template<> BOUNTYDASH_API UClass* StaticClass<ACoinSpawner>()
	{
		return ACoinSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoinSpawner(Z_Construct_UClass_ACoinSpawner, &ACoinSpawner::StaticClass, TEXT("/Script/BountyDash"), TEXT("ACoinSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
