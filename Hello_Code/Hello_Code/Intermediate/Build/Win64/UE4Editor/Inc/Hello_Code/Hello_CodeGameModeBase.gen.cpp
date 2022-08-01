// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_Code/Hello_CodeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHello_CodeGameModeBase() {}
// Cross Module References
	HELLO_CODE_API UClass* Z_Construct_UClass_AHello_CodeGameModeBase_NoRegister();
	HELLO_CODE_API UClass* Z_Construct_UClass_AHello_CodeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Hello_Code();
// End Cross Module References
	void AHello_CodeGameModeBase::StaticRegisterNativesAHello_CodeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHello_CodeGameModeBase_NoRegister()
	{
		return AHello_CodeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHello_CodeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHello_CodeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHello_CodeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Hello_CodeGameModeBase.h" },
		{ "ModuleRelativePath", "Hello_CodeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHello_CodeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHello_CodeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHello_CodeGameModeBase_Statics::ClassParams = {
		&AHello_CodeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHello_CodeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHello_CodeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHello_CodeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHello_CodeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHello_CodeGameModeBase, 2062407749);
	template<> HELLO_CODE_API UClass* StaticClass<AHello_CodeGameModeBase>()
	{
		return AHello_CodeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHello_CodeGameModeBase(Z_Construct_UClass_AHello_CodeGameModeBase, &AHello_CodeGameModeBase::StaticClass, TEXT("/Script/Hello_Code"), TEXT("AHello_CodeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHello_CodeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
