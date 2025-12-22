// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitFunLib.generated.h"

/**
 * 
 */
UCLASS()
class GKIT_API UGKitFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// 暴露Actor的ActorHasBegunPlay值，以判断Actor是否加载完毕
	UFUNCTION(BlueprintCallable,Category="GKit")
	static bool ActorIsBegun(const AActor* Actor);
	//(目前存在bug)// 判断数组中所有的Actor的BeginPlay是否都执行完毕
	UFUNCTION(BlueprintCallable,Category="GKit")
	static bool ActorsIsBegun(const TArray<AActor*>& Actors);
	//(目前存在bug) 判断指定关卡中所有的Actor的BeginPlay是否执行完毕
	UFUNCTION(BlueprintCallable,Category="GKit",meta=(WorldContext="WorldContextObject"))
	static bool ActorsIsBegunInLevel(const UObject* WordContext,FName LevelName);
	//(目前存在bug)判断数组中所有关卡的全部Actor的BeginPlay是否执行完毕
	UFUNCTION(BlueprintCallable,Category="GKit",meta=(WorldContext="WorldContextObject"))
	static bool ActorsIsBegunInLevels(const UObject* WordContext,const TArray<FName>& LevelNames);
	// 获取当前世界中所有关卡名称
	UFUNCTION(BlueprintCallable,Category="GKit",meta=(WorldContext="WorldContextObject"))
	static TArray<FName> GetAllLevelsFromWorld(const UObject* WordContext);
	// 获取指定关卡中的所有Actor的引用
	UFUNCTION(BlueprintCallable,Category="GKit",meta=(WorldContext="WorldContextObject"))
	static void GetAllActorWithLevelName(const UObject* WordContext,FName LevelName,TArray<AActor*>& Actors);
	UFUNCTION(BlueprintCallable,Category="GKit",meta=(WorldContext="WorldContextObject"))
	// 判断当前世界中所有的关卡是否加载完毕
	static bool AreAllLevelLoaded(const UObject* WordContext);
};
