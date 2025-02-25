// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shell.generated.h"

// Forward Declaration
class UProjectileMovementComponent;

UCLASS()
class TANKGAME_API AShell : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShell();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UProjectileMovementComponent* ShellMovement;

	void Launch(float Speed);
};
