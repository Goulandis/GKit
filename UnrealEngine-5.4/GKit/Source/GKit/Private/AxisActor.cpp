// Fill out your copyright notice in the Description page of Project Settings.


#include "AxisActor.h"

// Sets default values
AAxisActor::AAxisActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAxisActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAxisActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector Location = GetActorLocation();

	DrawDebugDirectionalArrow(GetWorld(),Location,Location+FVector::ForwardVector*AxisLength,ArrowSize,FColor::Red,false,Duration,0,Thickness);
	DrawDebugDirectionalArrow(GetWorld(),Location,Location+FVector::RightVector*AxisLength,ArrowSize,FColor::Green,false,Duration,0,Thickness);
	DrawDebugDirectionalArrow(GetWorld(),Location,Location+FVector::UpVector*AxisLength,ArrowSize,FColor::Blue,false,Duration,0,Thickness);
}

