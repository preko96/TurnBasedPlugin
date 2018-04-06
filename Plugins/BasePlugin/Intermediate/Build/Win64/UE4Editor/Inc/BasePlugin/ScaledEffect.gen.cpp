// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/ScaledEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaledEffect() {}
// Cross Module References
	BASEPLUGIN_API UEnum* Z_Construct_UEnum_BasePlugin_ETarget();
	UPackage* Z_Construct_UPackage__Script_BasePlugin();
	BASEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScaleNode();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UScaledEffect_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UScaledEffect();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UCommonEffect();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UScaledEffect_Copy();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UScaledEffect_GetFullValue();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UScaledEffect_Initialize();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UScaledEffect_Scale();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UScaledEffect_UnScale();
// End Cross Module References
	static UEnum* ETarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BasePlugin_ETarget, Z_Construct_UPackage__Script_BasePlugin(), TEXT("ETarget"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETarget(ETarget_StaticEnum, TEXT("/Script/BasePlugin"), TEXT("ETarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BasePlugin_ETarget_CRC() { return 2364055796U; }
	UEnum* Z_Construct_UEnum_BasePlugin_ETarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BasePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETarget"), 0, Get_Z_Construct_UEnum_BasePlugin_ETarget_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETarget::TR_Caster", (int64)ETarget::TR_Caster },
				{ "ETarget::TR_Target", (int64)ETarget::TR_Target },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
				{ "ToolTip", "TODO Put TargetEnum to somewhere else..." },
				{ "TR_Caster.DisplayName", "Caster" },
				{ "TR_Target.DisplayName", "Target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BasePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETarget",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETarget",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FScaleNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BASEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FScaleNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScaleNode, Z_Construct_UPackage__Script_BasePlugin(), TEXT("ScaleNode"), sizeof(FScaleNode), Get_Z_Construct_UScriptStruct_FScaleNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScaleNode(FScaleNode::StaticStruct, TEXT("/Script/BasePlugin"), TEXT("ScaleNode"), false, nullptr, nullptr);
static struct FScriptStruct_BasePlugin_StaticRegisterNativesFScaleNode
{
	FScriptStruct_BasePlugin_StaticRegisterNativesFScaleNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScaleNode")),new UScriptStruct::TCppStructOps<FScaleNode>);
	}
} ScriptStruct_BasePlugin_StaticRegisterNativesFScaleNode;
	UScriptStruct* Z_Construct_UScriptStruct_FScaleNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScaleNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BasePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScaleNode"), sizeof(FScaleNode), Get_Z_Construct_UScriptStruct_FScaleNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
				{ "ToolTip", "How much the values scaling the MAIN EFFECT (like damage, buff's value etc..) 1.0 = 100%" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScaleNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScaleNode, Multiplier), METADATA_PARAMS(NewProp_Multiplier_MetaData, ARRAY_COUNT(NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
				{ "ToolTip", "The \"index\" which will scale the effect" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScaleName = { UE4CodeGen_Private::EPropertyClass::Str, "ScaleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScaleNode, ScaleName), METADATA_PARAMS(NewProp_ScaleName_MetaData, ARRAY_COUNT(NewProp_ScaleName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScaleNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FScaleNode),
				alignof(FScaleNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScaleNode_CRC() { return 1980193750U; }
	void UScaledEffect::StaticRegisterNativesUScaledEffect()
	{
		UClass* Class = UScaledEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Copy", &UScaledEffect::execCopy },
			{ "GetFullValue", &UScaledEffect::execGetFullValue },
			{ "Initialize", &UScaledEffect::execInitialize },
			{ "Scale", &UScaledEffect::execScale },
			{ "UnScale", &UScaledEffect::execUnScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UScaledEffect_Copy()
	{
		struct ScaledEffect_eventCopy_Parms
		{
			UEffect* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScaledEffect_eventCopy_Parms, ReturnValue), Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaledEffect, "Copy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(ScaledEffect_eventCopy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaledEffect_GetFullValue()
	{
		struct ScaledEffect_eventGetFullValue_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScaledEffect_eventGetFullValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ScaledEffect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaledEffect, "GetFullValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(ScaledEffect_eventGetFullValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaledEffect_Initialize()
	{
		struct ScaledEffect_eventInitialize_Parms
		{
			const ACharacter* InitOwner;
			const ACharacter* InitTarget;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ScaledEffect_eventInitialize_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScaledEffect_eventInitialize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitTarget = { UE4CodeGen_Private::EPropertyClass::Object, "InitTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ScaledEffect_eventInitialize_Parms, InitTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_InitTarget_MetaData, ARRAY_COUNT(NewProp_InitTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitOwner_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitOwner = { UE4CodeGen_Private::EPropertyClass::Object, "InitOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ScaledEffect_eventInitialize_Parms, InitOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_InitOwner_MetaData, ARRAY_COUNT(NewProp_InitOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaledEffect, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ScaledEffect_eventInitialize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaledEffect_Scale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ScaledEffect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaledEffect, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScaledEffect_UnScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ScaledEffect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaledEffect, "UnScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScaledEffect_NoRegister()
	{
		return UScaledEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UScaledEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCommonEffect,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UScaledEffect_Copy, "Copy" }, // 1261698002
				{ &Z_Construct_UFunction_UScaledEffect_GetFullValue, "GetFullValue" }, // 2318286743
				{ &Z_Construct_UFunction_UScaledEffect_Initialize, "Initialize" }, // 2360024105
				{ &Z_Construct_UFunction_UScaledEffect_Scale, "Scale" }, // 2424846079
				{ &Z_Construct_UFunction_UScaledEffect_UnScale, "UnScale" }, // 2647349511
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "ScaledEffect.h" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScaled_MetaData[] = {
				{ "Category", "ScaledEffect|Base" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			auto NewProp_bIsScaled_SetBit = [](void* Obj){ ((UScaledEffect*)Obj)->bIsScaled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScaled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsScaled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScaledEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsScaled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsScaled_MetaData, ARRAY_COUNT(NewProp_bIsScaled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStacking_MetaData[] = {
				{ "Category", "ScaledEffect|Base" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			auto NewProp_bIsStacking_SetBit = [](void* Obj){ ((UScaledEffect*)Obj)->bIsStacking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStacking = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStacking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScaledEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStacking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStacking_MetaData, ARRAY_COUNT(NewProp_bIsStacking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaledValue_MetaData[] = {
				{ "Category", "ScaledEffect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaledValue = { UE4CodeGen_Private::EPropertyClass::Float, "ScaledValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UScaledEffect, ScaledValue), METADATA_PARAMS(NewProp_ScaledValue_MetaData, ARRAY_COUNT(NewProp_ScaledValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
				{ "Category", "ScaledEffect|Base" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
				{ "ToolTip", "How much the values scaling the MAIN EFFECT (like damage, buff's value etc..) 1.0 = 100%" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scaling = { UE4CodeGen_Private::EPropertyClass::Array, "Scaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UScaledEffect, Scaling), METADATA_PARAMS(NewProp_Scaling_MetaData, ARRAY_COUNT(NewProp_Scaling_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scaling_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Scaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScaleNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaledBy_MetaData[] = {
				{ "Category", "ScaledEffect|Gameplay" },
				{ "ModuleRelativePath", "Classes/ScaledEffect.h" },
				{ "ToolTip", "Indicate who's values to use to scale the effect ex.: value scale 8% of target's HP or value scale 8% of caster's damage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaledBy = { UE4CodeGen_Private::EPropertyClass::Enum, "ScaledBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UScaledEffect, ScaledBy), Z_Construct_UEnum_BasePlugin_ETarget, METADATA_PARAMS(NewProp_ScaledBy_MetaData, ARRAY_COUNT(NewProp_ScaledBy_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaledBy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsScaled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStacking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaledValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaledBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaledBy_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScaledEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScaledEffect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UScaledEffect, 1873408443);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaledEffect(Z_Construct_UClass_UScaledEffect, &UScaledEffect::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UScaledEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaledEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
