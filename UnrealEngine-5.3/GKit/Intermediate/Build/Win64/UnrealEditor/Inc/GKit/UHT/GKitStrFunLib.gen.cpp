// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitStrFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitStrFunLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GKIT_API UClass* Z_Construct_UClass_UGKitStrFunLib();
	GKIT_API UClass* Z_Construct_UClass_UGKitStrFunLib_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References
	DEFINE_FUNCTION(UGKitStrFunLib::execAESDecrypt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGKitStrFunLib::AESDecrypt(Z_Param_Input,Z_Param_Key);
		P_NATIVE_END;
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
	void UGKitStrFunLib::StaticRegisterNativesUGKitStrFunLib()
	{
		UClass* Class = UGKitStrFunLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AESDecrypt", &UGKitStrFunLib::execAESDecrypt },
			{ "AESEncrypt", &UGKitStrFunLib::execAESEncrypt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics
	{
		struct GKitStrFunLib_eventAESDecrypt_Parms
		{
			FString Input;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitStrFunLib_eventAESDecrypt_Parms, Input), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitStrFunLib_eventAESDecrypt_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitStrFunLib_eventAESDecrypt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|StrOpe" },
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8""AES\xe8\xa7\xa3\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
		{ "ModuleRelativePath", "BPFunLib/GKitStrFunLib.h" },
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8""AES\xe8\xa7\xa3\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitStrFunLib, nullptr, "AESDecrypt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::GKitStrFunLib_eventAESDecrypt_Parms), Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics
	{
		struct GKitStrFunLib_eventAESEncrypt_Parms
		{
			FString Input;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitStrFunLib_eventAESEncrypt_Parms, Input), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitStrFunLib_eventAESEncrypt_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitStrFunLib_eventAESEncrypt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|StrOpe" },
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8""AES\xe5\x8a\xa0\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
		{ "ModuleRelativePath", "BPFunLib/GKitStrFunLib.h" },
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8""AES\xe5\x8a\xa0\xe5\xaf\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitStrFunLib, nullptr, "AESEncrypt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::GKitStrFunLib_eventAESEncrypt_Parms), Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitStrFunLib);
	UClass* Z_Construct_UClass_UGKitStrFunLib_NoRegister()
	{
		return UGKitStrFunLib::StaticClass();
	}
	struct Z_Construct_UClass_UGKitStrFunLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGKitStrFunLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGKitStrFunLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitStrFunLib_AESDecrypt, "AESDecrypt" }, // 4222985782
		{ &Z_Construct_UFunction_UGKitStrFunLib_AESEncrypt, "AESEncrypt" }, // 1239497731
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGKitStrFunLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitStrFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitStrFunLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGKitStrFunLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitStrFunLib>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UGKitStrFunLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGKitStrFunLib_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGKitStrFunLib);
	UGKitStrFunLib::~UGKitStrFunLib() {}
	struct Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGKitStrFunLib, UGKitStrFunLib::StaticClass, TEXT("UGKitStrFunLib"), &Z_Registration_Info_UClass_UGKitStrFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitStrFunLib), 1130974515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_1639237959(TEXT("/Script/GKit"),
		Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
