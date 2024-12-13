// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitStrFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitStrFunLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GKIT_API UClass* Z_Construct_UClass_UGKitStrFunLib();
GKIT_API UClass* Z_Construct_UClass_UGKitStrFunLib_NoRegister();
UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References

// Begin Class UGKitStrFunLib Function AESDecrypt
struct Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics
{
	struct GKitStrFunLib_eventAESDecrypt_Parms
	{
		FString Input;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|StrOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8""AES\xe8\xa7\xa3\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitStrFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8""AES\xe8\xa7\xa3\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitStrFunLib_eventAESDecrypt_Parms, Input), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitStrFunLib_eventAESDecrypt_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitStrFunLib_eventAESDecrypt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitStrFunLib, nullptr, "AESDecrypt", nullptr, nullptr, Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::GKitStrFunLib_eventAESDecrypt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::GKitStrFunLib_eventAESDecrypt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitStrFunLib::execAESDecrypt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGKitStrFunLib::AESDecrypt(Z_Param_Input,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UGKitStrFunLib Function AESDecrypt

// Begin Class UGKitStrFunLib Function AESEncrypt
struct Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics
{
	struct GKitStrFunLib_eventAESEncrypt_Parms
	{
		FString Input;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|StrOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8""AES\xe5\x8a\xa0\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitStrFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8""AES\xe5\x8a\xa0\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitStrFunLib_eventAESEncrypt_Parms, Input), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitStrFunLib_eventAESEncrypt_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitStrFunLib_eventAESEncrypt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitStrFunLib, nullptr, "AESEncrypt", nullptr, nullptr, Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::GKitStrFunLib_eventAESEncrypt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::GKitStrFunLib_eventAESEncrypt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitStrFunLib::execAESEncrypt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGKitStrFunLib::AESEncrypt(Z_Param_Input,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UGKitStrFunLib Function AESEncrypt

// Begin Class UGKitStrFunLib
void UGKitStrFunLib::StaticRegisterNativesUGKitStrFunLib()
{
	UClass* Class = UGKitStrFunLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AESDecrypt", &UGKitStrFunLib::execAESDecrypt },
		{ "AESEncrypt", &UGKitStrFunLib::execAESEncrypt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitStrFunLib);
UClass* Z_Construct_UClass_UGKitStrFunLib_NoRegister()
{
	return UGKitStrFunLib::StaticClass();
}
struct Z_Construct_UClass_UGKitStrFunLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitStrFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitStrFunLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt, "AESDecrypt" }, // 840088563
		{ &Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt, "AESEncrypt" }, // 2429095517
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitStrFunLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGKitStrFunLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitStrFunLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGKitStrFunLib_Statics::ClassParams = {
	&UGKitStrFunLib::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitStrFunLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UGKitStrFunLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGKitStrFunLib()
{
	if (!Z_Registration_Info_UClass_UGKitStrFunLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGKitStrFunLib.OuterSingleton, Z_Construct_UClass_UGKitStrFunLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGKitStrFunLib.OuterSingleton;
}
template<> GKIT_API UClass* StaticClass<UGKitStrFunLib>()
{
	return UGKitStrFunLib::StaticClass();
}
UGKitStrFunLib::UGKitStrFunLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGKitStrFunLib);
UGKitStrFunLib::~UGKitStrFunLib() {}
// End Class UGKitStrFunLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGKitStrFunLib, UGKitStrFunLib::StaticClass, TEXT("UGKitStrFunLib"), &Z_Registration_Info_UClass_UGKitStrFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitStrFunLib), 1765121007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_2083911976(TEXT("/Script/GKit"),
	Z_CompiledInDeferFile_FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
