// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillLogic.h"
#include "Effect.h"
#include "BattleComponent.h"
#include "GameFramework/Character.h"

USkillLogic * USkillLogic::Copy()
{
	USkillLogic* CopiedSkill = NewObject<USkillLogic>(this, GetClass());
	CopiedSkill->SkillID = SkillID;
	CopiedSkill->Effects = Effects;
	CopiedSkill->bIsInitialized = bIsInitialized;
	return CopiedSkill;
}

void USkillLogic::TickTurn()
{
	for (UEffect* Effect : Effects)
		Effect->TickTurn();
	UBattleComponent* TargetBattleComponent = SkillTarget->FindComponentByClass<UBattleComponent>();
	TargetBattleComponent->OnSkillTickedDelegate.Broadcast(SkillTarget, this);
}

void USkillLogic::Initalize(ACharacter * const InitSkillOwner, ACharacter * const InitSkillTarget)
{
	for (UEffect* Effect : Effects)
		Effect->Initialize(InitSkillOwner, InitSkillTarget);
}
