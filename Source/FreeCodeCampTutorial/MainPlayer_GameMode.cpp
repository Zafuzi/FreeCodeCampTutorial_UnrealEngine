// Copyright Zachary Foutz 2020


#include "MainPlayer_GameMode.h"
#include "GameFramework/Actor.h"

AMainPlayer_GameMode::AMainPlayer_GameMode() {
	PrimaryActorTick.bCanEverTick = true;
}

void AMainPlayer_GameMode::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMainPlayer_GameMode::SpawnPlayerRecharge, FMath::RandRange(2.0f, 5.0f), true);
}

void AMainPlayer_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainPlayer_GameMode::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(SpawnX_Min, SpawnX_Max);
	float RandY = FMath::RandRange(SpawnY_Min, SpawnY_Max);

	FVector SpawnPosition = FVector(RandX, RandY, SpawnZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}
