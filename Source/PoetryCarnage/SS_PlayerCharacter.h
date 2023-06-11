// @Acrodyn

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SS_PlayerCharacter.generated.h"

UCLASS()
class POETRYCARNAGE_API ASS_PlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASS_PlayerCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputMappingContext* InputMapping;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void FreezePlayer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void UnfreezePlayer();
};
