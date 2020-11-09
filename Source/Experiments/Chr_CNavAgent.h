// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Chr_CNavAgent.generated.h"

UCLASS()
class EXPERIMENTS_API AChr_CNavAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AChr_CNavAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//UNavigationSystemV1* navSys;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//bool DoFlank(FVector Start, FVector End, FNavAgentProperties NavAgentProperties, bool doVisCheck, float angle, float bisection);

	//void MoveCallback(uint32 id, ENavigationQueryResult::Type type, FNavPathSharedPtr ptr);
};


