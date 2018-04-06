// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillLogic.generated.h"
/**
 * 
 */
UENUM(BlueprintType)
enum class ESkillID : uint8 {
	S_Alpha UMETA(DisplayName = "Alpha")
};

class UEffect;
class ACharacter;

UCLASS(BlueprintType, hidecategories = (Object))
class BASEPLUGIN_API USkillLogic : public UObject
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintPure, Category = "Skill|Utility")
	USkillLogic * Copy();

	UFUNCTION(BlueprintCallable, Category = "Skill|Gameplay")
	void TickTurn();
	
	UFUNCTION(BlueprintCallable, Category="Skill|Function")
	void Initalize(ACharacter * const InitSkillOwner, ACharacter * const InitSkillTarget);

	UPROPERTY(BlueprintReadOnly, Category = "Skill|Gameplay")
	ACharacter* SkillTarget;

	UPROPERTY(EditDefaultsOnly, Category="Skill|Base")
	ESkillID SkillID;

	UPROPERTY(EditDefaultsOnly, Category="Skill|Base")
	TArray<UEffect*> Effects;

	bool bIsInitialized;
};
