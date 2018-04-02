// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UTextAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTextAssetFactory() {}
// Cross Module References
	BATTLESYSTEM_API UClass* Z_Construct_UClass_UTextAssetFactory_NoRegister();
	BATTLESYSTEM_API UClass* Z_Construct_UClass_UTextAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BattleSystem();
// End Cross Module References
	void UTextAssetFactory::StaticRegisterNativesUTextAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UTextAssetFactory_NoRegister()
	{
		return UTextAssetFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleSystem,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "UTextAssetFactory.h" },
				{ "ModuleRelativePath", "Public/UTextAssetFactory.h" },
				{ "ToolTip", "Implements a factory for UTextAsset objects." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextAssetFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextAssetFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UTextAssetFactory, 577590117);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextAssetFactory(Z_Construct_UClass_UTextAssetFactory, &UTextAssetFactory::StaticClass, TEXT("/Script/BattleSystem"), TEXT("UTextAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
