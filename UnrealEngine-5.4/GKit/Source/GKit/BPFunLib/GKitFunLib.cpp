#include "GKitFunLib.h"
#include "GKit.h"
#include "GameFramework/Actor.h"
#include "Engine.h"


bool UGKitFunLib::ActorIsBegun(const AActor* Actor)
{
	if(Actor)
		return Actor->HasActorBegunPlay();
	return false;
}

bool UGKitFunLib::ActorsIsBegun(const TArray<AActor*>& Actors)
{
	for(AActor* Actor : Actors)
	{
		if(!Actor->HasActorBegunPlay())
		{
			return false;
		}
	}
	return true;
}

bool UGKitFunLib::ActorsIsBegunInLevel(const UObject* WordContext,FName LevelName)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WordContext, EGetWorldErrorMode::LogAndReturnNull);
	if(!World)
	{
		UE_LOG(LogGKit,Error,TEXT("WordContext is null"));
		return false;
	}
	// 获取当前世界中的所有关卡
	TArray<FString> CurrentLevelNames;
	for(const ULevel* Level : GWorld->GetLevels())
	{
		CurrentLevelNames.Add(Level->GetOuter()->GetName());
	}
	if(!CurrentLevelNames.Contains(LevelName))
	{
		UE_LOG(LogGKit,Error,TEXT("Level %s is not exist"),*LevelName.ToString());
		return false;
	}
	for(const ULevel* Level : GWorld->GetLevels())
	{
		for(const AActor* Actor : Level->Actors)
		{
			if(!Actor->HasActorBegunPlay())
			{
				UE_LOG(LogGKit,Error,TEXT("false"));
				return false;
			}
		}
	}
	UE_LOG(LogGKit,Error,TEXT("true"));
	return true;
}

bool UGKitFunLib::ActorsIsBegunInLevels(const UObject* WordContext, const TArray<FName>& LevelNames)
{
	for(FName LevelName : LevelNames)
	{
		if(!ActorsIsBegunInLevel(WordContext,LevelName))
		{
			return false;
		}
	}
	return true;
}

TArray<FName> UGKitFunLib::GetAllLevelsFromWorld(const UObject* WordContext)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WordContext, EGetWorldErrorMode::LogAndReturnNull);
	TArray<FName> LevelNames;
	if(!World)
	{
		UE_LOG(LogGKit,Error,TEXT("WordContext is null"));
		return LevelNames;
	}
	for(const ULevel* Level : GWorld->GetLevels())
	{
		LevelNames.Add(FName(Level->GetOuter()->GetName()));
	}
	return LevelNames;
}

void UGKitFunLib::GetAllActorWithLevelName(const UObject* WordContext,FName LevelName,TArray<AActor*>& Actors)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WordContext, EGetWorldErrorMode::LogAndReturnNull);
	if(!World)
	{
		UE_LOG(LogGKit,Error,TEXT("WordContext is null"));
		return;
	}
	for(const ULevel* Level : GWorld->GetLevels())
	{
		if(LevelName == Level->GetOuter()->GetName())
		{
			Actors = Level->Actors;
		}
	}
}

bool UGKitFunLib::AreAllLevelLoaded(const UObject* WordContext)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WordContext, EGetWorldErrorMode::LogAndReturnNull);
	if(!World)
	{
		UE_LOG(LogGKit,Error,TEXT("WordContext is null"));
		return false;
	}
	for(const ULevelStreaming* StreamingLevel : World->GetStreamingLevels())
	{
		if(StreamingLevel && !StreamingLevel->IsLevelLoaded())
		{
			return false;
		}
	}
	return true;
}
