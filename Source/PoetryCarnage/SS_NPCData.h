// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_States.h"
#include "SS_NPCData.generated.h"

class USS_Scenario;

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_NPCData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		TMap<NPCMood, UMaterialInterface*> MoodRepresentations;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		NPCNames Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		USS_Scenario* NPCScenario;
};
