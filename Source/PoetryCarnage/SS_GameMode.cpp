// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_GameMode.h"

// ----------------------------------------------------------------------------
void ASS_GameMode::AddTag(GameTags tag)
{
	if (!HasGameTag(tag))
	{
		AcquiredGameTags.Add(tag);
		OnTagReceived.Broadcast(tag);
	}
}
// ----------------------------------------------------------------------------
bool ASS_GameMode::HasGameTag(GameTags tag) const
{
	return AcquiredGameTags.Contains(tag);
}
// ----------------------------------------------------------------------------
bool ASS_GameMode::HasGameTags(const TArray<GameTags>& tagList) const
{
	for (auto tag : tagList)
	{
		if (tag == GameTags::None)
		{
			continue;
		}

		if (!HasGameTag(tag))
		{
			return false;
		}
	}

	return true;
}
// ----------------------------------------------------------------------------
