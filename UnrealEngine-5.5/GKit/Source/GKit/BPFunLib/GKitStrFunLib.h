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
	UFUNCTION(BlueprintCallable,Category="GKit|StrOpe")
	static FString AESEncrypt(FString Input,FString Key);
	// 使用AES解密字符串
	UFUNCTION(BlueprintCallable,Category="GKit|StrOpe")
	static FString AESDecrypt(FString Input,FString Key);

	// 将字符串拆分成一个个的字
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "GKit|StrOpe")
	static TArray<FString> StringSplitToWords(FString InStr);

	// 将其他编码的字符串转换为Utf8编码
	static void EncodeToUtf8(FString& Result, const uint8* Buffer, int32 Size);
	// 判断字符编码是否是UTF8
	static Encode EncodeIsUtf8(const uint8* data, int32 size);
	// 判断字符是哪种编码
	static Encode DetectEncode(const uint8* data, int32 size);

	// 获取CPU信息
	// UID ： CPU的唯一UID，
	// Brand ： CPU的型号，
	// Vebdor ： CPU的供应商名称
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SettingsBPFunLib")
	static void GetCPUInfo(FString& UID, FString& Brand, FString& Vebdor);
	// 获取GPU信息
	// VendorId : GPU供应商的ID，
	// DeviceDescription ： GPU的型号描述，
	// ProviderName ： GPU的设备供应商名称，
	// InternalDriverVersion ： GPU的内部驱动版本号，
	// UserDriverVersion ： 面向用户的驱动版本号，
	// DriverDate ： 驱动的更新日期，
	// RHIName ： 当前RHI名称。
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SettingsBPFunLib")
	static void GetGPUInfo(FString& VendorId, FString& DeviceDescription, FString& ProviderName, FString& InternalDriverVersion, FString& UserDriverVersion, FString& DriverDate);

	// 获取Windows操作系统设置的屏幕分辨率
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SettingsBPFunLib")
	static void GetSystemScreenResolution(int& Length, int& Width);
	// 获取UE5引擎当前设置的抗锯齿方法
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SettingsBPFunLib")
	static void GetAASetttings(FString& AAMethod);
};
