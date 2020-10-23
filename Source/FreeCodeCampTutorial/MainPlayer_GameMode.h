// Copyright Zachary Foutz 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MainPlayer_GameMode.generated.h"

UCLASS()
class FREECODECAMPTUTORIAL_API AMainPlayer_GameMode : public AGameMode
{
	GENERATED_BODY()

	AMainPlayer_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;

	float SpawnZ = 500.0f;

	UPROPERTY(EditAnywhere)
		float SpawnX_Min;

	UPROPERTY(EditAnywhere)
		float SpawnX_Max;

	UPROPERTY(EditAnywhere)
		float SpawnY_Min;

	UPROPERTY(EditAnywhere)
		float SpawnY_Max;


	void SpawnPlayerRecharge();
	
};
