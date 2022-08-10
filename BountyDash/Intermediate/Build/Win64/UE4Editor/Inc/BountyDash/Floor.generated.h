// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_Floor_generated_h
#error "Floor.generated.h already included, missing '#pragma once' in Floor.h"
#endif
#define BOUNTYDASH_Floor_generated_h

#define BountyDash_Source_BountyDash_Floor_h_12_SPARSE_DATA
#define BountyDash_Source_BountyDash_Floor_h_12_RPC_WRAPPERS
#define BountyDash_Source_BountyDash_Floor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BountyDash_Source_BountyDash_Floor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloor(); \
	friend struct Z_Construct_UClass_AFloor_Statics; \
public: \
	DECLARE_CLASS(AFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AFloor)


#define BountyDash_Source_BountyDash_Floor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloor(); \
	friend struct Z_Construct_UClass_AFloor_Statics; \
public: \
	DECLARE_CLASS(AFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AFloor)


#define BountyDash_Source_BountyDash_Floor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloor(AFloor&&); \
	NO_API AFloor(const AFloor&); \
public:


#define BountyDash_Source_BountyDash_Floor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloor(AFloor&&); \
	NO_API AFloor(const AFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloor)


#define BountyDash_Source_BountyDash_Floor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloorMeshScenes() { return STRUCT_OFFSET(AFloor, FloorMeshScenes); } \
	FORCEINLINE static uint32 __PPO__FloorMeshes() { return STRUCT_OFFSET(AFloor, FloorMeshes); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(AFloor, CollisionBox); }


#define BountyDash_Source_BountyDash_Floor_h_9_PROLOG
#define BountyDash_Source_BountyDash_Floor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_Floor_h_12_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_Floor_h_12_SPARSE_DATA \
	BountyDash_Source_BountyDash_Floor_h_12_RPC_WRAPPERS \
	BountyDash_Source_BountyDash_Floor_h_12_INCLASS \
	BountyDash_Source_BountyDash_Floor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Source_BountyDash_Floor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_Floor_h_12_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_Floor_h_12_SPARSE_DATA \
	BountyDash_Source_BountyDash_Floor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_Floor_h_12_INCLASS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_Floor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOUNTYDASH_API UClass* StaticClass<class AFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Source_BountyDash_Floor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
