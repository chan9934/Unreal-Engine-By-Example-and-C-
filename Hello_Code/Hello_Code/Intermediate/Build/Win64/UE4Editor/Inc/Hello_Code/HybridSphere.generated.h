// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HELLO_CODE_HybridSphere_generated_h
#error "HybridSphere.generated.h already included, missing '#pragma once' in HybridSphere.h"
#endif
#define HELLO_CODE_HybridSphere_generated_h

#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_SPARSE_DATA
#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_RPC_WRAPPERS \
	virtual void MyOnEndOverlap_Implementation(AActor* OverlappedActor, AActor* otherActor); \
	virtual void MyOnBeginOverlap_Implementation(AActor* OverlappedActor, AActor* otherActor); \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap); \
	DECLARE_FUNCTION(execMyOnBeginOverlap);


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnEndOverlap); \
	DECLARE_FUNCTION(execMyOnBeginOverlap);


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_EVENT_PARMS \
	struct HybridSphere_eventMyOnBeginOverlap_Parms \
	{ \
		AActor* OverlappedActor; \
		AActor* otherActor; \
	}; \
	struct HybridSphere_eventMyOnEndOverlap_Parms \
	{ \
		AActor* OverlappedActor; \
		AActor* otherActor; \
	};


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_CALLBACK_WRAPPERS
#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHybridSphere(); \
	friend struct Z_Construct_UClass_AHybridSphere_Statics; \
public: \
	DECLARE_CLASS(AHybridSphere, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello_Code"), NO_API) \
	DECLARE_SERIALIZER(AHybridSphere)


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHybridSphere(); \
	friend struct Z_Construct_UClass_AHybridSphere_Statics; \
public: \
	DECLARE_CLASS(AHybridSphere, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello_Code"), NO_API) \
	DECLARE_SERIALIZER(AHybridSphere)


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHybridSphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHybridSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHybridSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHybridSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHybridSphere(AHybridSphere&&); \
	NO_API AHybridSphere(const AHybridSphere&); \
public:


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHybridSphere(AHybridSphere&&); \
	NO_API AHybridSphere(const AHybridSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHybridSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHybridSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHybridSphere)


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(AHybridSphere, Sphere); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AHybridSphere, Mesh); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AHybridSphere, Text); } \
	FORCEINLINE static uint32 __PPO__Particles() { return STRUCT_OFFSET(AHybridSphere, Particles); }


#define Hello_Code_Source_Hello_Code_HybridSphere_h_9_PROLOG \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_EVENT_PARMS


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_SPARSE_DATA \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_RPC_WRAPPERS \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_CALLBACK_WRAPPERS \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_INCLASS \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hello_Code_Source_Hello_Code_HybridSphere_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_SPARSE_DATA \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_CALLBACK_WRAPPERS \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_INCLASS_NO_PURE_DECLS \
	Hello_Code_Source_Hello_Code_HybridSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELLO_CODE_API UClass* StaticClass<class AHybridSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hello_Code_Source_Hello_Code_HybridSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
