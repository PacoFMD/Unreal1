// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerActionPlayer.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXAMENAHORASI_API UTriggerActionPlayer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTriggerActionPlayer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	class AActor* MyPlayer = nullptr;
	
	UPROPERTY(EditAnyWhere, Category = "Defaults")
		class ATriggerVolume* TriggerDeath = nullptr;
	UPROPERTY(EditAnyWhere, Category = "Defaults")
	    class ATriggerVolume* TriggerWin = nullptr;
	UPROPERTY(EditAnyWhere, Category = "Defaults")
		class AActor* SpawnerPlace = nullptr;

		
		
};
