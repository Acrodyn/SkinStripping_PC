// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SS_States.h"
#include "SS_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API ASS_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
		TMap<NPCNames, class ASS_NPC*> NPCHolder;
};
