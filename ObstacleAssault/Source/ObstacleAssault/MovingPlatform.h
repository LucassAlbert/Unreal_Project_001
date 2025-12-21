#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	AMovingPlatform();

protected:
	virtual void BeginPlay() override;

	// Componente de colisão
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	UBoxComponent* CollisionBox;

	// Função chamada quando o player entra na colisão
	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

public:
	virtual void Tick(float DeltaTime) override;

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);

	UPROPERTY(EditAnywhere)
	float MemberFloat = 10.0f;

	UPROPERTY(VisibleAnywhere)
	int MemberInt = 15;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(610.0f, 650.0f, 250.0f);

	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity = FVector::ZeroVector;

	int dir = -1;
};
