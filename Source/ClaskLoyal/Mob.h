// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mob.generated.h"

UCLASS()
class CLASKLOYAL_API AMob : public AEntity
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMob();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
