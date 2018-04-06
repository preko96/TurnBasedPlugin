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
class USkillLogic;
#ifdef BASEPLUGIN_BattleComponent_generated_h
#error "BattleComponent.generated.h already included, missing '#pragma once' in BattleComponent.h"
#endif
#define BASEPLUGIN_BattleComponent_generated_h

#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_17_GENERATED_BODY \
	friend BASEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FActiveSkill(); \
	BASEPLUGIN_API static class UScriptStruct* StaticStruct();


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_30_DELEGATE \
struct _Script_BasePlugin_eventOnEndRoundSignature_Parms \
{ \
	ACharacter* EndedBy; \
}; \
static inline void FOnEndRoundSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEndRoundSignature, ACharacter* EndedBy) \
{ \
	_Script_BasePlugin_eventOnEndRoundSignature_Parms Parms; \
	Parms.EndedBy=EndedBy; \
	OnEndRoundSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_29_DELEGATE \
struct _Script_BasePlugin_eventOnStartRoundSignature_Parms \
{ \
	ACharacter* StartedBy; \
}; \
static inline void FOnStartRoundSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStartRoundSignature, ACharacter* StartedBy) \
{ \
	_Script_BasePlugin_eventOnStartRoundSignature_Parms Parms; \
	Parms.StartedBy=StartedBy; \
	OnStartRoundSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_28_DELEGATE \
struct _Script_BasePlugin_eventOnEffectTicked_Parms \
{ \
	ACharacter* TickedOn; \
	UEffect* TickedEffect; \
}; \
static inline void FOnEffectTicked_DelegateWrapper(const FMulticastScriptDelegate& OnEffectTicked, ACharacter* TickedOn, UEffect* TickedEffect) \
{ \
	_Script_BasePlugin_eventOnEffectTicked_Parms Parms; \
	Parms.TickedOn=TickedOn; \
	Parms.TickedEffect=TickedEffect; \
	OnEffectTicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_27_DELEGATE \
struct _Script_BasePlugin_eventOnSkillTicked_Parms \
{ \
	ACharacter* TickedOn; \
	USkillLogic* TickedSkill; \
}; \
static inline void FOnSkillTicked_DelegateWrapper(const FMulticastScriptDelegate& OnSkillTicked, ACharacter* TickedOn, USkillLogic* TickedSkill) \
{ \
	_Script_BasePlugin_eventOnSkillTicked_Parms Parms; \
	Parms.TickedOn=TickedOn; \
	Parms.TickedSkill=TickedSkill; \
	OnSkillTicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_26_DELEGATE \
struct _Script_BasePlugin_eventUsedSkillSignature_Parms \
{ \
	ACharacter* UsedOn; \
	ACharacter* UsedBy; \
	USkillLogic* Skill; \
}; \
static inline void FUsedSkillSignature_DelegateWrapper(const FMulticastScriptDelegate& UsedSkillSignature, ACharacter* UsedOn, ACharacter* UsedBy, USkillLogic* Skill) \
{ \
	_Script_BasePlugin_eventUsedSkillSignature_Parms Parms; \
	Parms.UsedOn=UsedOn; \
	Parms.UsedBy=UsedBy; \
	Parms.Skill=Skill; \
	UsedSkillSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_25_DELEGATE \
struct _Script_BasePlugin_eventReceivedSkillSignature_Parms \
{ \
	ACharacter* ReceivedFrom; \
	ACharacter* ReceivedBy; \
	USkillLogic* Skill; \
}; \
static inline void FReceivedSkillSignature_DelegateWrapper(const FMulticastScriptDelegate& ReceivedSkillSignature, ACharacter* ReceivedFrom, ACharacter* ReceivedBy, USkillLogic* Skill) \
{ \
	_Script_BasePlugin_eventReceivedSkillSignature_Parms Parms; \
	Parms.ReceivedFrom=ReceivedFrom; \
	Parms.ReceivedBy=ReceivedBy; \
	Parms.Skill=Skill; \
	ReceivedSkillSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTurn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTurn(); \
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
	DECLARE_FUNCTION(execReceiveSkill) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_ReceivedFrom); \
		P_GET_OBJECT(USkillLogic,Z_Param_ReceivedSkill); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveSkill(Z_Param_ReceivedFrom,Z_Param_ReceivedSkill); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseSkill) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_UseSkillsOn); \
		P_GET_OBJECT(USkillLogic,Z_Param_UsedSkill); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseSkill(Z_Param_UseSkillsOn,Z_Param_UsedSkill); \
		P_NATIVE_END; \
	}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTurn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTurn(); \
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
	DECLARE_FUNCTION(execReceiveSkill) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_ReceivedFrom); \
		P_GET_OBJECT(USkillLogic,Z_Param_ReceivedSkill); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveSkill(Z_Param_ReceivedFrom,Z_Param_ReceivedSkill); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseSkill) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_UseSkillsOn); \
		P_GET_OBJECT(USkillLogic,Z_Param_UsedSkill); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseSkill(Z_Param_UseSkillsOn,Z_Param_UsedSkill); \
		P_NATIVE_END; \
	}


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBattleComponent(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UBattleComponent(); \
public: \
	DECLARE_CLASS(UBattleComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UBattleComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBattleComponent(); \
	friend BASEPLUGIN_API class UClass* Z_Construct_UClass_UBattleComponent(); \
public: \
	DECLARE_CLASS(UBattleComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BasePlugin"), NO_API) \
	DECLARE_SERIALIZER(UBattleComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBattleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBattleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBattleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBattleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBattleComponent(UBattleComponent&&); \
	NO_API UBattleComponent(const UBattleComponent&); \
public:


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBattleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBattleComponent(UBattleComponent&&); \
	NO_API UBattleComponent(const UBattleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBattleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBattleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBattleComponent)


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_PRIVATE_PROPERTY_OFFSET
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_32_PROLOG
#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_RPC_WRAPPERS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_INCLASS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_INCLASS_NO_PURE_DECLS \
	TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnBasedPlugin_master_Plugins_BasePlugin_Source_BasePlugin_Classes_BattleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
