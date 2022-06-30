// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurrents.generated.h"

class APawnTank;
UCLASS()
class TOONTANKS_API APawnTurrents : public APawnBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 0.75f;
	void CheckFireCondition();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRange = 500.0f;

	FTimerHandle FireRateTimerHandle;

	APawnTank *PlayerPawn;
	float ReturnDistanceToPlayer();

public:
	virtual void Tick(float DeltaTime) override;

	virtual void HandleDestruction() override;

protected:
	virtual void BeginPlay() override;
};
