// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash_Test/Bounty_Dash_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBounty_Dash_Character() {}
// Cross Module References
	BOUNTYDASH_TEST_API UClass* Z_Construct_UClass_ABounty_Dash_Character_NoRegister();
	BOUNTYDASH_TEST_API UClass* Z_Construct_UClass_ABounty_Dash_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BountyDash_Test();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ABounty_Dash_Character::StaticRegisterNativesABounty_Dash_Character()
	{
	}
	UClass* Z_Construct_UClass_ABounty_Dash_Character_NoRegister()
	{
		return ABounty_Dash_Character::StaticClass();
	}
	struct Z_Construct_UClass_ABounty_Dash_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target_Arr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_Arr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Target_Arr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABounty_Dash_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounty_Dash_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bounty_Dash_Character.h" },
		{ "ModuleRelativePath", "Bounty_Dash_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr_Inner = { "Target_Arr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr_MetaData[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Bounty_Dash_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr = { "Target_Arr", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABounty_Dash_Character, Target_Arr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CharSpeed_MetaData[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Bounty_Dash_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CharSpeed = { "CharSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABounty_Dash_Character, CharSpeed), METADATA_PARAMS(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CharSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CharSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bounty_Dash_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABounty_Dash_Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bounty_Dash_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABounty_Dash_Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_FollowCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABounty_Dash_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_Target_Arr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CharSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounty_Dash_Character_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABounty_Dash_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABounty_Dash_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABounty_Dash_Character_Statics::ClassParams = {
		&ABounty_Dash_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABounty_Dash_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABounty_Dash_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABounty_Dash_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABounty_Dash_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABounty_Dash_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABounty_Dash_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABounty_Dash_Character, 1663044559);
	template<> BOUNTYDASH_TEST_API UClass* StaticClass<ABounty_Dash_Character>()
	{
		return ABounty_Dash_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABounty_Dash_Character(Z_Construct_UClass_ABounty_Dash_Character, &ABounty_Dash_Character::StaticClass, TEXT("/Script/BountyDash_Test"), TEXT("ABounty_Dash_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABounty_Dash_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
