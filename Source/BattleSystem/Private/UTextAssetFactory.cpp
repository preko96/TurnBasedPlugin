// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "public/UTextAssetFactory.h"
#include "public/UText.h"

#include "Containers/UnrealString.h"
#include "Misc/FileHelper.h"


/* UTextAssetFactory structors
*****************************************************************************/

UTextAssetFactory::UTextAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Formats.Add(FString(TEXT("txt;")) + NSLOCTEXT("UTextAssetFactory", "FormatTxt", "Text File").ToString());
	SupportedClass = UText::StaticClass();
	bCreateNew = false;
	bEditorImport = true;
}

UObject* UTextAssetFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	FEditorDelegates::OnAssetPreImport.Broadcast(this, Class, InParent, Name, Type);
	UText* TextAsset = nullptr;
	FString TextString;

	if (FFileHelper::LoadFileToString(TextString, *Filename))
	{
		TextAsset = NewObject<UText>(InParent, InClass, InName, Flags);
		TextAsset->Text = FText::FromString(TextString);
	}

	bOutOperationCanceled = false;

	return TextAsset;
}