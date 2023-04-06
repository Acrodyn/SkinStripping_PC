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