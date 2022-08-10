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
#ifdef HELLO_CODE_BountyDashCharacter_generated_h
#error "BountyDashCharacter.generated.h already included, missing '#pragma once' in BountyDashCharacter.h"
#endif
#define HELLO_CODE_BountyDashCharacter_generated_h

#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_SPARSE_DATA
#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyOnComponentEndOverlap); \
	DECLARE_FUNCTION(execMyOnComponentOverlap);


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyOnComponentEndOverlap); \
	DECLARE_FUNCTION(execMyOnComponentOverlap);


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABountyDashCharacter(); \
	friend struct Z_Construct_UClass_ABountyDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ABountyDashCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello_Code"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashCharacter)


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABountyDashCharacter(); \
	friend struct Z_Construct_UClass_ABountyDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ABountyDashCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hello_Code"), NO_API) \
	DECLARE_SERIALIZER(ABountyDashCharacter)


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_STANDARD_CONSTRUCTORS \
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


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABountyDashCharacter(ABountyDashCharacter&&); \
	NO_API ABountyDashCharacter(const ABountyDashCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABountyDashCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABountyDashCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABountyDashCharacter)


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABountyDashCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABountyDashCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Score() { return STRUCT_OFFSET(ABountyDashCharacter, Score); }


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_9_PROLOG
#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_SPARSE_DATA \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_RPC_WRAPPERS \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_INCLASS \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_SPARSE_DATA \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Hello_Code_Source_Hello_Code_BountyDashCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELLO_CODE_API UClass* StaticClass<class ABountyDashCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hello_Code_Source_Hello_Code_BountyDashCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
