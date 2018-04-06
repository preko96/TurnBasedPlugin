// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEffect;
#ifdef BASEPLUGIN_CommonEffect_generated_h
#error "CommonEffect.generated.h already included, missing '#pragma once' in CommonEffect.h"
#endif
#define BASEPLUGIN_CommonEffect_generated_h

#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFullValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFullValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickTurn(); \
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


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFullValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFullValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickTurn(); \
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


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonEffect(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UCommonEffect(); \
public: \
	DECLARE_CLASS(UCommonEffect, UEffect, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCommonEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCommonEffect(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UCommonEffect(); \
public: \
	DECLARE_CLASS(UCommonEffect, UEffect, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCommonEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonEffect(UCommonEffect&&); \
	NO_API UCommonEffect(const UCommonEffect&); \
public:


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonEffect(UCommonEffect&&); \
	NO_API UCommonEffect(const UCommonEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonEffect)


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_PRIVATE_PROPERTY_OFFSET
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_19_PROLOG
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_RPC_WRAPPERS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_INCLASS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_INCLASS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_CommonEffect_h


#define FOREACH_ENUM_EEFFECTRESULT(op) \
	op(EEffectResult::ER_Increasing) \
	op(EEffectResult::ER_Decreasing) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
