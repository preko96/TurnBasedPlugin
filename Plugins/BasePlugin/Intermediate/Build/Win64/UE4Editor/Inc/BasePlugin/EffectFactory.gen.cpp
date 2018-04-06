// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EffectFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectFactory() {}
// Cross Module References
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffectFactory_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UEffectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BasePlugin();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UCommonEffectFactory_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UCommonEffectFactory();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UScaledEffectFactory_NoRegister();
	BASEPLUGIN_API UClass* Z_Construct_UClass_UScaledEffectFactory();
// End Cross Module References
	void UEffectFactory::StaticRegisterNativesUEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_UEffectFactory_NoRegister()
	{
		return UEffectFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EffectFactory.h" },
				{ "ModuleRelativePath", "Classes/EffectFactory.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEffectFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEffectFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffectFactory, 538488315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffectFactory(Z_Construct_UClass_UEffectFactory, &UEffectFactory::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffectFactory);
	void UCommonEffectFactory::StaticRegisterNativesUCommonEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_UCommonEffectFactory_NoRegister()
	{
		return UCommonEffectFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UCommonEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EffectFactory.h" },
				{ "ModuleRelativePath", "Classes/EffectFactory.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCommonEffectFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCommonEffectFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonEffectFactory, 1016373832);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonEffectFactory(Z_Construct_UClass_UCommonEffectFactory, &UCommonEffectFactory::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UCommonEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonEffectFactory);
	void UScaledEffectFactory::StaticRegisterNativesUScaledEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_UScaledEffectFactory_NoRegister()
	{
		return UScaledEffectFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UScaledEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_BasePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EffectFactory.h" },
				{ "ModuleRelativePath", "Classes/EffectFactory.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScaledEffectFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScaledEffectFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaledEffectFactory, 2653760517);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaledEffectFactory(Z_Construct_UClass_UScaledEffectFactory, &UScaledEffectFactory::StaticClass, TEXT("/Script/BasePlugin"), TEXT("UScaledEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaledEffectFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
