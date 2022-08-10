// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELLO_CODE_BountyDashGameMode_generated_h
#error "BountyDashGameMode.generated.h already included, missing '#pragma once' in BountyDashGameMode.h"
#endif
#define HELLO_CODE_BountyDashGameMode_generated_h

#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_SPARSE_DATA
#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameLevel); \
	DECLARE_FUNCTION(execGetGameSpeed); \
	DECLARE_FUNCTION(execGetInvGameSpeed);


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameLevel); \
	DECLARE_FUNCTION(execGetGameSpeed); \
	DECLARE_FUNCTION(execGetInvGameSpeed);


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashGameMode(); \
	friend struct Z_Construct_UClass_ABountyDashGameMode_Statics; \
public: \
	DECLARE_CLASS(ABountyDashGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello_Code"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashGameMode)


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashGameMode(); \
	friend struct Z_Construct_UClass_ABountyDashGameMode_Statics; \
public: \
	DECLARE_CLASS(ABountyDashGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello_Code"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashGameMode)


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashGameMode(ABountyDashGameMode&&); \
	NO_API ABountyDashGameMode(const ABountyDashGameMode&); \
public:


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashGameMode(ABountyDashGameMode&&); \
	NO_API ABountyDashGameMode(const ABountyDashGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashGameMode)


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__gameSpeed() { return STRUCT_OFFSET(ABountyDashGameMode, gameSpeed); } \
	FORCEINLINE static uint32 __PPO__gameLevel() { return STRUCT_OFFSET(ABountyDashGameMode, gameLevel); } \
	FORCEINLINE static uint32 __PPO__numCoinsForSpeedIncrease() { return STRUCT_OFFSET(ABountyDashGameMode, numCoinsForSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO__gameSpeedIncrease() { return STRUCT_OFFSET(ABountyDashGameMode, gameSpeedIncrease); }


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_10_PROLOG
#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_SPARSE_DATA \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_RPC_WRAPPERS \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_INCLASS \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_SPARSE_DATA \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_INCLASS_NO_PURE_DECLS \
	Hello_Code_Source_Hello_Code_BountyDashGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELLO_CODE_API UClass* StaticClass<class ABountyDashGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hello_Code_Source_Hello_Code_BountyDashGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
