// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class USkillLogic;
#ifdef BASEPLUGIN_SkillLogic_generated_h
#error "SkillLogic.generated.h already included, missing '#pragma once' in SkillLogic.h"
#endif
#define BASEPLUGIN_SkillLogic_generated_h

#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitalize) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InitSkillOwner); \
		P_GET_OBJECT(ACharacter,Z_Param_InitSkillTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initalize(Z_Param_InitSkillOwner,Z_Param_InitSkillTarget); \
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
		*(USkillLogic**)Z_Param__Result=P_THIS->Copy(); \
		P_NATIVE_END; \
	}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitalize) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_InitSkillOwner); \
		P_GET_OBJECT(ACharacter,Z_Param_InitSkillTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initalize(Z_Param_InitSkillOwner,Z_Param_InitSkillTarget); \
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
		*(USkillLogic**)Z_Param__Result=P_THIS->Copy(); \
		P_NATIVE_END; \
	}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillLogic(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_USkillLogic(); \
public: \
	DECLARE_CLASS(USkillLogic, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(USkillLogic) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSkillLogic(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_USkillLogic(); \
public: \
	DECLARE_CLASS(USkillLogic, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(USkillLogic) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillLogic(USkillLogic&&); \
	NO_API USkillLogic(const USkillLogic&); \
public:


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillLogic(USkillLogic&&); \
	NO_API USkillLogic(const USkillLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillLogic)


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_PRIVATE_PROPERTY_OFFSET
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_18_PROLOG
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_RPC_WRAPPERS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_INCLASS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_INCLASS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_SkillLogic_h


#define FOREACH_ENUM_ESKILLID(op) \
	op(ESkillID::S_Alpha) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
