// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash_Test/BountyDash_TestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDash_TestGameModeBase() {}
// Cross Module References
	BOUNTYDASH_TEST_API UClass* Z_Construct_UClass_ABountyDash_TestGameModeBase_NoRegister();
	BOUNTYDASH_TEST_API UClass* Z_Construct_UClass_ABountyDash_TestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BountyDash_Test();
// End Cross Module References
	void ABountyDash_TestGameModeBase::StaticRegisterNativesABountyDash_TestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABountyDash_TestGameModeBase_NoRegister()
	{
		return ABountyDash_TestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numCoinsForSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numCoinsForSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ameSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ameSpeedIncrease;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BountyDash_TestGameModeBase.h" },
		{ "ModuleRelativePath", "BountyDash_TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameSpeed_MetaData[] = {
		{ "ModuleRelativePath", "BountyDash_TestGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameSpeed = { "gameSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDash_TestGameModeBase, gameSpeed), METADATA_PARAMS(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameLevel_MetaData[] = {
		{ "ModuleRelativePath", "BountyDash_TestGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameLevel = { "gameLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDash_TestGameModeBase, gameLevel), METADATA_PARAMS(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_numCoinsForSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDash_TestGameModeBase" },
		{ "ModuleRelativePath", "BountyDash_TestGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_numCoinsForSpeedIncrease = { "numCoinsForSpeedIncrease", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDash_TestGameModeBase, numCoinsForSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_numCoinsForSpeedIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_numCoinsForSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_ameSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDash_TestGameModeBase" },
		{ "ModuleRelativePath", "BountyDash_TestGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_ameSpeedIncrease = { "ameSpeedIncrease", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDash_TestGameModeBase, ameSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_ameSpeedIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_ameSpeedIncrease_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_gameLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_numCoinsForSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::NewProp_ameSpeedIncrease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDash_TestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::ClassParams = {
		&ABountyDash_TestGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDash_TestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDash_TestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDash_TestGameModeBase, 3814877729);
	template<> BOUNTYDASH_TEST_API UClass* StaticClass<ABountyDash_TestGameModeBase>()
	{
		return ABountyDash_TestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDash_TestGameModeBase(Z_Construct_UClass_ABountyDash_TestGameModeBase, &ABountyDash_TestGameModeBase::StaticClass, TEXT("/Script/BountyDash_Test"), TEXT("ABountyDash_TestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDash_TestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
