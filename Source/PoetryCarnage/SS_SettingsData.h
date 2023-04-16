// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SS_SettingsData.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_SettingsData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float DefaultMusicAudio = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float DefaultRainAudio = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float DefaultNoiseAudio = 1.f;
};
