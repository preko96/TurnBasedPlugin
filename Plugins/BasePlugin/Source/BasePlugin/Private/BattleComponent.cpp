// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleComponent.h"
#include "SkillLogic.h"
#include "Effect.h"
#include "GameFramework/Character.h"

ACharacter * UBattleComponent::GetOwnerCharacter() const
{
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (OwnerCharacter)
		return OwnerCharacter;
	else {
		UE_LOG(LogTemp, Warning, TEXT("% isnt a Character"), *GetNameSafe(GetOwner()));
		return nullptr;
	}

}

void UBattleComponent::UseSkill(ACharacter* UseSkillsOn, USkillLogic* UsedSkill) const
{
	UBattleComponent* TargetBattleComponent = UseSkillsOn->FindComponentByClass<UBattleComponent>();
	if (!TargetBattleComponent) {
		UE_LOG(LogTemp, Warning, TEXT("%s doesnt got BattleComponent"), *GetNameSafe(UseSkillsOn));
		return;
	}

	ACharacter* OwnerCharacter = GetOwnerCharacter();

	if (OwnerCharacter) {
		TargetBattleComponent->ReceiveSkill(OwnerCharacter, UsedSkill);
		UsedSkillDelegate.Broadcast(UseSkillsOn, OwnerCharacter, UsedSkill);
	}
}

void UBattleComponent::ReceiveSkill(ACharacter* ReceivedFrom, USkillLogic* ReceivedSkill)
{
	ACharacter* OwnerCharacter = GetOwnerCharacter();
	if (OwnerCharacter) {
		ActiveSkills.Add({ ReceivedFrom, ReceivedSkill });
		ReceivedSkillDelegate.Broadcast(ReceivedFrom, OwnerCharacter, ReceivedSkill);
	}
}

void UBattleComponent::TickTurn()
{
	for (FActiveSkill& SkillLogic : ActiveSkills)
		SkillLogic.SkillLogic->TickTurn();
}

void UBattleComponent::StartTurn() const
{
	ACharacter* OwnerCharacter = GetOwnerCharacter();
	if (OwnerCharacter)
		OnStartRoundDelegate.Broadcast(OwnerCharacter);
}

void UBattleComponent::EndTurn() const
{
	ACharacter* OwnerCharacter = GetOwnerCharacter();
	if (OwnerCharacter)
		OnEndRoundDelegate.Broadcast(OwnerCharacter);
}

