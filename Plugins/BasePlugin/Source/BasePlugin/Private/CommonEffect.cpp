// Fill out your copyright notice in the Description page of Project Settings.

#include "CommonEffect.h"
#include "GameFramework//Character.h"
#include "BattleComponent.h"

UEffect* UCommonEffect::Copy()
{
	UCommonEffect* CopiedEffect = Cast<UCommonEffect>(UEffect::Copy());
	CopiedEffect->Value = Value;
	CopiedEffect->AffectedValue = AffectedValue;
	CopiedEffect->Result = Result;
	return CopiedEffect;
}

void UCommonEffect::TickTurn()
{
	if (TickLogic == ETickLogic::TL_AlwaysTick || !bIsTicked) {
		UBattleComponent* TargetBattleComponent = EffectTarget->FindComponentByClass<UBattleComponent>();
		TMap<FString, float> TargetValues = TargetBattleComponent->Values;
		if (TargetBattleComponent) {
			float * ValueBeforeAffected = TargetValues.Find(AffectedValue);
			if (ValueBeforeAffected) {
				float FinalValue = (Result == EEffectResult::ER_Increasing) ? *ValueBeforeAffected + GetFullValue() : *ValueBeforeAffected - GetFullValue();
				TargetBattleComponent->Values.Add(AffectedValue, FinalValue);
				TargetBattleComponent->OnEffectTickedDelegate.Broadcast(EffectTarget, this);		
			} else {
				UE_LOG(LogTemp, Warning, TEXT("% UCommonEffect::TickTurn TargetValue.Value is not exist (so trying to access a non existing Value(like damage)"), *GetNameSafe(this));
			}
		}
	}
}

float UCommonEffect::GetFullValue()
{
	return Value;
}
