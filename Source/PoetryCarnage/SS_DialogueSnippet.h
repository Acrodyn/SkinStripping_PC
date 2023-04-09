// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_States.h"
#include "SS_DialogueSnippet.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSS_DialogueSnippet
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float StartWait = 0.8f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Duration = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float EndWait = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		NPCNames SpeakerName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		NPCMood SpeakerMood;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		SnippetQuirks Quirk;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FText DialogueText;
};
