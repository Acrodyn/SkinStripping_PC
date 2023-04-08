// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_GameMode.h"

void ASS_GameMode::AddTag(GameTags tag)
{
	if (!HasTag(tag))
	{
		AcquiredTags.Add(tag);
		OnTagReceived.Broadcast(tag);
	}
}

bool ASS_GameMode::HasTag(GameTags tag)
{
	return AcquiredTags.Contains(tag);
}
