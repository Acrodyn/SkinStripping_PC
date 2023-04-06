// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_NPC.h"

// ----------------------------------------------------------------------------
ASS_NPC::ASS_NPC()
{
	PrimaryActorTick.bCanEverTick = true;
}
// ----------------------------------------------------------------------------
void ASS_NPC::BeginPlay()
{
	Super::BeginPlay();
}
// ----------------------------------------------------------------------------
void ASS_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
// ----------------------------------------------------------------------------
void ASS_NPC::SetMood(NPCMood mood)
{
	Mood = mood;
}
// ----------------------------------------------------------------------------
