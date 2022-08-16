// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOUNTYDASH_BountyDashCharacter_generated_h
#error "BountyDashCharacter.generated.h already included, missing '#pragma once' in BountyDashCharacter.h"
#endif
#define BOUNTYDASH_BountyDashCharacter_generated_h

#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_SPARSE_DATA
#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopMagnet); \
	DECLARE_FUNCTION(execStopSmash); \
	DECLARE_FUNCTION(execMyOnComponentEndOverlap); \
	DECLARE_FUNCTION(execMyOnComponentOverlap);


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopMagnet); \
	DECLARE_FUNCTION(execStopSmash); \
	DECLARE_FUNCTION(execMyOnComponentEndOverlap); \
	DECLARE_FUNCTION(execMyOnComponentOverlap);


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashCharacter(); \
	friend struct Z_Construct_UClass_ABountyDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ABountyDashCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashCharacter)


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashCharacter(); \
	friend struct Z_Construct_UClass_ABountyDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ABountyDashCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BountyDash"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashCharacter)


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABountyDashCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABountyDashCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashCharacter(ABountyDashCharacter&&); \
	NO_API ABountyDashCharacter(const ABountyDashCharacter&); \
public:


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashCharacter(ABountyDashCharacter&&); \
	NO_API ABountyDashCharacter(const ABountyDashCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashCharacter)


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABountyDashCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABountyDashCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Score() { return STRUCT_OFFSET(ABountyDashCharacter, Score); } \
	FORCEINLINE static uint32 __PPO__SmashTime() { return STRUCT_OFFSET(ABountyDashCharacter, SmashTime); } \
	FORCEINLINE static uint32 __PPO__MagnetTime() { return STRUCT_OFFSET(ABountyDashCharacter, MagnetTime); } \
	FORCEINLINE static uint32 __PPO__MagnetReach() { return STRUCT_OFFSET(ABountyDashCharacter, MagnetReach); }


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_11_PROLOG
#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_SPARSE_DATA \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_RPC_WRAPPERS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_INCLASS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BountyDash_Source_BountyDash_BountyDashCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_SPARSE_DATA \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_INCLASS_NO_PURE_DECLS \
	BountyDash_Source_BountyDash_BountyDashCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOUNTYDASH_API UClass* StaticClass<class ABountyDashCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BountyDash_Source_BountyDash_BountyDashCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
