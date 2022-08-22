// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BountyDash/BountyDashGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyDashGameMode() {}
// Cross Module References
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashGameMode_NoRegister();
	BOUNTYDASH_API UClass* Z_Construct_UClass_ABountyDashGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BountyDash();
// End Cross Module References
	DEFINE_FUNCTION(ABountyDashGameMode::execSetGamePaused)
	{
		P_GET_UBOOL(Z_Param_gamePaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamePaused(Z_Param_gamePaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABountyDashGameMode::execGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABountyDashGameMode::execGetGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABountyDashGameMode::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABountyDashGameMode::execGetGameLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGameLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABountyDashGameMode::execGetGameSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABountyDashGameMode::execGetInvGameSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInvGameSpeed();
		P_NATIVE_END;
	}
	void ABountyDashGameMode::StaticRegisterNativesABountyDashGameMode()
	{
		UClass* Class = ABountyDashGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameOver", &ABountyDashGameMode::execGameOver },
			{ "GetGameLevel", &ABountyDashGameMode::execGetGameLevel },
			{ "GetGameOver", &ABountyDashGameMode::execGetGameOver },
			{ "GetGameSpeed", &ABountyDashGameMode::execGetGameSpeed },
			{ "GetInvGameSpeed", &ABountyDashGameMode::execGetInvGameSpeed },
			{ "SetGamePaused", &ABountyDashGameMode::execSetGamePaused },
			{ "Tick", &ABountyDashGameMode::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "GameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics
	{
		struct BountyDashGameMode_eventGetGameLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BountyDashGameMode_eventGetGameLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "GetGameLevel", nullptr, nullptr, sizeof(BountyDashGameMode_eventGetGameLevel_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics
	{
		struct BountyDashGameMode_eventGetGameOver_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BountyDashGameMode_eventGetGameOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BountyDashGameMode_eventGetGameOver_Parms), &Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "GetGameOver", nullptr, nullptr, sizeof(BountyDashGameMode_eventGetGameOver_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics
	{
		struct BountyDashGameMode_eventGetGameSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BountyDashGameMode_eventGetGameSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "GetGameSpeed", nullptr, nullptr, sizeof(BountyDashGameMode_eventGetGameSpeed_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics
	{
		struct BountyDashGameMode_eventGetInvGameSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BountyDashGameMode_eventGetInvGameSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "GetInvGameSpeed", nullptr, nullptr, sizeof(BountyDashGameMode_eventGetInvGameSpeed_Parms), Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics
	{
		struct BountyDashGameMode_eventSetGamePaused_Parms
		{
			bool gamePaused;
		};
		static void NewProp_gamePaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_gamePaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused_SetBit(void* Obj)
	{
		((BountyDashGameMode_eventSetGamePaused_Parms*)Obj)->gamePaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused = { "gamePaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BountyDashGameMode_eventSetGamePaused_Parms), &Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::NewProp_gamePaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "SetGamePaused", nullptr, nullptr, sizeof(BountyDashGameMode_eventSetGamePaused_Parms), Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics
	{
		struct BountyDashGameMode_eventTick_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BountyDashGameMode_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyDashGameMode, nullptr, "Tick", nullptr, nullptr, sizeof(BountyDashGameMode_eventTick_Parms), Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyDashGameMode_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABountyDashGameMode_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABountyDashGameMode_NoRegister()
	{
		return ABountyDashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABountyDashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numCoinsForSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numCoinsForSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameOver_MetaData[];
#endif
		static void NewProp_bGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startGameOverCount_MetaData[];
#endif
		static void NewProp_startGameOverCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startGameOverCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeTillGameOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeTillGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameOverTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameOverTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyDashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BountyDash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABountyDashGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABountyDashGameMode_GameOver, "GameOver" }, // 4180623252
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameLevel, "GetGameLevel" }, // 3955691245
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameOver, "GetGameOver" }, // 2216995389
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetGameSpeed, "GetGameSpeed" }, // 267298648
		{ &Z_Construct_UFunction_ABountyDashGameMode_GetInvGameSpeed, "GetInvGameSpeed" }, // 1357744294
		{ &Z_Construct_UFunction_ABountyDashGameMode_SetGamePaused, "SetGamePaused" }, // 3679470031
		{ &Z_Construct_UFunction_ABountyDashGameMode_Tick, "Tick" }, // 3232378850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BountyDashGameMode.h" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed = { "gameSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, gameSpeed), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData[] = {
		{ "Category", "gameplay" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel = { "gameLevel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, gameLevel), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDashGameMode" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease = { "numCoinsForSpeedIncrease", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, numCoinsForSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData[] = {
		{ "Category", "BountyDashGameMode" },
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease = { "gameSpeedIncrease", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, gameSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime = { "RunTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, RunTime), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	void Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_SetBit(void* Obj)
	{
		((ABountyDashGameMode*)Obj)->bGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver = { "bGameOver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABountyDashGameMode), &Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	void Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_SetBit(void* Obj)
	{
		((ABountyDashGameMode*)Obj)->startGameOverCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount = { "startGameOverCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABountyDashGameMode), &Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver = { "timeTillGameOver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, timeTillGameOver), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer_MetaData[] = {
		{ "ModuleRelativePath", "BountyDashGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer = { "gameOverTimer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABountyDashGameMode, gameOverTimer), METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_numCoinsForSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_RunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_bGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_startGameOverCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_timeTillGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABountyDashGameMode_Statics::NewProp_gameOverTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyDashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyDashGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABountyDashGameMode_Statics::ClassParams = {
		&ABountyDashGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyDashGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyDashGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABountyDashGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABountyDashGameMode, 2242730059);
	template<> BOUNTYDASH_API UClass* StaticClass<ABountyDashGameMode>()
	{
		return ABountyDashGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABountyDashGameMode(Z_Construct_UClass_ABountyDashGameMode, &ABountyDashGameMode::StaticClass, TEXT("/Script/BountyDash"), TEXT("ABountyDashGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyDashGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
