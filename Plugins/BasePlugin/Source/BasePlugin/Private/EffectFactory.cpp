// Fill out your copyright notice in the Description page of Project Settings.

#include "EffectFactory.h"

#include "Containers/UnrealString.h"
#include "Misc/FileHelper.h"

#include "Effect.h"
#include "CommonEffect.h"
#include "ScaledEffect.h"


////////////////////////////////////
UEffectFactory::UEffectFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	Formats.Add(TEXT("ex;Effect"));
	SupportedClass = UEffect::StaticClass();
	bCreateNew = true;
	bEditorImport = true;
}

UObject * UEffectFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UEffect>(InParent, InClass, InName, Flags);
}

UObject * UEffectFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UEffect* EffectAsset = nullptr;
	bOutOperationCanceled = false;

	return EffectAsset;
}


////////////////////////////////////
UCommonEffectFactory::UCommonEffectFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	Formats.Add(TEXT("cx;CommonEffect"));
	SupportedClass = UCommonEffect::StaticClass();
	bCreateNew = true;
	bEditorImport = true;
}

UObject * UCommonEffectFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCommonEffect>(InParent, InClass, InName, Flags);
}

UObject * UCommonEffectFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UCommonEffect * CommonEffectAsset = nullptr;
	bOutOperationCanceled = false;

	return CommonEffectAsset;
}


////////////////////////////////////
UScaledEffectFactory::UScaledEffectFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	Formats.Add(TEXT("sx;ScaledEffect"));
	SupportedClass = UScaledEffect::StaticClass();
	bCreateNew = true;
	bEditorImport = true;
}

UObject * UScaledEffectFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UScaledEffect>(InParent, InClass, InName, Flags);
}

UObject * UScaledEffectFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UScaledEffect * ScaledEffectAsset = nullptr;
	bOutOperationCanceled = false;

	return ScaledEffectAsset;
}
