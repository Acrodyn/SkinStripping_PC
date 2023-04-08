// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_DialogueSnippet.h"
#include "SS_DialogueSet.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_DialogueSet : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		TArray<USS_DialogueSnippet*> Snippets;

	UFUNCTION(BlueprintCallable)
		USS_DialogueSnippet* GetNextSnippet();

private:
	int _currentSnippet = 0;
};
