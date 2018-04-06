// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/CommonEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonEffect() {}
// Cross Module References
	BASEPLUGIN_API UEnum* Z_Construct_UEnum_BasePlugin_EEffectResult();
	UPackage* Z_Construct_UPackage__Script_BasePlugin();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UCommonEffect_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UCommonEffect();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UCommonEffect_Copy();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UCommonEffect_GetFullValue();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UCommonEffect_TickTurn();
// End Cross Module References
	static UEnum* EEffectResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BasePlugin_EEffectResult, Z_Construct_UPackage__Script_BasePlugin(), TEXT("EEffectResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectResult(EEffectResult_StaticEnum, TEXT("/Script/BasePlugin"), TEXT("EEffectResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BasePlugin_EEffectResult_CRC() { return 641841876U; }
	UEnum* Z_Construct_UEnum_BasePlugin_EEffectResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BasePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectResult"), 0, Get_Z_Construct_UEnum_BasePlugin_EEffectResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectResult::ER_Increasing", (int64)EEffectResult::ER_Increasing },
				{ "EEffectResult::ER_Decreasing", (int64)EEffectResult::ER_Decreasing },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ER_Decreasing.DisplayName", "Decreasing" },
				{ "ER_Increasing.DisplayName", "Increasing" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BasePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEffectResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEffectResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCommonEffect::StaticRegisterNativesUCommonEffect()
	{
		UClass* Class = UCommonEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Copy", &UCommonEffect::execCopy },
			{ "GetFullValue", &UCommonEffect::execGetFullValue },
			{ "TickTurn", &UCommonEffect::execTickTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCommonEffect_Copy()
	{
		struct CommonEffect_eventCopy_Parms
		{
			UEffect* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonEffect_eventCopy_Parms, ReturnValue), Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonEffect, "Copy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(CommonEffect_eventCopy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCommonEffect_GetFullValue()
	{
		struct CommonEffect_eventGetFullValue_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonEffect_eventGetFullValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ScaledEffect|Gameplay" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonEffect, "GetFullValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(CommonEffect_eventGetFullValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCommonEffect_TickTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonEffect, "TickTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonEffect_NoRegister()
	{
		return UCommonEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UCommonEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEffect,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCommonEffect_Copy, "Copy" }, // 3853172782
				{ &Z_Construct_UFunction_UCommonEffect_GetFullValue, "GetFullValue" }, // 1499707376
				{ &Z_Construct_UFunction_UCommonEffect_TickTurn, "TickTurn" }, // 4238439794
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "CommonEffect.h" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
				{ "Category", "CommonEffect|Base" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
				{ "ToolTip", "Whenever the value will increase, or decrease a \"Stat\" \"Value\" (like HP)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UCommonEffect, Result), Z_Construct_UEnum_BasePlugin_EEffectResult, METADATA_PARAMS(NewProp_Result_MetaData, ARRAY_COUNT(NewProp_Result_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedValue_MetaData[] = {
				{ "Category", "CommonEffect|Base" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AffectedValue = { UE4CodeGen_Private::EPropertyClass::Str, "AffectedValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UCommonEffect, AffectedValue), METADATA_PARAMS(NewProp_AffectedValue_MetaData, ARRAY_COUNT(NewProp_AffectedValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "CommonEffect|Base" },
				{ "ModuleRelativePath", "Classes/CommonEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UCommonEffect, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AffectedValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCommonEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCommonEffect::StaticClass,
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
	IMPLEMENT_CLASS(UCommonEffect, 378644356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonEffect(Z_Construct_UClass_UCommonEffect, &UCommonEffect::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UCommonEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
