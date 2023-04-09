// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_DialogueSet.h"

// ----------------------------------------------------------------------------
bool USS_DialogueSet::GetNextSnippet(FSS_DialogueSnippet& snippet)
{
	if (!Snippets.IsValidIndex(_currentSnippet))
	{
		return false;
	}
	
	snippet = Snippets[_currentSnippet++];

	return true;
}
// ----------------------------------------------------------------------------
void USS_DialogueSet::Reset()
{
	_currentSnippet = 0;
}
// ----------------------------------------------------------------------------
