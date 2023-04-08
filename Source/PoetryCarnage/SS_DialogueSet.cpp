// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_DialogueSet.h"

USS_DialogueSnippet* USS_DialogueSet::GetNextSnippet()
{
	if (!Snippets.IsValidIndex(_currentSnippet))
	{
		return nullptr;
	}
	
	return Snippets[_currentSnippet++];
}
