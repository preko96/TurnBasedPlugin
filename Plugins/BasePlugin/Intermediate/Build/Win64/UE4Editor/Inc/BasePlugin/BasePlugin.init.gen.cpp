// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlugin_init() {}
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_ReceivedSkillSignature__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_UsedSkillSignature__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnSkillTicked__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnEffectTicked__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnStartRoundSignature__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnEndRoundSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BasePlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BasePlugin_ReceivedSkillSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasePlugin_UsedSkillSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasePlugin_OnSkillTicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasePlugin_OnEffectTicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasePlugin_OnStartRoundSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BasePlugin_OnEndRoundSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BasePlugin",
				PKG_CompiledIn | 0x00000080,
				0x4EA138C2,
				0x6EA6A0D8,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
