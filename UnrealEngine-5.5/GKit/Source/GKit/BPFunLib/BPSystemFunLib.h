// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPSystemFunLib.generated.h"


UENUM(BlueprintType)
enum EUEWorldType {
	UEWorldType_None,//无类型世界，通常是流式加载的子关卡世界
	Game, // 游戏世界，独立运行的打包游戏
	Editor, // 编辑器世界，编辑模式，不能游玩
	PIE, // 在编辑器中运行的游戏世界
	EditorPreview, // 编辑器预览世界，编辑器工具的额实时预览，如：实时预览材质、动画、粒子特效等
	GamePreview,// 游戏预览世界，在编辑器中预览游戏的特定功能
	GameRPC, // RPC世界，专用于RPC远程调用的最小化世界
	Inactive // 非活动编辑器世界，已加载但未在编辑器中打开的世界
};

UENUM(BlueprintType)
enum EAAMethod {
	AAMethod_None,
	FXAA, // 快速模拟抗锯齿(FXAA)
	TAA, // 临时抗锯齿(TAA)
	MSAA, // 多重取样抗锯齿(MSAA)
	TSR, // 临时超分辨率(TSR)
	DLSS // 深度学习超级采样(DLSS)
};

UENUM(BlueprintType)
enum ERHI {
	RHI_None,
	Directx12,
	Directx11,
	Vulkan
};


UCLASS()
class GKIT_API UBPSystemFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	// 获取CPU信息
	// UID ： CPU的唯一UID，
	// Brand ： CPU的型号，
	// Vebdor ： CPU的供应商名称
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static void GetCPUInfo(FString& UID, FString& Brand, FString& Vebdor);
	// 获取GPU信息
	// VendorId : GPU供应商的ID，
	// DeviceDescription ： GPU的型号描述，
	// ProviderName ： GPU的设备供应商名称，
	// InternalDriverVersion ： GPU的内部驱动版本号，
	// UserDriverVersion ： 面向用户的驱动版本号，
	// DriverDate ： 驱动的更新日期，
	// RHIName ： 当前RHI名称。
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static void GetGPUInfo(FString& VendorId, FString& DeviceDescription, FString& ProviderName, FString& InternalDriverVersion, FString& UserDriverVersion, FString& DriverDate, FString& RHIName);

	// 使用Windows的DXGI库获取GPU信息，暂时不适用先注释
	//UFUNCTION(BlueprintCallable,  Category = "SettingsBPFunLib|System")
	//static void GetGPUInfoByWindowsDXGI();

	// DedicatedVideoMemory : VRAM 专用显存，
	// DedicatedSystemMemory ： 专用系统显存，在系统启动时专门预留给集成显卡使用的系统内存(RAM)，操作系统无法使用，对于独立显卡这个值一般为0或很小，
	// SharedSystemMemory ： 共享系统内存，显卡可以从系统内存中动态借用的内存。
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static void GetGPUMemoeyInfoByRHI(float& DedicatedVideoMemory, float& DedicatedSystemMemory, float& SharedSystemMemory);

	// 获取Windows操作系统设置的主屏幕屏幕分辨率
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static void GetCurrenSystemScreenResolution(int& Length, int& Width);
	// 获取当前设备所支持的所有的分辨率，是显卡输出的分辨率与显示器硬件支持的分辨率的交集
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static void GetAllSupportedResolutions(TArray<FIntPoint>& Resolutions);
	// 从给定的分辨率列表中筛选出符合要求比例的分辨率
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static void GetResolutionSpecified(const TArray<FIntPoint>& InResolutions, TArray<FIntPoint>& OutResolutions, const float Length = 16.0f, const float Width = 9.0f, const float Accuracy = 0.00001);
	// 获取主机的Mac地址
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|System")
	static FString GetMacAddressString();


	// 获取UE5引擎当前设置的抗锯齿方法
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|Settings")
	static EAAMethod GetAAMethod();

	// 获取引擎当前使用RHI
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|Settings")
	static ERHI GetRHI();
	// 设置RHI方法，需要重启应用生效
	UFUNCTION(BlueprintCallable, Category = "GKit|Settings")
	static void SetRHI(ERHI RHI);

	// 获取当前世界的状态类型
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GKit|Settings")
	static EUEWorldType GetWorldType();
};
