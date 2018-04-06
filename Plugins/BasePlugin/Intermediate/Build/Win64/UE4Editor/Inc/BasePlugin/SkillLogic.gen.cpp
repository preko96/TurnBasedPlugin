// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SkillLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillLogic() {}
// Cross Module References
	BASEPLUGIN_API UEnum* Z_Construct_UEnum_BasePlugin_ESkillID();
	UPackage* Z_Construct_UPackage__Script_BasePlugin();
	BASEPLUGIN_API UClass* Z_Construct_UClass_USkillLogic_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_USkillLogic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_USkillLogic_Copy();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_USkillLogic_Initalize();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	BASEPLUGIN_API UFunction* Z_Construct_UFunction_USkillLogic_TickTurn();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
// End Cross Module References
	static UEnum* ESkillID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BasePlugin_ESkillID, Z_Construct_UPackage__Script_BasePlugin(), TEXT("ESkillID"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillID(ESkillID_StaticEnum, TEXT("/Script/BasePlugin"), TEXT("ESkillID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BasePlugin_ESkillID_CRC() { return 3025961710U; }
	UEnum* Z_Construct_UEnum_BasePlugin_ESkillID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BasePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillID"), 0, Get_Z_Construct_UEnum_BasePlugin_ESkillID_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillID::S_Alpha", (int64)ESkillID::S_Alpha },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
				{ "S_Alpha.DisplayName", "Alpha" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BasePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESkillID",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESkillID",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USkillLogic::StaticRegisterNativesUSkillLogic()
	{
		UClass* Class = USkillLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Copy", &USkillLogic::execCopy },
			{ "Initalize", &USkillLogic::execInitalize },
			{ "TickTurn", &USkillLogic::execTickTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USkillLogic_Copy()
	{
		struct SkillLogic_eventCopy_Parms
		{
			USkillLogic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkillLogic_eventCopy_Parms, ReturnValue), Z_Construct_UClass_USkillLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Skill|Utility" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillLogic, "Copy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SkillLogic_eventCopy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkillLogic_Initalize()
	{
		struct SkillLogic_eventInitalize_Parms
		{
			const ACharacter* InitSkillOwner;
			const ACharacter* InitSkillTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitSkillTarget_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitSkillTarget = { UE4CodeGen_Private::EPropertyClass::Object, "InitSkillTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SkillLogic_eventInitalize_Parms, InitSkillTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_InitSkillTarget_MetaData, ARRAY_COUNT(NewProp_InitSkillTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitSkillOwner_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitSkillOwner = { UE4CodeGen_Private::EPropertyClass::Object, "InitSkillOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SkillLogic_eventInitalize_Parms, InitSkillOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_InitSkillOwner_MetaData, ARRAY_COUNT(NewProp_InitSkillOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitSkillTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitSkillOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Skill|Function" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillLogic, "Initalize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkillLogic_eventInitalize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkillLogic_TickTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Skill|Gameplay" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillLogic, "TickTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkillLogic_NoRegister()
	{
		return USkillLogic::StaticClass();
	}
	UClass* Z_Construct_UClass_USkillLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USkillLogic_Copy, "Copy" }, // 4191836110
				{ &Z_Construct_UFunction_USkillLogic_Initalize, "Initalize" }, // 3035559134
				{ &Z_Construct_UFunction_USkillLogic_TickTurn, "TickTurn" }, // 1099336547
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "SkillLogic.h" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
				{ "Category", "Skill|Base" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effects = { UE4CodeGen_Private::EPropertyClass::Array, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(USkillLogic, Effects), METADATA_PARAMS(NewProp_Effects_MetaData, ARRAY_COUNT(NewProp_Effects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillID_MetaData[] = {
				{ "Category", "Skill|Base" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillID = { UE4CodeGen_Private::EPropertyClass::Enum, "SkillID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(USkillLogic, SkillID), Z_Construct_UEnum_BasePlugin_ESkillID, METADATA_PARAMS(NewProp_SkillID_MetaData, ARRAY_COUNT(NewProp_SkillID_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillID_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTarget_MetaData[] = {
				{ "Category", "Skill|Gameplay" },
				{ "ModuleRelativePath", "Classes/SkillLogic.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillTarget = { UE4CodeGen_Private::EPropertyClass::Object, "SkillTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USkillLogic, SkillTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_SkillTarget_MetaData, ARRAY_COUNT(NewProp_SkillTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Effects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Effects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkillID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkillID_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkillTarget,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkillLogic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkillLogic::StaticClass,
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
	IMPLEMENT_CLASS(USkillLogic, 4141840840);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillLogic(Z_Construct_UClass_USkillLogic, &USkillLogic::StaticClass, TEXT("/Script/BasePlugin"), TEXT("USkillLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
