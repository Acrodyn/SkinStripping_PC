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
class POETRYCARNAGE_API USS_Scenario : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		TArray<USS_DialogueSet*> DefaultSnippets;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		TArray<USS_DialogueSet*> PrioritySnippets;

	UFUNCTION(BlueprintCallable)
		USS_DialogueSet* GetNextSnippet();

	UFUNCTION(BlueprintCallable)
		USS_DialogueSet* GetActiveSnippet();

private:
	TQueue<USS_DialogueSet*> DefeaultSnippetQueue;
	TQueue<USS_DialogueSet*> PrioritySnippetQueue;

	USS_DialogueSet* ActiveSnippet;
};
