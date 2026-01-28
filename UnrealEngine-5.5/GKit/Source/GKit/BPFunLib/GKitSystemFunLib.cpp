// Fill out your copyright notice in the Description page of Project Settings.


#include "GKitSystemFunLib.h"
#include "GKit.h"
//#include "DynamicRHI.h"
#include "GenericPlatform/GenericPlatformDriver.h"

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows.h"
#include "Windows/HideWindowsPlatformTypes.h"

void UGKitSystemFunLib::GetCPUInfo(FString& UID, FString& Brand, FString& Vebdor)
{
    UID = FString::FromInt(FPlatformMisc::GetCPUInfo());
    Brand = FPlatformMisc::GetCPUBrand();
    Vebdor = FPlatformMisc::GetCPUVendor();
}

void UGKitSystemFunLib::GetGPUInfo(FString& VendorId, FString& DeviceDescription, FString& ProviderName, FString& InternalDriverVersion, FString& UserDriverVersion, FString& DriverDate, FString& RHIName)
{
    FString GPUBrand = FPlatformMisc::GetPrimaryGPUBrand();
    FGPUDriverInfo GPUINFO = FPlatformMisc::GetGPUDriverInfo(GPUBrand);
    VendorId = FString::FromInt(GPUINFO.VendorId);
    DeviceDescription = GPUINFO.DeviceDescription;
    ProviderName = GPUINFO.ProviderName;
    InternalDriverVersion = GPUINFO.InternalDriverVersion;
    UserDriverVersion = GPUINFO.UserDriverVersion;
    DriverDate = GPUINFO.DriverDate;
    RHIName = GPUINFO.RHIName;
}

void UGKitSystemFunLib::GetGPUMemoeyInfoByRHI(float& DedicatedVideoMemory, float& DedicatedSystemMemory, float& SharedSystemMemory)
{
    FString RHIName = GDynamicRHI->GetName();
    FTextureMemoryStats Stats;
    RHIGetTextureMemoryStats(Stats);
    DedicatedVideoMemory = Stats.DedicatedVideoMemory / (1024.0f * 1024.0f * 1024.0f);
    DedicatedSystemMemory = Stats.DedicatedSystemMemory / (1024.0f * 1024.0f * 1024.0f);
    SharedSystemMemory = Stats.SharedSystemMemory / (1024.0f * 1024.0f * 1024.0f);

    UE_LOG(LogGKit, Log, TEXT("RHIName:%s,DedicatedVideoMemory:%f,DedicatedSystemMemory:%f,SharedSystemMemory:%f"),
        *RHIName, DedicatedVideoMemory, DedicatedSystemMemory, SharedSystemMemory);
}

void UGKitSystemFunLib::GetCurrenSystemScreenResolution(int& Length, int& Width)
{
    Length = GetSystemMetrics(SM_CXSCREEN);
    Width = GetSystemMetrics(SM_CYSCREEN);
}

void UGKitSystemFunLib::GetAllSupportedResolutions(TArray<FIntPoint>& Resolutions)
{
    FScreenResolutionArray ScreenResolutionArray;
    if (RHIGetAvailableResolutions(ScreenResolutionArray, false))
    {
        for (const FScreenResolutionRHI& Resolution : ScreenResolutionArray)
        {
            FIntPoint ResPoint(Resolution.Width, Resolution.Height);
            if (!Resolutions.Contains(ResPoint))
            {
                Resolutions.Add(ResPoint);
            }
        }
    }
}

void UGKitSystemFunLib::GetResolutionSpecified(const TArray<FIntPoint>& InResolutions, TArray<FIntPoint>& OutResolutions, const float Length, const float Width, const float Accuracy)
{
    if (InResolutions.Num() > 0)
    {
        float Proportion = Length / Width;
        for (FIntPoint Resolution : InResolutions)
        {
            if (FMath::Abs((float)Resolution.X / (float)Resolution.Y - Proportion) <= Accuracy)
            {
                OutResolutions.AddUnique(Resolution);
            }
        }
    }
}

FString UGKitSystemFunLib::GetMacAddressString()
{
    return FPlatformMisc::GetMacAddressString();
}

EAAMethod UGKitSystemFunLib::GetAAMethod()
{
    const IConsoleVariable* CVarAAMethod = IConsoleManager::Get().FindConsoleVariable(TEXT("r.AntiAliasingMethod"));
    EAAMethod Rel = EAAMethod::AAMethod_None;
    if (CVarAAMethod)
    {
        int32 AAMethodCode = CVarAAMethod->GetInt();
        switch (AAMethodCode)
        {
        case 0: Rel = EAAMethod::AAMethod_None; break;
        case 1: Rel = EAAMethod::FXAA; break;
        case 2: Rel = EAAMethod::TAA; break;
        case 3: Rel = EAAMethod::MSAA; break;
        case 4: Rel = EAAMethod::TSR; break;
        case 5: Rel = EAAMethod::DLSS; break;
        }
    }
    return Rel;
}

ERHI UGKitSystemFunLib::GetRHI()
{
    ERHI RHIName = ERHI::RHI_None;

    FString CurrentRHI = GDynamicRHI->GetName();
    if (CurrentRHI == TEXT("D3D12"))
    {
        RHIName = ERHI::Directx12;
    }
    else if (CurrentRHI == TEXT("D3D11"))
    {
        RHIName = ERHI::Directx11;
    }
    else if (CurrentRHI == TEXT("Vulkan"))
    {
        RHIName = ERHI::Vulkan;
    }
    return RHIName;
}

void UGKitSystemFunLib::SetRHI(ERHI RHI)
{
    FString ConfigPath;
#if WITH_EDITOR
    ConfigPath = FPaths::ProjectConfigDir() / TEXT("DefaultEngine.ini");
#else
    ConfigPath = FPaths::ProjectSavedDir() / TEXT("Config/Windows/DefaultEngine.ini");
#endif
    FConfigFile ConfigFile;
    ConfigFile.Read(ConfigPath);

    FString SectionName = TEXT("/Script/WindowsTargetPlatform.WindowsTargetSettings");
    FString KeyName = TEXT("DefaultGraphicsRHI");

    FString DefaultGraphicsRHI;
    ConfigFile.GetString(*SectionName, *KeyName, DefaultGraphicsRHI);

    switch (RHI)
    {
    case ERHI::Directx12:
        if (DefaultGraphicsRHI != TEXT("DefaultGraphicsRHI_DX12"))
        {
            ConfigFile.SetString(*SectionName, *KeyName, TEXT("DefaultGraphicsRHI_DX12"));
            UE_LOG(LogGKit, Log, TEXT("Setted RHI to DefaultGraphicsRHI_DX12"));
        }
        break;
    case ERHI::Directx11:
        if (DefaultGraphicsRHI != TEXT("DefaultGraphicsRHI_DX11"))
        {
            ConfigFile.SetString(*SectionName, *KeyName, TEXT("DefaultGraphicsRHI_DX11"));
            UE_LOG(LogGKit, Log, TEXT("Setted RHI to DefaultGraphicsRHI_DX11"));
        }
        break;
    case ERHI::Vulkan:
        if (DefaultGraphicsRHI != TEXT("DefaultGraphicsRHI_Vulkan"))
        {
            ConfigFile.SetString(*SectionName, *KeyName, TEXT("DefaultGraphicsRHI_Vulkan"));
            UE_LOG(LogGKit, Log, TEXT("Setted RHI to DefaultGraphicsRHI_Vulkan"));
        }
        break;
    }
    // 立即刷新配置文件
    //GConfig->Flush(true, ConfigPath);
    // 保存文件
    ConfigFile.Write(ConfigPath);
}

EUEWorldType UGKitSystemFunLib::GetWorldType()
{
    EUEWorldType WorldType = EUEWorldType::UEWorldType_None;
    EWorldType::Type Type = GWorld->WorldType;
    switch (Type) {
    case EWorldType::Type::None:
        WorldType = EUEWorldType::UEWorldType_None; break;
    case EWorldType::Type::Game:
        WorldType = EUEWorldType::Game; break;
    case EWorldType::Type::Editor:
        WorldType = EUEWorldType::Editor; break;
    case EWorldType::Type::PIE:
        WorldType = EUEWorldType::PIE; break;
    case EWorldType::Type::EditorPreview:
        WorldType = EUEWorldType::EditorPreview; break;
    case EWorldType::Type::GamePreview:
        WorldType = EUEWorldType::GamePreview; break;
    case EWorldType::Type::GameRPC:
        WorldType = EUEWorldType::GameRPC; break;
    case EWorldType::Type::Inactive:
        WorldType = EUEWorldType::Inactive;
    }
    return WorldType;
}
