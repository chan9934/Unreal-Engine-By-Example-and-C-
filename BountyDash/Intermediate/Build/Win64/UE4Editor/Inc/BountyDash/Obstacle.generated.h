// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOUNTYDASH_Obstacle_generated_h
#error "Obstacle.generated.h already included, missing '#pragma once' in Obstacle.h"
#endif
#define BOUNTYDASH_Obstacle_generated_h

#define BountyDash_Source_BountyDash_Obstacle_h_13_SPARSE_DATA
#define BountyDash_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS
#define BountyDash_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BountyDash_Source_BountyDash_Obstacle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, ABountyDashObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define BountyDash_Source_BountyDash_Obstacle_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, ABountyDashObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define BountyDash_Source_BountyDash_Obstacle_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstacle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstacle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public:


#define BountyDash_Source_BountyDash_Obstacle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacle)


#define BountyDash_Source_BountyDash_Obstacle_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AObstacle, Mesh); }


#define BountyDash_Source_BountyDash_Obstacle_h_10_PROLOG
#define BountyDash_Source_BountyDash_Obstacle_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_Obstacle_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_Obstacle_h_13_SPARSE_DATA \
	BountyDash_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS \
	BountyDash_Source_BountyDash_Obstacle_h_13_INCLASS \
	BountyDash_Source_BountyDash_Obstacle_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Source_BountyDash_Obstacle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_Obstacle_h_13_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_Obstacle_h_13_SPARSE_DATA \
	BountyDash_Source_BountyDash_Obstacle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_Obstacle_h_13_INCLASS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_Obstacle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOUNTYDASH_API UClass* StaticClass<class AObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Source_BountyDash_Obstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
