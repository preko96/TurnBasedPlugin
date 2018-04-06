// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Effect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffect() {}
// Cross Module References
	BASEPLUGIN_API UEnum* Z_Construct_UEnum_BasePlugin_ETickLogic();
	UPackage* Z_Construct_UPackage__Script_BasePlugin();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UEffect_Copy();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UEffect_Initialize();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_UEffect_TickTurn();
// End Cross Module References
	static UEnum* ETickLogic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BasePlugin_ETickLogic, Z_Construct_UPackage__Script_BasePlugin(), TEXT("ETickLogic"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETickLogic(ETickLogic_StaticEnum, TEXT("/Script/BasePlugin"), TEXT("ETickLogic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BasePlugin_ETickLogic_CRC() { return 3732637652U; }
	UEnum* Z_Construct_UEnum_BasePlugin_ETickLogic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BasePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETickLogic"), 0, Get_Z_Construct_UEnum_BasePlugin_ETickLogic_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETickLogic::TL_TickOnce", (int64)ETickLogic::TL_TickOnce },
				{ "ETickLogic::TL_AlwaysTick", (int64)ETickLogic::TL_AlwaysTick },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
				{ "TL_AlwaysTick.DisplayName", "AlwaysTick" },
				{ "TL_TickOnce.DisplayName", "TickOnce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BasePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETickLogic",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETickLogic",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEffect::StaticRegisterNativesUEffect()
	{
		UClass* Class = UEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Copy", &UEffect::execCopy },
			{ "Initialize", &UEffect::execInitialize },
			{ "TickTurn", &UEffect::execTickTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEffect_Copy()
	{
		struct Effect_eventCopy_Parms
		{
			UEffect* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Effect_eventCopy_Parms, ReturnValue), Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffect, "Copy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(Effect_eventCopy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEffect_Initialize()
	{
		struct Effect_eventInitialize_Parms
		{
			const ACharacter* InitOwner;
			const ACharacter* InitTarget;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Effect_eventInitialize_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Effect_eventInitialize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitTarget = { UE4CodeGen_Private::EPropertyClass::Object, "InitTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Effect_eventInitialize_Parms, InitTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_InitTarget_MetaData, ARRAY_COUNT(NewProp_InitTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitOwner_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitOwner = { UE4CodeGen_Private::EPropertyClass::Object, "InitOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Effect_eventInitialize_Parms, InitOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_InitOwner_MetaData, ARRAY_COUNT(NewProp_InitOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffect, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Effect_eventInitialize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEffect_TickTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effect|Gameplay" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffect, "TickTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffect_NoRegister()
	{
		return UEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEffect_Copy, "Copy" }, // 1027118297
				{ &Z_Construct_UFunction_UEffect_Initialize, "Initialize" }, // 560129176
				{ &Z_Construct_UFunction_UEffect_TickTurn, "TickTurn" }, // 2866893443
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Effect.h" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTicked_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			auto NewProp_bIsTicked_SetBit = [](void* Obj){ ((UEffect*)Obj)->bIsTicked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTicked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTicked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTicked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsTicked_MetaData, ARRAY_COUNT(NewProp_bIsTicked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickLogic_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TickLogic = { UE4CodeGen_Private::EPropertyClass::Enum, "TickLogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEffect, TickLogic), Z_Construct_UEnum_BasePlugin_ETickLogic, METADATA_PARAMS(NewProp_TickLogic_MetaData, ARRAY_COUNT(NewProp_TickLogic_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickLogic_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInit_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			auto NewProp_bIsInit_SetBit = [](void* Obj){ ((UEffect*)Obj)->bIsInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsInit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsInit_MetaData, ARRAY_COUNT(NewProp_bIsInit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Int, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEffect, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEffect, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEffect, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTarget_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
				{ "ToolTip", "The target who the owner put to effect onto." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectTarget = { UE4CodeGen_Private::EPropertyClass::Object, "EffectTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UEffect, EffectTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_EffectTarget_MetaData, ARRAY_COUNT(NewProp_EffectTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectOwner_MetaData[] = {
				{ "Category", "Effect|Base" },
				{ "ModuleRelativePath", "Classes/Effect.h" },
				{ "ToolTip", "The owner of the effect -> The one who put the effect onto the Character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOwner = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UEffect, EffectOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_EffectOwner_MetaData, ARRAY_COUNT(NewProp_EffectOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTicked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickLogic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickLogic_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEffect::StaticClass,
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
	IMPLEMENT_CLASS(UEffect, 3423485911);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffect(Z_Construct_UClass_UEffect, &UEffect::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
