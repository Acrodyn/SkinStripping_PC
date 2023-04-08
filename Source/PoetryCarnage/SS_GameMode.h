// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SS_States.h"
#include "SS_GameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTagReceivedDelegate, GameTags, tag);

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

	UPROPERTY(BlueprintReadOnly)
		TArray<GameTags> AcquiredTags;

	UPROPERTY(BlueprintAssignable)
		FOnTagReceivedDelegate OnTagReceived;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void StartScenarios();

	UFUNCTION(BlueprintCallable)
		void AddTag(GameTags tag);

	UFUNCTION(BlueprintCallable)
		bool HasTag(GameTags tag);
};