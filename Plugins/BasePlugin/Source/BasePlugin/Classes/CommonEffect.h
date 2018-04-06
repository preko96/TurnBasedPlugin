// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Effect.h"
#include "CommonEffect.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EEffectResult : uint8 {
	ER_Increasing UMETA(DisplayName="Increasing"),
	ER_Decreasing UMETA(DisplayName="Decreasing")
};

UCLASS(BlueprintType, hidecategories = (Object))
class BASEPLUGIN_API UCommonEffect : public UEffect
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category="Effect|Gameplay")
	virtual UEffect* Copy() override;
	UFUNCTION(BlueprintCallable, Category = "Effect|Gameplay")
	virtual void TickTurn() override;	
	UFUNCTION(BlueprintPure, Category = "ScaledEffect|Gameplay")
	virtual float GetFullValue();

	UPROPERTY(EditDefaultsOnly, Category="CommonEffect|Base")
	float Value;
	UPROPERTY(EditDefaultsOnly, Category="CommonEffect|Base")
	FString AffectedValue;
	//Whenever the value will increase, or decrease a "Stat" "Value" (like HP)
	UPROPERTY(EditDefaultsOnly, Category="CommonEffect|Base")
	EEffectResult Result;
};
