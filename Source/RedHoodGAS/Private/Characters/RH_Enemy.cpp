// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/RH_Enemy.h"

#include "AbilitySystem/RH_AbilitySystemComponent.h"
#include "AbilitySystem/RH_AttributeSet.h"


// Sets default values
ARH_Enemy::ARH_Enemy()
{
	AbilitySystemComponent = CreateDefaultSubobject<URH_AbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<URH_AttributeSet>("AttributeSet");
}

// Called when the game starts or when spawned
void ARH_Enemy::BeginPlay()
{
	Super::BeginPlay();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}