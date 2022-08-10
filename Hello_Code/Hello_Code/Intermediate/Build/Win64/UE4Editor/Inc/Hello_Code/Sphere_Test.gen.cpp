// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_Code/Sphere_Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphere_Test() {}
// Cross Module References
	HELLO_CODE_API UClass* Z_Construct_UClass_ASphere_Test_NoRegister();
	HELLO_CODE_API UClass* Z_Construct_UClass_ASphere_Test();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hello_Code();
// End Cross Module References
	void ASphere_Test::StaticRegisterNativesASphere_Test()
	{
	}
	UClass* Z_Construct_UClass_ASphere_Test_NoRegister()
	{
		return ASphere_Test::StaticClass();
	}
	struct Z_Construct_UClass_ASphere_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASphere_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphere_Test_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sphere_Test.h" },
		{ "ModuleRelativePath", "Sphere_Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASphere_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphere_Test>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASphere_Test_Statics::ClassParams = {
		&ASphere_Test::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASphere_Test_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASphere_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASphere_Test()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASphere_Test_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASphere_Test, 2446727080);
	template<> HELLO_CODE_API UClass* StaticClass<ASphere_Test>()
	{
		return ASphere_Test::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASphere_Test(Z_Construct_UClass_ASphere_Test, &ASphere_Test::StaticClass, TEXT("/Script/Hello_Code"), TEXT("ASphere_Test"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphere_Test);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
