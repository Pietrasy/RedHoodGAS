// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RH_CharacterBase.h"
#include "RH_Character.generated.h"

UCLASS(Abstract)
class REDHOODGAS_API ARH_Character : public ARH_CharacterBase
{
	GENERATED_BODY()

public:
	ARH_Character();

	virtual void PossessedBy(AController* NewController) override;

protected:
	virtual void BeginPlay() override;
};
