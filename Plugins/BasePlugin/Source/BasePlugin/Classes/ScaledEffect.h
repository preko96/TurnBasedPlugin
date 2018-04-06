// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonEffect.h"
#include "ScaledEffect.generated.h"

/**
 * 
 */

/*
	TODO Put TargetEnum to somewhere else...
*/

UENUM(BlueprintType)
enum class ETarget : uint8 {
	TR_Caster UMETA(DisplayName="Caster"),
	TR_Target UMETA(DisplayName="Target")
};

//How much the values scaling the MAIN EFFECT (like damage, buff's value etc..) 1.0 = 100%
USTRUCT(BlueprintType)
struct FScaleNode
{
	GENERATED_BODY()
	//The "index" which will scale the effect
	UPROPERTY()
	FString ScaleName;
	UPROPERTY()
	float Multiplier;
};

UCLASS()
class BASEPLUGIN_API UScaledEffect : public UCommonEffect
{
	GENERATED_BODY()
public:

	//Indicate who's values to use to scale the effect ex.: value scale 8% of target's HP or value scale 8% of caster's damage
	UPROPERTY(EditDefaultsOnly, Category="ScaledEffect|Gameplay")
	ETarget ScaledBy;

	//How much the values scaling the MAIN EFFECT (like damage, buff's value etc..) 1.0 = 100%
	UPROPERTY(EditDefaultsOnly, Category="ScaledEffect|Base")
	TArray<FScaleNode> Scaling;
	UPROPERTY(BlueprintReadOnly, Category="ScaledEffect|Gameplay")
	float ScaledValue = 0.f;
	UPROPERTY(BlueprintReadOnly, Category="ScaledEffect|Base")
	bool bIsStacking;
	UPROPERTY(BlueprintReadOnly, Category="ScaledEffect|Base")
	bool bIsScaled;

public:

	UFUNCTION(BlueprintPure, Category="Effect|Gameplay")
	virtual UEffect* Copy() override;
	UFUNCTION(BlueprintCallable, Category="Effect|Gameplay")
	virtual bool Initialize(ACharacter * const InitOwner, ACharacter * const InitTarget) override;
	
	UFUNCTION(BlueprintPure, Category = "ScaledEffect|Gameplay")
	float GetFullValue() override;

	UFUNCTION(BlueprintCallable, Category="ScaledEffect|Gameplay")
	void Scale();
	UFUNCTION(BlueprintCallable, Category="ScaledEffect|Gameplay")
	void UnScale();

};