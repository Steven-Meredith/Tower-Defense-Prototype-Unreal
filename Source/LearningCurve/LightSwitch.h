// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitch.generated.h"


UCLASS()
class LEARNINGCURVE_API ALightSwitch : public AActor
{
	GENERATED_BODY()
	
	

	
public:	
	// Sets default values for this actor's properties
	ALightSwitch();
	/** point light component */
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
	/** Toggles the light component�s visibility*/
	
};
