// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Cria o Box de colisão
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;

	// Configuração padrão de Trigger
	CollisionBox->SetCollisionProfileName(TEXT("Trigger"));
	CollisionBox->SetGenerateOverlapEvents(true);

}

void MyTestFunction(float value1, float value2)
{
	UE_LOG(LogTemp, Display, TEXT("Value 1 is %f"), value1);
	UE_LOG(LogTemp, Display, TEXT("Value 2 is %f"), value2);
}


// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	MyTestFunction(4.2f, 5.3f);

	// Bind do evento de overlap
	CollisionBox -> OnComponentBeginOverlap.AddDynamic(this,&AMovingPlatform::OnOverlapBegin);
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
	
	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void  AMovingPlatform::MovePlatform(float DeltaTime)
{
	//int speed = 400;
	//if (MyVector.Y <= -750) dir = 1;
	//if (MyVector.Y >= 650)  dir = -1;
	//MyVector.Y = MyVector.Y + (dir * speed * DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += PlatformVelocity * DeltaTime;
	SetActorLocation(CurrentLocation);
}

void  AMovingPlatform::RotatePlatform(float DeltaTime)
{
	//This Fuction will rotate platform;

	//FRotator CurrentRotate = GetActorRotation();
	//CurrentRotate += FRotator(0,0,1);
	
	//SetActorRotation(CurrentRotate);

}

void AMovingPlatform::OnOverlapBegin(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult)
{

	if (!OtherActor) return;

	// Verifica se é o Player
	ACharacter* Player = Cast<ACharacter>(OtherActor);

	if (Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player colidiu com a Moving Platform!"));
	}
}

