// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SS_Dialogue.generated.h"

/**
 * 
 */
UCLASS()
class POETRYCARNAGE_API USS_Dialogue : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void InitWidget();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void StartDialogue(const FText& text);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void ClearDialogueText();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void EndDialogue();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, BlueprintPure)
		bool IsCurrentlyAnimated() const;
	
};
