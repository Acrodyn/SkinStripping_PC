// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_Scenario.h"
#include "SS_GameMode.h"
#include "Kismet/GameplayStatics.h"

// ----------------------------------------------------------------------------
USS_DialogueSet* USS_Scenario::GetNextSet()
{
	USS_DialogueSet* nextSet = nullptr;

	if (!_prioritySets.IsEmpty())
	{
		nextSet = GetRandomSet(_prioritySets);
	}
	else if (!_defeaultSets.IsEmpty())
	{
		nextSet = GetRandomSet(_defeaultSets);

		if (nextSet->Behaviour == DialogueBehaviour::Repeatable)
		{
			_repeatableSets.Add(nextSet);
		}
	}
	else if (!_repeatableSets.IsEmpty())
	{
		nextSet = GetRandomSet(_repeatableSets, false);
	}

	// We don't want two in a row
	if (nextSet == _lastSet)
	{
		return nullptr;
	}

	// Repeatables should never expire
	if (nextSet->Behaviour != DialogueBehaviour::Repeatable)
	{
		_expiredSets.Add(nextSet);
	}

	_lastSet = nextSet;

	return nextSet;
}
// ----------------------------------------------------------------------------
void USS_Scenario::UpdateSetAvailability(const ASS_GameMode* gameMode)
{
	for (auto set : DialogueSets)
	{
		if (_expiredSets.Contains(set) || !gameMode->HasGameTags(set->MandatoryTags))
		{
			continue;
		}

		if (set->Behaviour == DialogueBehaviour::Priority)
		{
			_prioritySets.Add(set);
		}
		else
		{
			_defeaultSets.Add(set);
		}
	}
}
// ----------------------------------------------------------------------------
void USS_Scenario::Reset()
{
	_defeaultSets.Empty();
	_prioritySets.Empty();
	_repeatableSets.Empty();
	_expiredSets.Empty();
	_lastSet = nullptr;

	for (auto set : DialogueSets)
	{
		set->Reset();
	}
}
// ----------------------------------------------------------------------------
USS_DialogueSet* USS_Scenario::GetRandomSet(TArray<USS_DialogueSet*>& List, bool removeEntry)
{
	if (List.Num() == 0)
	{
		return nullptr;
	}

	int randomIndex = FMath::RandHelper(List.Num());
	USS_DialogueSet* randomSet = List[randomIndex];

	if (removeEntry)
	{
		List.RemoveAt(randomIndex);
	}

	return randomSet;
}
// ----------------------------------------------------------------------------