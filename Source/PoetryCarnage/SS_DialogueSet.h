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
class POETRYCARNAGE_API USS_DialogueSet : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<GameTags> MandatoryTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		DialogueBehaviour Behaviour;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FSS_DialogueSnippet> Snippets;

	UFUNCTION(BlueprintCallable)
		bool GetNextSnippet(FSS_DialogueSnippet& snippet);

	UFUNCTION(BlueprintCallable)
		void Reset();

private:
		int _currentSnippet = 0;
};
