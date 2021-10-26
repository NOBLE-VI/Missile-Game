// Copyright Epic Games, Inc. All Rights Reserved.


#include "MissileProjectGameModeBase.h"
#include "Enemy.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"


AMissileProjectGameModeBase::AMissileProjectGameModeBase()
{

    PrimaryActorTick.bCanEverTick = true;

}
void AMissileProjectGameModeBase::BeginPlay()
	{
		Super::BeginPlay();
		FTimerHandle UnusedHandle;
        GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMissileProjectGameModeBase::SpawnEnemy,2, true);
	}


void AMissileProjectGameModeBase::Tick(float Deltatime)
	{
		Super::Tick(Deltatime);
		
	}

void AMissileProjectGameModeBase::SpawnEnemy()
	{
		FVector Location(FMath::RandRange(1, 100), FMath::RandRange(1, 100), FMath::RandRange(1, 100));
		FRotator Rotation(0.0f, 0.0f, 0.0f);
		//FActorSpawnParameters SpawnInfo;
		GetWorld()->SpawnActor(EnemyRef, &Location, &Rotation);
		UE_LOG(LogTemp, Warning, TEXT("Spawned"));
	}