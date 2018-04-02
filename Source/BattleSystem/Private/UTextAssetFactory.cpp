// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "public/UTextAssetFactory.h"

#include "public/UText.h"


/* UTextAssetFactoryNew structors
*****************************************************************************/

UTextAssetFactory::UTextAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UText::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}


/* UFactory overrides
*****************************************************************************/

UObject* UTextAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UText>(InParent, InClass, InName, Flags);
}


bool UTextAssetFactory::ShouldShowInNewMenu() const
{
	return true;
}