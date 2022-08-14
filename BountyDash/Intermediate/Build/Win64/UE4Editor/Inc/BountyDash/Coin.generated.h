// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define BOUNTYDASH_Coin_generated_h

#define BountyDash_Source_BountyDash_Coin_h_18_SPARSE_DATA
#define BountyDash_Source_BountyDash_Coin_h_18_RPC_WRAPPERS
#define BountyDash_Source_BountyDash_Coin_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define BountyDash_Source_BountyDash_Coin_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, ABountyDashObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define BountyDash_Source_BountyDash_Coin_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, ABountyDashObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define BountyDash_Source_BountyDash_Coin_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public:


#define BountyDash_Source_BountyDash_Coin_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoin)


#define BountyDash_Source_BountyDash_Coin_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACoin, Mesh); }


#define BountyDash_Source_BountyDash_Coin_h_15_PROLOG
#define BountyDash_Source_BountyDash_Coin_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_Coin_h_18_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_Coin_h_18_SPARSE_DATA \
	BountyDash_Source_BountyDash_Coin_h_18_RPC_WRAPPERS \
	BountyDash_Source_BountyDash_Coin_h_18_INCLASS \
	BountyDash_Source_BountyDash_Coin_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Source_BountyDash_Coin_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_Coin_h_18_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_Coin_h_18_SPARSE_DATA \
	BountyDash_Source_BountyDash_Coin_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_Coin_h_18_INCLASS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_Coin_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOUNTYDASH_API UClass* StaticClass<class ACoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Source_BountyDash_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
