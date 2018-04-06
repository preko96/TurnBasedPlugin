// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Effect.generated.h"
/**
 * 
 */

class ACharacter;

UENUM(BlueprintType)
enum class ETickLogic : uint8 {
	TL_TickOnce UMETA(DisplayName="TickOnce"),
	TL_AlwaysTick UMETA(DisplayName="AlwaysTick")
};

UCLASS(BlueprintType, hidecategories = (Object))
class BASEPLUGIN_API UEffect : public UObject
{
	GENERATED_BODY()
public:
	
	//The owner of the effect -> The one who put the effect onto the Character
	UPROPERTY(BlueprintReadOnly, Category="Effect|Base")
	ACharacter * EffectOwner;
	//The target who the owner put to effect onto.
	UPROPERTY(BlueprintReadOnly, Category="Effect|Base")
	ACharacter * EffectTarget;
	UPROPERTY(EditDefaultsOnly, Category="Effect|Base")
	FString Name;
	UPROPERTY(EditDefaultsOnly, Category="Effect|Base")
	FString Description;
	UPROPERTY(EditDefaultsOnly, Category="Effect|Base")
	int32 Duration;
	UPROPERTY(BlueprintReadOnly, Category="Effect|Base")
	bool bIsInit;
	UPROPERTY(EditDefaultsOnly, Category="Effect|Base")
	ETickLogic TickLogic;
	UPROPERTY(BlueprintReadOnly, Category = "Effect|Base")
	bool bIsTicked;

	UFUNCTION(BlueprintPure, Category="Effect|Gameplay")
	virtual UEffect* Copy();

	UFUNCTION(BlueprintCallable, Category = "Effect|Gameplay")
	virtual void TickTurn();

	UFUNCTION(BlueprintCallable, Category="Effect|Gameplay")
	virtual bool Initialize(ACharacter * const InitOwner, ACharacter * const InitTarget);
private:
	void SetOwnerAndTarget(ACharacter * const EffectOwner, ACharacter * const EffectTarget);
};
