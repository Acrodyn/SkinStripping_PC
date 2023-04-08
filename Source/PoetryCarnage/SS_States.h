// @Acrodyn

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class NPCMood : uint8
{
	None = 0,
	Happy = 1,
	Sad = 2,
	Indifferent = 3,
	Angry = 4,
	Worried = 5,
};

UENUM(BlueprintType)
enum class NPCNames : uint8
{
	None = 0,
	Girlfriend = 1,
	PatronMain = 2,
	PatronSecondary = 3,
};

UENUM(BlueprintType)
enum class ObjectOfInterest : uint8
{
	None = 0,
};

UENUM(BlueprintType)
enum class GameTags : uint8
{
	None = 0,
	TestTag = 1,
};