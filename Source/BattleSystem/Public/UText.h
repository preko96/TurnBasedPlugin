// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UText.generated.h"

/**
 * 
 */

UCLASS(BlueprintType, hidecategories = (Object))
class BATTLESYSTEM_API UText : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TextAsset")
	FText Text;
};
