// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_DialogueSet.h"
#include "SS_Scenario.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_Scenario : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<USS_DialogueSet*> DialogueSets;

	UFUNCTION(BlueprintCallable)
		USS_DialogueSet* GetNextSet();

	UFUNCTION(BlueprintCallable)
		void UpdateSetAvailability(const ASS_GameMode* gameMode);

	UFUNCTION(BlueprintCallable)
		void Reset();

private:
	TArray<USS_DialogueSet*> _defeaultSets;
	TArray<USS_DialogueSet*> _prioritySets;
	TArray<USS_DialogueSet*> _repeatableSets;
	TArray<USS_DialogueSet*> _expiredSets;

	// This will create bugs if multiple characters are using the same scenario
	USS_DialogueSet* _lastSet = nullptr;

	USS_DialogueSet* GetRandomSet(TArray<USS_DialogueSet*>& List, bool removeEntry = true);
};
