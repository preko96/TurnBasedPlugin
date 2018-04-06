// Fill out your copyright notice in the Description page of Project Settings.

#include "ScaledEffect.h"
#include "BattleComponent.h"
#include "GameFramework/Character.h"

UEffect* UScaledEffect::Copy()
{
	UScaledEffect* CopiedEffect = Cast<UScaledEffect>(UCommonEffect::Copy());
	CopiedEffect->ScaledBy = ScaledBy;
	CopiedEffect->Scaling = Scaling;
	CopiedEffect->ScaledValue = ScaledValue;
	return CopiedEffect;
}

bool UScaledEffect::Initialize(ACharacter * const InitOwner, ACharacter * const InitTarget)
{
	if (UCommonEffect::Initialize(InitOwner, InitTarget)) {
		Scale();
		return true;
	}
	return false;
}

void UScaledEffect::Scale()
{
	if (bIsStacking || !bIsScaled) {
		ACharacter* ScaleByCharacter = (ScaledBy == ETarget::TR_Caster) ? EffectOwner : EffectTarget;
		UBattleComponent* ScaledBattleComponent = ScaleByCharacter->FindComponentByClass<UBattleComponent>();
		
		for (FScaleNode ScaleNode : Scaling) {
			float * FoundedValue = ScaledBattleComponent->Values.Find(ScaleNode.ScaleName);
			if (FoundedValue) {
				float NodeScaledValue = *FoundedValue * ScaleNode.Multiplier;
				ScaledValue += NodeScaledValue;
			} else {
				UE_LOG(LogTemp, Warning, TEXT("ScaledByCharacter do not have %s 'index'"), *ScaleNode.ScaleName);
			}
		}
		bIsScaled = true;
	}
}

void UScaledEffect::UnScale()
{
	ScaledValue = 0.f;
	bIsScaled = false;
}

float UScaledEffect::GetFullValue()
{
	return Value + ScaledValue;
}
