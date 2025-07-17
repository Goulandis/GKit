// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitWebSocketFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitWebSocketFunLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GKIT_API UClass* Z_Construct_UClass_UGKitWebSocketFunLib();
GKIT_API UClass* Z_Construct_UClass_UGKitWebSocketFunLib_NoRegister();
UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References

// Begin Class UGKitWebSocketFunLib Function Close
struct Z_Construct_UFunction_UGKitWebSocketFunLib_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GNet|WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WebSocket\xe5\x85\xb3\xe9\x97\xad\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitWebSocketFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WebSocket\xe5\x85\xb3\xe9\x97\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitWebSocketFunLib_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitWebSocketFunLib, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitWebSocketFunLib_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitWebSocketFunLib_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGKitWebSocketFunLib_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitWebSocketFunLib_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitWebSocketFunLib::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UGKitWebSocketFunLib::Close();
	P_NATIVE_END;
}
// End Class UGKitWebSocketFunLib Function Close

// Begin Class UGKitWebSocketFunLib Function Connect
struct Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics
{
	struct GKitWebSocketFunLib_eventConnect_Parms
	{
		FString URL;
		FString Protocol;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WebSockt\xe8\xbf\x9e\xe6\x8e\xa5\n" },
#endif
		{ "CPP_Default_Protocol", "ws" },
		{ "ModuleRelativePath", "BPFunLib/GKitWebSocketFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WebSockt\xe8\xbf\x9e\xe6\x8e\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitWebSocketFunLib_eventConnect_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitWebSocketFunLib_eventConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::NewProp_Protocol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitWebSocketFunLib, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::GKitWebSocketFunLib_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::GKitWebSocketFunLib_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitWebSocketFunLib_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitWebSocketFunLib_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitWebSocketFunLib::execConnect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGKitWebSocketFunLib::Connect(Z_Param_URL,Z_Param_Protocol);
	P_NATIVE_END;
}
// End Class UGKitWebSocketFunLib Function Connect

// Begin Class UGKitWebSocketFunLib
void UGKitWebSocketFunLib::StaticRegisterNativesUGKitWebSocketFunLib()
{
	UClass* Class = UGKitWebSocketFunLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UGKitWebSocketFunLib::execClose },
		{ "Connect", &UGKitWebSocketFunLib::execConnect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitWebSocketFunLib);
UClass* Z_Construct_UClass_UGKitWebSocketFunLib_NoRegister()
{
	return UGKitWebSocketFunLib::StaticClass();
}
struct Z_Construct_UClass_UGKitWebSocketFunLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitWebSocketFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitWebSocketFunLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitWebSocketFunLib_Close, "Close" }, // 154967173
		{ &Z_Construct_UFunction_UGKitWebSocketFunLib_Connect, "Connect" }, // 3861542837
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitWebSocketFunLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGKitWebSocketFunLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitWebSocketFunLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGKitWebSocketFunLib_Statics::ClassParams = {
	&UGKitWebSocketFunLib::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitWebSocketFunLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UGKitWebSocketFunLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGKitWebSocketFunLib()
{
	if (!Z_Registration_Info_UClass_UGKitWebSocketFunLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGKitWebSocketFunLib.OuterSingleton, Z_Construct_UClass_UGKitWebSocketFunLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGKitWebSocketFunLib.OuterSingleton;
}
template<> GKIT_API UClass* StaticClass<UGKitWebSocketFunLib>()
{
	return UGKitWebSocketFunLib::StaticClass();
}
UGKitWebSocketFunLib::UGKitWebSocketFunLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGKitWebSocketFunLib);
UGKitWebSocketFunLib::~UGKitWebSocketFunLib() {}
// End Class UGKitWebSocketFunLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGKitWebSocketFunLib, UGKitWebSocketFunLib::StaticClass, TEXT("UGKitWebSocketFunLib"), &Z_Registration_Info_UClass_UGKitWebSocketFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitWebSocketFunLib), 3700452384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_2153374515(TEXT("/Script/GKit"),
	Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
