#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitStrFunLib.generated.h"

// 字符编码类型
enum Encode { ANSI = 1, UTF16_LE, UTF16_BE, UTF8_BOM, UTF8 };

UCLASS()
class GKIT_API UGKitStrFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	// 使用AES加密字符串
	UFUNCTION(BlueprintCallable,Category="GKit|String")
	static FString AESEncrypt(FString Input,FString Key);
	// 使用AES解密字符串
	UFUNCTION(BlueprintCallable,Category="GKit|String")
	static FString AESDecrypt(FString Input,FString Key);

	// 将字符串拆分成一个个的字
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "GKit|String")
	static TArray<FString> StringSplitToWords(FString InStr);

	// 将其他编码的字符串转换为Utf8编码
	static void EncodeToUtf8(FString& Result, const uint8* Buffer, int32 Size);
	// 判断字符编码是否是UTF8
	static Encode EncodeIsUtf8(const uint8* data, int32 size);
	// 判断字符是哪种编码
	static Encode DetectEncode(const uint8* data, int32 size);
};
