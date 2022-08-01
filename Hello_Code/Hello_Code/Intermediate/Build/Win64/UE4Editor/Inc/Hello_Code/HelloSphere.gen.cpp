// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_Code/HelloSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloSphere() {}
// Cross Module References
	HELLO_CODE_API UClass* Z_Construct_UClass_AHelloSphere_NoRegister();
	HELLO_CODE_API UClass* Z_Construct_UClass_AHelloSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hello_Code();
// End Cross Module References
	void AHelloSphere::StaticRegisterNativesAHelloSphere()
	{
	}
	UClass* Z_Construct_UClass_AHelloSphere_NoRegister()
	{
		return AHelloSphere::StaticClass();
	}
	struct Z_Construct_UClass_AHelloSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelloSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelloSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HelloSphere.h" },
		{ "ModuleRelativePath", "HelloSphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelloSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelloSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelloSphere_Statics::ClassParams = {
		&AHelloSphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHelloSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHelloSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelloSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelloSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelloSphere, 3437677786);
	template<> HELLO_CODE_API UClass* StaticClass<AHelloSphere>()
	{
		return AHelloSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelloSphere(Z_Construct_UClass_AHelloSphere, &AHelloSphere::StaticClass, TEXT("/Script/Hello_Code"), TEXT("AHelloSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
