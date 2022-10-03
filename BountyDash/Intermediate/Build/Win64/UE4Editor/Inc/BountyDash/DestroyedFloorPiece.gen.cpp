// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/DestroyedFloorPiece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyedFloorPiece() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ADestroyedFloorPiece_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ADestroyedFloorPiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
// End Cross Module References
	void ADestroyedFloorPiece::StaticRegisterNativesADestroyedFloorPiece()
	{
	}
	UClass* Z_Construct_UClass_ADestroyedFloorPiece_NoRegister()
	{
		return ADestroyedFloorPiece::StaticClass();
	}
	struct Z_Construct_UClass_ADestroyedFloorPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destructable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Destructable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestroyedFloorPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyedFloorPiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DestroyedFloorPiece.h" },
		{ "ModuleRelativePath", "DestroyedFloorPiece.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyedFloorPiece_Statics::NewProp_Destructable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DestroyedFloorPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestroyedFloorPiece_Statics::NewProp_Destructable = { "Destructable", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestroyedFloorPiece, Destructable), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestroyedFloorPiece_Statics::NewProp_Destructable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyedFloorPiece_Statics::NewProp_Destructable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestroyedFloorPiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyedFloorPiece_Statics::NewProp_Destructable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestroyedFloorPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyedFloorPiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestroyedFloorPiece_Statics::ClassParams = {
		&ADestroyedFloorPiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADestroyedFloorPiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyedFloorPiece_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestroyedFloorPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyedFloorPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestroyedFloorPiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestroyedFloorPiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestroyedFloorPiece, 1190153698);
	template<> BOUNTYDASH_API UClass* StaticClass<ADestroyedFloorPiece>()
	{
		return ADestroyedFloorPiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestroyedFloorPiece(Z_Construct_UClass_ADestroyedFloorPiece, &ADestroyedFloorPiece::StaticClass, TEXT("/Script/BountyDash"), TEXT("ADestroyedFloorPiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyedFloorPiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
