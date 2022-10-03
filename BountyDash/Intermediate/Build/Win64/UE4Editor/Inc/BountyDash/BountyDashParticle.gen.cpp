// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/BountyDashParticle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDashParticle() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashParticle_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashParticle();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashObject();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ABountyDashParticle::StaticRegisterNativesABountyDashParticle()
	{
	}
	UClass* Z_Construct_UClass_ABountyDashParticle_NoRegister()
	{
		return ABountyDashParticle::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDashParticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDashParticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABountyDashObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashParticle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BountyDashParticle.h" },
		{ "ModuleRelativePath", "BountyDashParticle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashParticle_Statics::NewProp_particleSystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BountyDashParticle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABountyDashParticle_Statics::NewProp_particleSystem = { "particleSystem", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashParticle, particleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABountyDashParticle_Statics::NewProp_particleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashParticle_Statics::NewProp_particleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDashParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashParticle_Statics::NewProp_particleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDashParticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDashParticle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDashParticle_Statics::ClassParams = {
		&ABountyDashParticle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABountyDashParticle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashParticle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDashParticle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashParticle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDashParticle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDashParticle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDashParticle, 1661659738);
	template<> BOUNTYDASH_API UClass* StaticClass<ABountyDashParticle>()
	{
		return ABountyDashParticle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDashParticle(Z_Construct_UClass_ABountyDashParticle, &ABountyDashParticle::StaticClass, TEXT("/Script/BountyDash"), TEXT("ABountyDashParticle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDashParticle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
