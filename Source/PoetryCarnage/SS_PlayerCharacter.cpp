// @Acrodyn

#include "SS_PlayerCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

// ----------------------------------------------------------------------------
ASS_PlayerCharacter::ASS_PlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}
// ----------------------------------------------------------------------------
void ASS_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}
// ----------------------------------------------------------------------------
void ASS_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
// ----------------------------------------------------------------------------
void ASS_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputLocalPlayerSubsystem* InputSystem = GetLocalViewingPlayerController()->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
    {
        if (InputMapping && !InputSystem->HasMappingContext(InputMapping))
        {
            InputSystem->AddMappingContext(InputMapping, 0);
        }
    }
}
// ----------------------------------------------------------------------------