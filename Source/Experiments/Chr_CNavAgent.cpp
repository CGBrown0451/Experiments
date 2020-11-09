// Fill out your copyright notice in the Description page of Project Settings.


#include "Chr_CNavAgent.h"
#include "Engine/World.h"

// Sets default values
AChr_CNavAgent::AChr_CNavAgent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChr_CNavAgent::BeginPlay()
{
	Super::BeginPlay();
	//navSys = UNavigationSystemV1::GetCurrent(GetWorld());
	
}

// Called every frame
void AChr_CNavAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChr_CNavAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
/*
bool AChr_CNavAgent::DoFlank(FVector Start, FVector End, FNavAgentProperties NavAgentProperties, bool doVisCheck, float angle, float bisection)
{
	FVector MoveVector = Start - End;
	FVector dir = MoveVector;
	dir.Normalize();
	FVector perpDir = dir.RotateAngleAxis(angle, FVector::UpVector);

	FVector midpoint = End - MoveVector * bisection;

	float length = MoveVector.Size();

	FVector flankPoint = perpDir * length + midpoint;

	FNavLocation l;

	bool invert = false;

	while (true) {

		if (navSys->GetRandomPointInNavigableRadius(flankPoint, length*0.4, l))
		{
			if (doVisCheck)
			{
				FHitResult r;
				if (!GetWorld()->LineTraceSingleByChannel(r, Start, l.Location, ECC_WorldStatic, FCollisionQueryParams::DefaultQueryParam, FCollisionResponseParams::DefaultResponseParam))
				{
					break;
				}
			}
			else
			{
				break;
			}

		}

		if (!invert)
		{
			flankPoint = perpDir * -1 * length + midpoint;
			invert = true;
		}
		else
		{
			return false;
		}

	}

	FNavPathQueryDelegate del;
	del.BindUObject(this, &AChr_CNavAgent::MoveCallback);

	FPathFindingQuery q;
	q.StartLocation = Start;
	q.EndLocation = l.Location;

	
	navSys->FindPathAsync(NavAgentProperties, q, del, EPathFindingMode::Regular);
	return true;

}
*/
/*
void AChr_CNavAgent::MoveCallback(uint32 id, ENavigationQueryResult::Type type, FNavPathSharedPtr ptr)
{
}
*/