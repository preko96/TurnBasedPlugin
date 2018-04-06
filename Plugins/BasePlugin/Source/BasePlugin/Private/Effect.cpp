// Fill out your copyright notice in the Description page of Project Settings.

#include "Effect.h"

UEffect* UEffect::Copy()
{
	UEffect* CopiedEffect = NewObject<UEffect>(this, GetClass());
	CopiedEffect->Name = Name;
	CopiedEffect->Description = Description;
	CopiedEffect->Duration = Duration;
	CopiedEffect->bIsInit = bIsInit;
	CopiedEffect->TickLogic = TickLogic;
	return CopiedEffect;
}

void UEffect::TickTurn()
{
}

bool UEffect::Initialize(ACharacter * const InitOwner , ACharacter * const InitTarget )
{
	if (bIsInit) {
		UE_LOG(LogTemp, Warning, TEXT("UEffect % is already intialized"), *GetNameSafe(this));
		//Wasn't able to init again.
		return false;
	}

	SetOwnerAndTarget(InitOwner, InitTarget);
	bIsInit = true;

	//Was able to init
	return true;
}

void UEffect::SetOwnerAndTarget(ACharacter * const EffectOwner, ACharacter * const EffectTarget)
{
	this->EffectOwner = EffectOwner;
	this->EffectTarget = EffectTarget;
	if (!EffectOwner || !EffectTarget)
		UE_LOG(LogTemp, Warning, TEXT("UEffect % Owner or Target is Invalid"), *GetNameSafe(this));
}
