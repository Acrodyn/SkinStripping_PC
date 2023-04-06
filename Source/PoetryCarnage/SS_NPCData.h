// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_States.h"
#include "SS_NPCData.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_NPCData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mood")
		TMap<NPCMood, UMaterialInterface*> MoodRepresentations;
};
