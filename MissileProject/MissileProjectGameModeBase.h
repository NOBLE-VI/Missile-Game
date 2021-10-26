// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MissileProjectGameModeBase.generated.h"


UCLASS()
class MISSILEPROJECT_API AMissileProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
AMissileProjectGameModeBase();

void SpawnEnemy();
	
public:
virtual void BeginPlay() override;
virtual void Tick(float DeltaSeconds) override;

UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemyRef;


};
