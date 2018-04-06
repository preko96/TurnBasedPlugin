// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UEffect;
#ifdef BASEPLUGIN_ScaledEffect_generated_h
#error "ScaledEffect.generated.h already included, missing '#pragma once' in ScaledEffect.h"
#endif
#define BASEPLUGIN_ScaledEffect_generated_h

#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_27_GENERATED_BODY \
	friend BASEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FScaleNode(); \
	BASEPLUGIN_API static class UScriptStruct* StaticStruct();


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Scale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFullValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InitOwner); \
		P_GET_OBJECT(ACharacter,Z_Param_InitTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Initialize(Z_Param_InitOwner,Z_Param_InitTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEffect**)Z_Param__Result=P_THIS->Copy(); \
		P_NATIVE_END; \
	}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Scale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFullValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InitOwner); \
		P_GET_OBJECT(ACharacter,Z_Param_InitTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Initialize(Z_Param_InitOwner,Z_Param_InitTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEffect**)Z_Param__Result=P_THIS->Copy(); \
		P_NATIVE_END; \
	}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScaledEffect(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UScaledEffect(); \
public: \
	DECLARE_CLASS(UScaledEffect, UCommonEffect, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UScaledEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUScaledEffect(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UScaledEffect(); \
public: \
	DECLARE_CLASS(UScaledEffect, UCommonEffect, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UScaledEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaledEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaledEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaledEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaledEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaledEffect(UScaledEffect&&); \
	NO_API UScaledEffect(const UScaledEffect&); \
public:


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaledEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaledEffect(UScaledEffect&&); \
	NO_API UScaledEffect(const UScaledEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaledEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaledEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaledEffect)


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_PRIVATE_PROPERTY_OFFSET
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_35_PROLOG
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_RPC_WRAPPERS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_INCLASS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_INCLASS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_ScaledEffect_h


#define FOREACH_ENUM_ETARGET(op) \
	op(ETarget::TR_Caster) \
	op(ETarget::TR_Target) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
