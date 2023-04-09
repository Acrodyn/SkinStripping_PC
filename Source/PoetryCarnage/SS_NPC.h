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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "NPC")
		NPCMood Mood = NPCMood::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		NPCNames NPCName = NPCNames::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		class USS_NPCData* NPCData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC")
		class USS_DialogueSet* ActiveDialogueSet;

	UFUNCTION(BlueprintCallable)
		void SetMood(NPCMood newMood);

	UFUNCTION(BlueprintCallable)
		void RefreshDialogues();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetDialogue(const FText& text);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void ClearDialogue();

	UFUNCTION(BlueprintImplementableEvent)
		void OnMoodChanged();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void TagReceived(GameTags tag);
		virtual void TagReceived_Implementation(GameTags tag);
};
