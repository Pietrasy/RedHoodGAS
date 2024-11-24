// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/RH_Character.h"

#include "AbilitySystemComponent.h"
#include "RH_PlayerState.h"


ARH_Character::ARH_Character()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARH_Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	ARH_PlayerState* RedHoodPlayerState = GetPlayerState<ARH_PlayerState>();
	check(RedHoodPlayerState);
	RedHoodPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(RedHoodPlayerState, this);
	AbilitySystemComponent = RedHoodPlayerState->GetAbilitySystemComponent();
	AttributeSet = RedHoodPlayerState->GetAttributeSet();
}

void ARH_Character::BeginPlay()
{
	Super::BeginPlay();
}
