// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_States.h"
#include "SS_DialogueSnippet.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_DialogueSnippet : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float StartWait = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float EndWait = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		NPCNames SpeakerName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FText DialogueText;
};
