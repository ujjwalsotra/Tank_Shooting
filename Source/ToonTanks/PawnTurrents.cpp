// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnTurrents.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"

void APawnTurrents::BeginPlay()
{
    Super::BeginPlay();

    GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurrents::CheckFireCondition, FireRate, true);

    PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void APawnTurrents::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerPawn || ReturnDistanceToPlayer() > FireRange)
    {
        return;
    }
    RotateTurrent(PlayerPawn->GetActorLocation());
}

void APawnTurrents::CheckFireCondition()
{
    //If player ==null||is dead tehn bail
    if (!PlayerPawn || !PlayerPawn->GetIsPlayerAlive())
    {
        return;
    }
    //if player is in the range then fire
    if (ReturnDistanceToPlayer() <= FireRange)
    {
        Fire();
    }
}

float APawnTurrents::ReturnDistanceToPlayer()
{
    if (!PlayerPawn)
    {
        return 0.f;
    }

    float Distance = FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
    return Distance;
}

void APawnTurrents::HandleDestruction()
{
    Super::HandleDestruction();
    Destroy();
}
