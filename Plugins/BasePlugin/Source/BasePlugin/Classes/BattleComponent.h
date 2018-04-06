// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleComponent.generated.h"

class ACharacter;
class USkillLogic;
class UEffect;


USTRUCT(BlueprintType)
struct FActiveSkill
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	ACharacter* ReceivedFrom;
	UPROPERTY(EditDefaultsOnly)
	USkillLogic* SkillLogic;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedSkillSignature, class ACharacter*, ReceivedFrom, class ACharacter*, ReceivedBy, class USkillLogic*, Skill);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUsedSkillSignature, class ACharacter*, UsedOn, class ACharacter*, UsedBy, class USkillLogic*, Skill);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSkillTicked, class ACharacter*, TickedOn, USkillLogic*, TickedSkill);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectTicked, class ACharacter*, TickedOn, UEffect*, TickedEffect);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartRoundSignature, class ACharacter*, StartedBy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndRoundSignature, class ACharacter*, EndedBy);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BASEPLUGIN_API UBattleComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPROPERTY(EditDefaultsOnly, Category="BattleComponent|Stat")
	TMap<FString, FString> Modificators;
	UPROPERTY(EditDefaultsOnly, Category = "BattleComponent|Stat")
	TMap<FString, int32> Stats;
	UPROPERTY(BlueprintReadOnly, Category = "BattleComponent|Stat")
	TMap<FString, float> Values;
	//Skills what's on the component's CHARACTER owner
	UPROPERTY(BlueprintReadOnly, Category = "BattleComponent|Skill")
	TArray<FActiveSkill> ActiveSkills;
	UPROPERTY(EditDefaultsOnly, Category = "BattleComponent|Skill")
	TArray<USkillLogic*> UsuableSkills;
	UPROPERTY(BlueprintReadOnly, Category = "BattleComponent|Skill")
	USkillLogic* BufferedSkill = nullptr;

public:
	
	ACharacter * GetOwnerCharacter() const;

	UFUNCTION(BlueprintCallable, Category="BattleComponent|Gameplay")
	void UseSkill(ACharacter* UseSkillsOn, USkillLogic* UsedSkill) const;
	UFUNCTION(BlueprintCallable, Category = "BattleComponent|Gameplay")
	void ReceiveSkill(ACharacter* ReceivedFrom, USkillLogic* ReceivedSkill);
	UFUNCTION(BlueprintCallable, Category = "BattleComponent|Gameplay")
	void TickTurn();
	UFUNCTION(BlueprintCallable, Category = "BattleComponent|Gameplay")
	void StartTurn() const;
	UFUNCTION(BlueprintCallable, Category = "BattleComponent|Gameplay")
	void EndTurn() const;


public:
	UPROPERTY(BlueprintAssignable, Category = "BattleComponnet|Delegates")
	FReceivedSkillSignature ReceivedSkillDelegate;
	UPROPERTY(BlueprintAssignable, Category = "BattleComponnet|Delegates")
	FUsedSkillSignature UsedSkillDelegate;
	UPROPERTY(BlueprintAssignable, Category = "BattleComponnet|Delegates")
	FOnStartRoundSignature OnStartRoundDelegate;
	UPROPERTY(BlueprintAssignable, Category = "BattleComponnet|Delegates")
	FOnEndRoundSignature OnEndRoundDelegate;
	UPROPERTY(BlueprintAssignable, Category = "BattleComponnet|Delegates")
	FOnSkillTicked OnSkillTickedDelegate;
	UPROPERTY(BlueprintAssignable, Category = "BattleComponnet|Delegates")
	FOnEffectTicked OnEffectTickedDelegate;
};
