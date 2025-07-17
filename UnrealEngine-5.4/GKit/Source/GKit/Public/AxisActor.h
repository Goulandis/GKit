// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AxisActor.generated.h"

UCLASS()
class GKIT_API AAxisActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAxisActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float AxisLength = 100.0f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Thickness = 2.0f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Duration = 0.0f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float ArrowSize = 10.0f;

};
