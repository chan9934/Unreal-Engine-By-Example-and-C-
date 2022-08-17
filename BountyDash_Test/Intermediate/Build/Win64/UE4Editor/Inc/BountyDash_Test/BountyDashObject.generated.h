// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOUNTYDASH_TEST_BountyDashObject_generated_h
#error "BountyDashObject.generated.h already included, missing '#pragma once' in BountyDashObject.h"
#endif
#define BOUNTYDASH_TEST_BountyDashObject_generated_h

#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_SPARSE_DATA
#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnActorEndOverlap); \
	DECLARE_FUNCTION(execMyOnActorOverlap);


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnActorEndOverlap); \
	DECLARE_FUNCTION(execMyOnActorOverlap);


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashObject(); \
	friend struct Z_Construct_UClass_ABountyDashObject_Statics; \
public: \
	DECLARE_CLASS(ABountyDashObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash_Test"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashObject)


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashObject(); \
	friend struct Z_Construct_UClass_ABountyDashObject_Statics; \
public: \
	DECLARE_CLASS(ABountyDashObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash_Test"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashObject)


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashObject(ABountyDashObject&&); \
	NO_API ABountyDashObject(const ABountyDashObject&); \
public:


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashObject(ABountyDashObject&&); \
	NO_API ABountyDashObject(const ABountyDashObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashObject)


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collider() { return STRUCT_OFFSET(ABountyDashObject, Collider); }


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_9_PROLOG
#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_SPARSE_DATA \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_RPC_WRAPPERS \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_INCLASS \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_SPARSE_DATA \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_INCLASS_NO_PURE_DECLS \
	BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOUNTYDASH_TEST_API UClass* StaticClass<class ABountyDashObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Test_Source_BountyDash_Test_BountyDashObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
