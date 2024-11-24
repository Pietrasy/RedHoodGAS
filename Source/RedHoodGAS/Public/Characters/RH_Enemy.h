// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RH_CharacterBase.h"
#include "RH_Enemy.generated.h"

UCLASS(Abstract)
class REDHOODGAS_API ARH_Enemy : public ARH_CharacterBase
{
	GENERATED_BODY()

public:
	ARH_Enemy();

protected:
	virtual void BeginPlay() override;
};
