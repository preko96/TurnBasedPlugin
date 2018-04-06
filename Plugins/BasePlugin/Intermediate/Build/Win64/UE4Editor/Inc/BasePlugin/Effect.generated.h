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
#ifdef BASEPLUGIN_Effect_generated_h
#error "Effect.generated.h already included, missing '#pragma once' in Effect.h"
#endif
#define BASEPLUGIN_Effect_generated_h

#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_RPC_WRAPPERS \
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


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEffect(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UEffect(); \
public: \
	DECLARE_CLASS(UEffect, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEffect(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UEffect(); \
public: \
	DECLARE_CLASS(UEffect, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffect(UEffect&&); \
	NO_API UEffect(const UEffect&); \
public:


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffect(UEffect&&); \
	NO_API UEffect(const UEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffect)


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_PRIVATE_PROPERTY_OFFSET
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_19_PROLOG
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_RPC_WRAPPERS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_INCLASS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_INCLASS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_Effect_h


#define FOREACH_ENUM_ETICKLOGIC(op) \
	op(ETickLogic::TL_TickOnce) \
	op(ETickLogic::TL_AlwaysTick) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
