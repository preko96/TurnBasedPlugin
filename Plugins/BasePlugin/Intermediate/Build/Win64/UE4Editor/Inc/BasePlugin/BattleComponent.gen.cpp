// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BattleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleComponent() {}
// Cross Module References
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnEndRoundSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BasePlugin();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnStartRoundSignature__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnEffectTicked__DelegateSignature();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnSkillTicked__DelegateSignature();
	BASEPLUGIN_API UClass* Z_Construct_UClass_USkillLogic_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_UsedSkillSignature__DelegateSignature();
	BASEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BasePlugin_ReceivedSkillSignature__DelegateSignature();
	BASEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActiveSkill();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UBattleComponent_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UBattleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UBattleComponent_EndTurn();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UBattleComponent_ReceiveSkill();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UBattleComponent_StartTurn();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UBattleComponent_TickTurn();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UBattleComponent_UseSkill();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnEndRoundSignature__DelegateSignature()
	{
		struct _Script_BasePlugin_eventOnEndRoundSignature_Parms
		{
			ACharacter* EndedBy;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndedBy = { UE4CodeGen_Private::EPropertyClass::Object, "EndedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventOnEndRoundSignature_Parms, EndedBy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndedBy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasePlugin, "OnEndRoundSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BasePlugin_eventOnEndRoundSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnStartRoundSignature__DelegateSignature()
	{
		struct _Script_BasePlugin_eventOnStartRoundSignature_Parms
		{
			ACharacter* StartedBy;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartedBy = { UE4CodeGen_Private::EPropertyClass::Object, "StartedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventOnStartRoundSignature_Parms, StartedBy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartedBy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasePlugin, "OnStartRoundSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BasePlugin_eventOnStartRoundSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnEffectTicked__DelegateSignature()
	{
		struct _Script_BasePlugin_eventOnEffectTicked_Parms
		{
			ACharacter* TickedOn;
			UEffect* TickedEffect;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickedEffect = { UE4CodeGen_Private::EPropertyClass::Object, "TickedEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventOnEffectTicked_Parms, TickedEffect), Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickedOn = { UE4CodeGen_Private::EPropertyClass::Object, "TickedOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventOnEffectTicked_Parms, TickedOn), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickedEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickedOn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasePlugin, "OnEffectTicked__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BasePlugin_eventOnEffectTicked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_BasePlugin_OnSkillTicked__DelegateSignature()
	{
		struct _Script_BasePlugin_eventOnSkillTicked_Parms
		{
			ACharacter* TickedOn;
			USkillLogic* TickedSkill;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickedSkill = { UE4CodeGen_Private::EPropertyClass::Object, "TickedSkill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventOnSkillTicked_Parms, TickedSkill), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickedOn = { UE4CodeGen_Private::EPropertyClass::Object, "TickedOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventOnSkillTicked_Parms, TickedOn), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickedSkill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickedOn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasePlugin, "OnSkillTicked__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BasePlugin_eventOnSkillTicked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_BasePlugin_UsedSkillSignature__DelegateSignature()
	{
		struct _Script_BasePlugin_eventUsedSkillSignature_Parms
		{
			ACharacter* UsedOn;
			ACharacter* UsedBy;
			USkillLogic* Skill;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill = { UE4CodeGen_Private::EPropertyClass::Object, "Skill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventUsedSkillSignature_Parms, Skill), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsedBy = { UE4CodeGen_Private::EPropertyClass::Object, "UsedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventUsedSkillSignature_Parms, UsedBy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsedOn = { UE4CodeGen_Private::EPropertyClass::Object, "UsedOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventUsedSkillSignature_Parms, UsedOn), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedOn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasePlugin, "UsedSkillSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BasePlugin_eventUsedSkillSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_BasePlugin_ReceivedSkillSignature__DelegateSignature()
	{
		struct _Script_BasePlugin_eventReceivedSkillSignature_Parms
		{
			ACharacter* ReceivedFrom;
			ACharacter* ReceivedBy;
			USkillLogic* Skill;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill = { UE4CodeGen_Private::EPropertyClass::Object, "Skill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventReceivedSkillSignature_Parms, Skill), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceivedBy = { UE4CodeGen_Private::EPropertyClass::Object, "ReceivedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventReceivedSkillSignature_Parms, ReceivedBy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceivedFrom = { UE4CodeGen_Private::EPropertyClass::Object, "ReceivedFrom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BasePlugin_eventReceivedSkillSignature_Parms, ReceivedFrom), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedFrom,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasePlugin, "ReceivedSkillSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BasePlugin_eventReceivedSkillSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FActiveSkill::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BASEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FActiveSkill_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveSkill, Z_Construct_UPackage__Script_BasePlugin(), TEXT("ActiveSkill"), sizeof(FActiveSkill), Get_Z_Construct_UScriptStruct_FActiveSkill_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveSkill(FActiveSkill::StaticStruct, TEXT("/Script/BasePlugin"), TEXT("ActiveSkill"), false, nullptr, nullptr);
static struct FScriptStruct_BasePlugin_StaticRegisterNativesFActiveSkill
{
	FScriptStruct_BasePlugin_StaticRegisterNativesFActiveSkill()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveSkill")),new UScriptStruct::TCppStructOps<FActiveSkill>);
	}
} ScriptStruct_BasePlugin_StaticRegisterNativesFActiveSkill;
	UScriptStruct* Z_Construct_UScriptStruct_FActiveSkill()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveSkill_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BasePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveSkill"), sizeof(FActiveSkill), Get_Z_Construct_UScriptStruct_FActiveSkill_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveSkill>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLogic_MetaData[] = {
				{ "Category", "ActiveSkill" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLogic = { UE4CodeGen_Private::EPropertyClass::Object, "SkillLogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FActiveSkill, SkillLogic), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(NewProp_SkillLogic_MetaData, ARRAY_COUNT(NewProp_SkillLogic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedFrom_MetaData[] = {
				{ "Category", "ActiveSkill" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceivedFrom = { UE4CodeGen_Private::EPropertyClass::Object, "ReceivedFrom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FActiveSkill, ReceivedFrom), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_ReceivedFrom_MetaData, ARRAY_COUNT(NewProp_ReceivedFrom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkillLogic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedFrom,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActiveSkill",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FActiveSkill),
				alignof(FActiveSkill),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveSkill_CRC() { return 4069117345U; }
	void UBattleComponent::StaticRegisterNativesUBattleComponent()
	{
		UClass* Class = UBattleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTurn", &UBattleComponent::execEndTurn },
			{ "ReceiveSkill", &UBattleComponent::execReceiveSkill },
			{ "StartTurn", &UBattleComponent::execStartTurn },
			{ "TickTurn", &UBattleComponent::execTickTurn },
			{ "UseSkill", &UBattleComponent::execUseSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBattleComponent_EndTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BattleComponent|Gameplay" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleComponent, "EndTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBattleComponent_ReceiveSkill()
	{
		struct BattleComponent_eventReceiveSkill_Parms
		{
			ACharacter* ReceivedFrom;
			USkillLogic* ReceivedSkill;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceivedSkill = { UE4CodeGen_Private::EPropertyClass::Object, "ReceivedSkill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BattleComponent_eventReceiveSkill_Parms, ReceivedSkill), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceivedFrom = { UE4CodeGen_Private::EPropertyClass::Object, "ReceivedFrom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BattleComponent_eventReceiveSkill_Parms, ReceivedFrom), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedSkill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedFrom,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BattleComponent|Gameplay" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleComponent, "ReceiveSkill", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BattleComponent_eventReceiveSkill_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBattleComponent_StartTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BattleComponent|Gameplay" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleComponent, "StartTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBattleComponent_TickTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BattleComponent|Gameplay" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleComponent, "TickTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBattleComponent_UseSkill()
	{
		struct BattleComponent_eventUseSkill_Parms
		{
			ACharacter* UseSkillsOn;
			USkillLogic* UsedSkill;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsedSkill = { UE4CodeGen_Private::EPropertyClass::Object, "UsedSkill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BattleComponent_eventUseSkill_Parms, UsedSkill), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseSkillsOn = { UE4CodeGen_Private::EPropertyClass::Object, "UseSkillsOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BattleComponent_eventUseSkill_Parms, UseSkillsOn), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedSkill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseSkillsOn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BattleComponent|Gameplay" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleComponent, "UseSkill", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(BattleComponent_eventUseSkill_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBattleComponent_NoRegister()
	{
		return UBattleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBattleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBattleComponent_EndTurn, "EndTurn" }, // 930162751
				{ &Z_Construct_UFunction_UBattleComponent_ReceiveSkill, "ReceiveSkill" }, // 268382037
				{ &Z_Construct_UFunction_UBattleComponent_StartTurn, "StartTurn" }, // 851475538
				{ &Z_Construct_UFunction_UBattleComponent_TickTurn, "TickTurn" }, // 4096822429
				{ &Z_Construct_UFunction_UBattleComponent_UseSkill, "UseSkill" }, // 4001140241
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "BattleComponent.h" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEffectTickedDelegate_MetaData[] = {
				{ "Category", "BattleComponnet|Delegates" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEffectTickedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEffectTickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBattleComponent, OnEffectTickedDelegate), Z_Construct_UDelegateFunction_BasePlugin_OnEffectTicked__DelegateSignature, METADATA_PARAMS(NewProp_OnEffectTickedDelegate_MetaData, ARRAY_COUNT(NewProp_OnEffectTickedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSkillTickedDelegate_MetaData[] = {
				{ "Category", "BattleComponnet|Delegates" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSkillTickedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSkillTickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBattleComponent, OnSkillTickedDelegate), Z_Construct_UDelegateFunction_BasePlugin_OnSkillTicked__DelegateSignature, METADATA_PARAMS(NewProp_OnSkillTickedDelegate_MetaData, ARRAY_COUNT(NewProp_OnSkillTickedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndRoundDelegate_MetaData[] = {
				{ "Category", "BattleComponnet|Delegates" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndRoundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEndRoundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBattleComponent, OnEndRoundDelegate), Z_Construct_UDelegateFunction_BasePlugin_OnEndRoundSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnEndRoundDelegate_MetaData, ARRAY_COUNT(NewProp_OnEndRoundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartRoundDelegate_MetaData[] = {
				{ "Category", "BattleComponnet|Delegates" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartRoundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStartRoundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBattleComponent, OnStartRoundDelegate), Z_Construct_UDelegateFunction_BasePlugin_OnStartRoundSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnStartRoundDelegate_MetaData, ARRAY_COUNT(NewProp_OnStartRoundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedSkillDelegate_MetaData[] = {
				{ "Category", "BattleComponnet|Delegates" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UsedSkillDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "UsedSkillDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBattleComponent, UsedSkillDelegate), Z_Construct_UDelegateFunction_BasePlugin_UsedSkillSignature__DelegateSignature, METADATA_PARAMS(NewProp_UsedSkillDelegate_MetaData, ARRAY_COUNT(NewProp_UsedSkillDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedSkillDelegate_MetaData[] = {
				{ "Category", "BattleComponnet|Delegates" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceivedSkillDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ReceivedSkillDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBattleComponent, ReceivedSkillDelegate), Z_Construct_UDelegateFunction_BasePlugin_ReceivedSkillSignature__DelegateSignature, METADATA_PARAMS(NewProp_ReceivedSkillDelegate_MetaData, ARRAY_COUNT(NewProp_ReceivedSkillDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferedSkill_MetaData[] = {
				{ "Category", "BattleComponent|Skill" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BufferedSkill = { UE4CodeGen_Private::EPropertyClass::Object, "BufferedSkill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBattleComponent, BufferedSkill), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(NewProp_BufferedSkill_MetaData, ARRAY_COUNT(NewProp_BufferedSkill_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsuableSkills_MetaData[] = {
				{ "Category", "BattleComponent|Skill" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsuableSkills = { UE4CodeGen_Private::EPropertyClass::Array, "UsuableSkills", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBattleComponent, UsuableSkills), METADATA_PARAMS(NewProp_UsuableSkills_MetaData, ARRAY_COUNT(NewProp_UsuableSkills_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsuableSkills_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UsuableSkills", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSkills_MetaData[] = {
				{ "Category", "BattleComponent|Skill" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
				{ "ToolTip", "Skills what's on the component's CHARACTER owner" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveSkills = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveSkills", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBattleComponent, ActiveSkills), METADATA_PARAMS(NewProp_ActiveSkills_MetaData, ARRAY_COUNT(NewProp_ActiveSkills_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSkills_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveSkills", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FActiveSkill, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
				{ "Category", "BattleComponent|Stat" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Map, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBattleComponent, Values), METADATA_PARAMS(NewProp_Values_MetaData, ARRAY_COUNT(NewProp_Values_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Values_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
				{ "Category", "BattleComponent|Stat" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Stats = { UE4CodeGen_Private::EPropertyClass::Map, "Stats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBattleComponent, Stats), METADATA_PARAMS(NewProp_Stats_MetaData, ARRAY_COUNT(NewProp_Stats_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Stats_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Stats_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stats_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "Stats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modificators_MetaData[] = {
				{ "Category", "BattleComponent|Stat" },
				{ "ModuleRelativePath", "Classes/BattleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Modificators = { UE4CodeGen_Private::EPropertyClass::Map, "Modificators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBattleComponent, Modificators), METADATA_PARAMS(NewProp_Modificators_MetaData, ARRAY_COUNT(NewProp_Modificators_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Modificators_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Modificators_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Modificators_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Modificators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnEffectTickedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSkillTickedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnEndRoundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnStartRoundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedSkillDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedSkillDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BufferedSkill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsuableSkills,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsuableSkills_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveSkills,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveSkills_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stats_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stats_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Modificators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Modificators_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Modificators_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBattleComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBattleComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBattleComponent, 3745230029);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBattleComponent(Z_Construct_UClass_UBattleComponent, &UBattleComponent::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UBattleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBattleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
