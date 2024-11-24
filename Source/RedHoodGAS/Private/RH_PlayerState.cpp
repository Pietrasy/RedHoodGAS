// Fill out your copyright notice in the Description page of Project Settings.


#include "RH_PlayerState.h"

#include "AbilitySystem/RH_AbilitySystemComponent.h"
#include "AbilitySystem/RH_AttributeSet.h"

ARH_PlayerState::ARH_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<URH_AbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<URH_AttributeSet>("AttributeSet");
}

UAbilitySystemComponent* ARH_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
