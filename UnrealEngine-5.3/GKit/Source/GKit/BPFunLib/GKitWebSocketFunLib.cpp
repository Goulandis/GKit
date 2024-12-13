#include "GKitWebSocketFunLib.h"
#include "WebSocketsModule.h"
#include "Blueprint/UserWidget.h"

TSharedPtr<IWebSocket> UGKitWebSocketFunLib::WebSocket = nullptr;
FString UGKitWebSocketFunLib::ServerURL = "";

void UGKitWebSocketFunLib::Connect(const FString& URL, const FString& Protocol)
{
	ServerURL = URL;
	WebSocket = FWebSocketsModule::Get().CreateWebSocket(URL,Protocol);
	WebSocket->OnConnected().AddStatic(OnConnected);
	WebSocket->OnConnectionError().AddStatic(OnConnectionError);
	WebSocket->OnClosed().AddStatic(OnClosed);
	WebSocket->OnMessage().AddStatic(OnMessage);
	WebSocket->OnMessageSent().AddStatic(OnMessageSent);
	WebSocket->Connect();
}

void UGKitWebSocketFunLib::Close()
{
	if(WebSocket == nullptr)
	{
		return;
	}
	WebSocket->Close();
}

void UGKitWebSocketFunLib::OnConnected()
{

}

void UGKitWebSocketFunLib::OnConnectionError(const FString& Error)
{

}

void UGKitWebSocketFunLib::OnClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{

}

void UGKitWebSocketFunLib::OnMessage(const FString& Message)
{

}

void UGKitWebSocketFunLib::OnMessageSent(const FString& Message)
{
}
