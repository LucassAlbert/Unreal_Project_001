// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Show and edit value in editor
	UPROPERTY(EditAnywhere)
	float MemberFloat = 10.0f;

	//Only show value in editor but not editing
	UPROPERTY(VisibleAnywhere)
	int MemberInt = 15;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(610.0f, 650.0f, 250.0f);

	int dir = -1;

};
