// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IWebSocket.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitWebSocketFunLib.generated.h"

UCLASS()
class GKIT_API UGKitWebSocketFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// WebSockt连接
	UFUNCTION(BlueprintCallable,Category="GKit|WebSocket")
	static void Connect(const FString& URL,const FString& Protocol = "ws");
	// WebSocket关闭
	UFUNCTION(BlueprintCallable,Category="GNet|WebSocket")
	static void Close();
	
	static void OnConnected();
	static void OnConnectionError(const FString& Error);
	static void OnClosed(int32 StatusCode,const FString& Reason,bool bWasClean);
	static void OnMessage(const FString& Message);
	static void OnMessageSent(const FString& Message);
private:
	static TSharedPtr<IWebSocket> WebSocket;
	static FString ServerURL;
};
