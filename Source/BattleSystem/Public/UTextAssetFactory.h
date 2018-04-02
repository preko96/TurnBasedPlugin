// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"

#include "UTextAssetFactory.generated.h"


/**
* Implements a factory for UTextAsset objects.
*/

UCLASS(hidecategories = Object)
class UTextAssetFactory
	: public UFactory
{
	GENERATED_UCLASS_BODY()

public:

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
};