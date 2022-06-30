// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGameModeBase.h"
#include "ToonTanks/PawnTank.h"
#include "ToonTanks/PawnTurrents.h"
#include "Kismet/GameplayStatics.h"
#include "ToonTanks/PlayerControllerBase.h"

void ATankGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    HandleGameStart();
}

void ATankGameModeBase::ActorDied(AActor *DeadActor)
{
    if (DeadActor == PlayerTank)
    {
        PlayerTank->HandleDestruction();
        HandleGameOver(false);

        if (PlayerControllerRef)
        {
            PlayerControllerRef->SetPlayerEnabledState(false);
        }
    }
    else if (APawnTurrents *DestroyedTurret = Cast<APawnTurrents>(DeadActor))
    {
        DestroyedTurret->HandleDestruction();

        if (--TargetTurrets == 0)
        {
            HandleGameOver(true);
        }
    }
}

void ATankGameModeBase::HandleGameStart()
{
    TargetTurrets = GetTargetTurretCount();

    PlayerTank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
    PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this, 0));
    GameStart();
    if (PlayerControllerRef)
    {
        PlayerControllerRef->SetPlayerEnabledState(false);

        FTimerHandle PlayerEnableHandle;
        FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef, &APlayerControllerBase::SetPlayerEnabledState, true);
        GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, StartDelay, false);
    }
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
    GameOver(PlayerWon);
}

int32 ATankGameModeBase::GetTargetTurretCount()
{
    TArray<AActor *> TurretActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurrents::StaticClass(), TurretActors);
    return TurretActors.Num();
}