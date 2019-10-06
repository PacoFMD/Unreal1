// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerActionPlayer.h"
#include "Engine/TriggerVolume.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

// Sets default values for this component's properties
UTriggerActionPlayer::UTriggerActionPlayer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTriggerActionPlayer::BeginPlay()
{
	Super::BeginPlay();
	//MyPlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	MyPlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	 
	// ...
	
}


// Called every frame
void UTriggerActionPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (TriggerDeath->IsOverlappingActor(MyPlayer)) {

		MyPlayer->GetOwner()->SetActorLocation(SpawnerPlace->GetOwner()->GetActorLocation());
	}
	// ...
}

