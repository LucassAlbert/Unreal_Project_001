// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	//UE_LOG(LogTemp, Warning, TEXT("Funcionou!!"));
	//UE_LOG(LogTemp, Warning, TEXT("Value Interger is %d!!"),MemberInt);

	//UE_LOG(LogTemp, Warning, TEXT("My Vector X = %f"), MyVector.X);
	/*UE_LOG(LogTemp, Warning, TEXT("My Vector Y = %f"), MyVector.Y);
	UE_LOG(LogTemp, Warning, TEXT("My Vector Z = %f"), MyVector.Z);*/

	

	


}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	if (MyVector.Y == -750) dir = 1;
	if (MyVector.Y == 650)  dir = -1;
	MyVector.Y = MyVector.Y + dir;

	//FVector CurrentLocation = GetActorLocation();
	//CurrentLocation += FVector(0.1, .1f, .1f);
	SetActorLocation(MyVector);
}

