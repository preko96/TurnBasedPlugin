// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillFactory.h"
#include "SkillLogic.h"

#include "Containers/UnrealString.h"
#include "Misc/FileHelper.h"


USkillFactory::USkillFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	Formats.Add(TEXT("sl;Skill"));
	SupportedClass = USkillLogic::StaticClass();
	bCreateNew = true;
	bEditorImport = true;
}

UObject * USkillFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<USkillLogic>(InParent, InClass, InName, Flags);
}

UObject * USkillFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	USkillLogic* SkillLogicAsset = nullptr;

/*
	if (FFileHelper::LoadFileToString(SkillLogicAsset, *Filename))
	{
		SkillLogicAsset = NewObject<USkillLogic>(InParent, InClass, InName, Flags);
	}*/

	bOutOperationCanceled = false;

	return SkillLogicAsset;
}
