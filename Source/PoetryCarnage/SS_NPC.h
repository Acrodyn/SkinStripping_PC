// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SS_States.h"
#include "SS_NPC.generated.h"

UCLASS()
class POETRYCARNAGE_API ASS_NPC : public AActor
{
	GENERATED_BODY()
	
public:	
	ASS_NPC();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void SetMood(NPCMood mood);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "NPC")
		NPCMood Mood = NPCMood::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		class USS_NPCData* NPCData;

	UFUNCTION(BlueprintImplementableEvent)
		void OnMoodChanged();
};
