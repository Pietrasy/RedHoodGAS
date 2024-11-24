// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/RH_CharacterBase.h"

ARH_CharacterBase::ARH_CharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent* ARH_CharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ARH_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
