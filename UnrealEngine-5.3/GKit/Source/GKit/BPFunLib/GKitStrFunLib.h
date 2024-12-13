#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitStrFunLib.generated.h"

UCLASS()
class GKIT_API UGKitStrFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	// 使用AES加密字符串
	UFUNCTION(BlueprintCallable,Category="GKit|StrOpe")
	static FString AESEncrypt(FString Input,FString Key);
	// 使用AES解密字符串
	UFUNCTION(BlueprintCallable,Category="GKit|StrOpe")
	static FString AESDecrypt(FString Input,FString Key);
};
