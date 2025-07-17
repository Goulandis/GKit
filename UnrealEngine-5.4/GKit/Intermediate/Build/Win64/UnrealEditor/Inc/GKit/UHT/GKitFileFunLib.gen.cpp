// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitFileFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitFileFunLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GKIT_API UClass* Z_Construct_UClass_UGKitFileFunLib();
GKIT_API UClass* Z_Construct_UClass_UGKitFileFunLib_NoRegister();
GKIT_API UScriptStruct* Z_Construct_UScriptStruct_FGKitCsvData();
UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References

// Begin ScriptStruct FGKitCsvData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GKitCsvData;
class UScriptStruct* FGKitCsvData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GKitCsvData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GKitCsvData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGKitCsvData, (UObject*)Z_Construct_UPackage__Script_GKit(), TEXT("GKitCsvData"));
	}
	return Z_Registration_Info_UScriptStruct_GKitCsvData.OuterSingleton;
}
template<> GKIT_API UScriptStruct* StaticStruct<FGKitCsvData>()
{
	return FGKitCsvData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGKitCsvData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "GKitCsvData" },
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGKitCsvData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGKitCsvData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGKitCsvData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGKitCsvData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGKitCsvData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGKitCsvData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGKitCsvData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGKitCsvData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGKitCsvData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
	nullptr,
	&NewStructOps,
	"GKitCsvData",
	Z_Construct_UScriptStruct_FGKitCsvData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGKitCsvData_Statics::PropPointers),
	sizeof(FGKitCsvData),
	alignof(FGKitCsvData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGKitCsvData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGKitCsvData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGKitCsvData()
{
	if (!Z_Registration_Info_UScriptStruct_GKitCsvData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GKitCsvData.InnerSingleton, Z_Construct_UScriptStruct_FGKitCsvData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GKitCsvData.InnerSingleton;
}
// End ScriptStruct FGKitCsvData

// Begin Class UGKitFileFunLib Function GetAllSubdirectories
struct Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics
{
	struct GKitFileFunLib_eventGetAllSubdirectories_Parms
	{
		FString Dir;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe4\xb8\x80\xe7\xba\xa7\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xef\xbc\x8c\xe4\xb8\x8d\xe9\x80\x92\xe5\xbd\x92\xe5\x88\xb0\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe4\xb8\x80\xe7\xba\xa7\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xef\xbc\x8c\xe4\xb8\x8d\xe9\x80\x92\xe5\xbd\x92\xe5\x88\xb0\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetAllSubdirectories_Parms, Dir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dir_MetaData), NewProp_Dir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetAllSubdirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "GetAllSubdirectories", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::GKitFileFunLib_eventGetAllSubdirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::GKitFileFunLib_eventGetAllSubdirectories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execGetAllSubdirectories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dir);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UGKitFileFunLib::GetAllSubdirectories(Z_Param_Dir);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function GetAllSubdirectories

// Begin Class UGKitFileFunLib Function GetFilesFromDir
struct Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics
{
	struct GKitFileFunLib_eventGetFilesFromDir_Parms
	{
		FString Dir;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetFilesFromDir_Parms, Dir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dir_MetaData), NewProp_Dir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetFilesFromDir_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "GetFilesFromDir", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::GKitFileFunLib_eventGetFilesFromDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::GKitFileFunLib_eventGetFilesFromDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execGetFilesFromDir)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dir);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UGKitFileFunLib::GetFilesFromDir(Z_Param_Dir);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function GetFilesFromDir

// Begin Class UGKitFileFunLib Function LoadImg2TextureFromFile
struct Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics
{
	struct GKitFileFunLib_eventLoadImg2TextureFromFile_Parms
	{
		FString FilePath;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x9b\xbe\xe7\x89\x87\xe5\x88\xb0Texture2D\xe8\xb4\xb4\xe5\x9b\xbe\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81png\xe3\x80\x81jpg\xe5\x92\x8cjpeg\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x9b\xbe\xe7\x89\x87\xe5\x88\xb0Texture2D\xe8\xb4\xb4\xe5\x9b\xbe\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81png\xe3\x80\x81jpg\xe5\x92\x8cjpeg" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventLoadImg2TextureFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventLoadImg2TextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "LoadImg2TextureFromFile", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::GKitFileFunLib_eventLoadImg2TextureFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::GKitFileFunLib_eventLoadImg2TextureFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execLoadImg2TextureFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UGKitFileFunLib::LoadImg2TextureFromFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function LoadImg2TextureFromFile

// Begin Class UGKitFileFunLib Function OpenMultiFileDialog
struct Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics
{
	struct GKitFileFunLib_eventOpenMultiFileDialog_Parms
	{
		TArray<FString> FilePaths;
		FString FileTypes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x93\xe5\xbc\x80\xe8\xb5\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xef\xbc\x8c\xe5\x8f\xaf\xe6\x8c\x87\xe5\xae\x9a\xe5\xa4\x9a\xe7\xa7\x8d\xe6\x96\x87\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b(\xe5\xa6\x82\xef\xbc\x9a*.txt;*.csv;*.json)\xef\xbc\x8c\xe5\x8f\xaf\xe9\x80\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbe\x93\xe5\x87\xba\xe5\xad\x98\xe5\x82\xa8\xe6\x89\x80\xe9\x80\x89\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\xe7\x9a\x84\xe6\x95\xb0\xe7\xbb\x84\n" },
#endif
		{ "CPP_Default_FileTypes", "*" },
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe8\xb5\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xef\xbc\x8c\xe5\x8f\xaf\xe6\x8c\x87\xe5\xae\x9a\xe5\xa4\x9a\xe7\xa7\x8d\xe6\x96\x87\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b(\xe5\xa6\x82\xef\xbc\x9a*.txt;*.csv;*.json)\xef\xbc\x8c\xe5\x8f\xaf\xe9\x80\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbe\x93\xe5\x87\xba\xe5\xad\x98\xe5\x82\xa8\xe6\x89\x80\xe9\x80\x89\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\xe7\x9a\x84\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventOpenMultiFileDialog_Parms, FilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventOpenMultiFileDialog_Parms, FileTypes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::NewProp_FilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::NewProp_FilePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::NewProp_FileTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "OpenMultiFileDialog", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::GKitFileFunLib_eventOpenMultiFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::GKitFileFunLib_eventOpenMultiFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execOpenMultiFileDialog)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_FilePaths);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGKitFileFunLib::OpenMultiFileDialog(Z_Param_Out_FilePaths,Z_Param_FileTypes);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function OpenMultiFileDialog

// Begin Class UGKitFileFunLib Function OpenSingleFileDialog
struct Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics
{
	struct GKitFileFunLib_eventOpenSingleFileDialog_Parms
	{
		FString FilePath;
		FString FileType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x93\xe5\xbc\x80\xe8\xb5\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xef\xbc\x8c\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\x87\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b(*.txt\xe3\x80\x81*.csv\xe3\x80\x81*.json\xe7\xad\x89\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba*\xe6\x94\xaf\xe6\x8c\x81\xe4\xbb\xbb\xe6\x84\x8f\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x96\x87\xe4\xbb\xb6)\xef\xbc\x8c\xe9\x80\x89\xe6\x8b\xa9\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbe\x93\xe5\x87\xba\xe6\x89\x80\xe9\x80\x89\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "CPP_Default_FileType", "*" },
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe8\xb5\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xef\xbc\x8c\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\x87\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b(*.txt\xe3\x80\x81*.csv\xe3\x80\x81*.json\xe7\xad\x89\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba*\xe6\x94\xaf\xe6\x8c\x81\xe4\xbb\xbb\xe6\x84\x8f\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x96\x87\xe4\xbb\xb6)\xef\xbc\x8c\xe9\x80\x89\xe6\x8b\xa9\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbe\x93\xe5\x87\xba\xe6\x89\x80\xe9\x80\x89\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventOpenSingleFileDialog_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventOpenSingleFileDialog_Parms, FileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::NewProp_FileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "OpenSingleFileDialog", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::GKitFileFunLib_eventOpenSingleFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::GKitFileFunLib_eventOpenSingleFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execOpenSingleFileDialog)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FilePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGKitFileFunLib::OpenSingleFileDialog(Z_Param_Out_FilePath,Z_Param_FileType);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function OpenSingleFileDialog

// Begin Class UGKitFileFunLib Function ReadCsv
struct Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics
{
	struct GKitFileFunLib_eventReadCsv_Parms
	{
		FString Path;
		TArray<FGKitCsvData> CsvData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96""Csv\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe5\xad\x98\xe5\x82\xa8\xe5\x88\xb0""FGKitCsvData\xe7\xbb\x93\xe6\x9e\x84\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad(TArray<FGKitCsvData>\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\x8e\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe7\x9a\x84\xe4\xba\x8c\xe7\xbb\xb4\xe6\x95\xb0\xe7\xbb\x84)\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96""Csv\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe5\xad\x98\xe5\x82\xa8\xe5\x88\xb0""FGKitCsvData\xe7\xbb\x93\xe6\x9e\x84\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad(TArray<FGKitCsvData>\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\x8e\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe7\x9a\x84\xe4\xba\x8c\xe7\xbb\xb4\xe6\x95\xb0\xe7\xbb\x84)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CsvData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CsvData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadCsv_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_CsvData_Inner = { "CsvData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGKitCsvData, METADATA_PARAMS(0, nullptr) }; // 1595094797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_CsvData = { "CsvData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadCsv_Parms, CsvData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1595094797
void Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GKitFileFunLib_eventReadCsv_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GKitFileFunLib_eventReadCsv_Parms), &Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_CsvData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_CsvData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "ReadCsv", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::GKitFileFunLib_eventReadCsv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::GKitFileFunLib_eventReadCsv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_ReadCsv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_ReadCsv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execReadCsv)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_TARRAY_REF(FGKitCsvData,Z_Param_Out_CsvData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGKitFileFunLib::ReadCsv(Z_Param_Path,Z_Param_Out_CsvData);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function ReadCsv

// Begin Class UGKitFileFunLib Function ReadFileToArray
struct Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics
{
	struct GKitFileFunLib_eventReadFileToArray_Parms
	{
		FString Path;
		bool Rel;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_Rel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Rel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadFileToArray_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Rel_SetBit(void* Obj)
{
	((GKitFileFunLib_eventReadFileToArray_Parms*)Obj)->Rel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Rel = { "Rel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GKitFileFunLib_eventReadFileToArray_Parms), &Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Rel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadFileToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Rel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "ReadFileToArray", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::GKitFileFunLib_eventReadFileToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::GKitFileFunLib_eventReadFileToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execReadFileToArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL_REF(Z_Param_Out_Rel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UGKitFileFunLib::ReadFileToArray(Z_Param_Path,Z_Param_Out_Rel);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function ReadFileToArray

// Begin Class UGKitFileFunLib Function ReadFileToString
struct Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics
{
	struct GKitFileFunLib_eventReadFileToString_Parms
	{
		FString Path;
		bool Rel;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_Rel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Rel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadFileToString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Rel_SetBit(void* Obj)
{
	((GKitFileFunLib_eventReadFileToString_Parms*)Obj)->Rel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Rel = { "Rel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GKitFileFunLib_eventReadFileToString_Parms), &Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Rel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadFileToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Rel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "ReadFileToString", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::GKitFileFunLib_eventReadFileToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::GKitFileFunLib_eventReadFileToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execReadFileToString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL_REF(Z_Param_Out_Rel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGKitFileFunLib::ReadFileToString(Z_Param_Path,Z_Param_Out_Rel);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function ReadFileToString

// Begin Class UGKitFileFunLib Function SaveStringToFile
struct Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics
{
	struct GKitFileFunLib_eventSaveStringToFile_Parms
	{
		FString Path;
		FString Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventSaveStringToFile_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventSaveStringToFile_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
void Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GKitFileFunLib_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GKitFileFunLib_eventSaveStringToFile_Parms), &Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "SaveStringToFile", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::GKitFileFunLib_eventSaveStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::GKitFileFunLib_eventSaveStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execSaveStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGKitFileFunLib::SaveStringToFile(Z_Param_Path,Z_Param_Content);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function SaveStringToFile

// Begin Class UGKitFileFunLib Function WriteCsv
struct Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics
{
	struct GKitFileFunLib_eventWriteCsv_Parms
	{
		FString Path;
		TArray<FGKitCsvData> CsvData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x86""FGKitCsvData\xe7\xbb\x93\xe6\x9e\x84\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe4\xba\x8c\xe7\xbb\xb4\xe8\xa1\xa8\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0""Csv\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad(TArray<FGKitCsvData>\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\x8e\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe7\x9a\x84\xe4\xba\x8c\xe7\xbb\xb4\xe6\x95\xb0\xe7\xbb\x84)\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86""FGKitCsvData\xe7\xbb\x93\xe6\x9e\x84\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe4\xba\x8c\xe7\xbb\xb4\xe8\xa1\xa8\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0""Csv\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad(TArray<FGKitCsvData>\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\x8e\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\xe5\xae\x8c\xe5\x85\xa8\xe4\xb8\x80\xe8\x87\xb4\xe7\x9a\x84\xe4\xba\x8c\xe7\xbb\xb4\xe6\x95\xb0\xe7\xbb\x84)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CsvData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CsvData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventWriteCsv_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::NewProp_CsvData_Inner = { "CsvData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGKitCsvData, METADATA_PARAMS(0, nullptr) }; // 1595094797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::NewProp_CsvData = { "CsvData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventWriteCsv_Parms, CsvData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1595094797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::NewProp_CsvData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::NewProp_CsvData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "WriteCsv", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::GKitFileFunLib_eventWriteCsv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::GKitFileFunLib_eventWriteCsv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitFileFunLib_WriteCsv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitFileFunLib_WriteCsv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitFileFunLib::execWriteCsv)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_TARRAY(FGKitCsvData,Z_Param_CsvData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGKitFileFunLib::WriteCsv(Z_Param_Path,Z_Param_CsvData);
	P_NATIVE_END;
}
// End Class UGKitFileFunLib Function WriteCsv

// Begin Class UGKitFileFunLib
void UGKitFileFunLib::StaticRegisterNativesUGKitFileFunLib()
{
	UClass* Class = UGKitFileFunLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllSubdirectories", &UGKitFileFunLib::execGetAllSubdirectories },
		{ "GetFilesFromDir", &UGKitFileFunLib::execGetFilesFromDir },
		{ "LoadImg2TextureFromFile", &UGKitFileFunLib::execLoadImg2TextureFromFile },
		{ "OpenMultiFileDialog", &UGKitFileFunLib::execOpenMultiFileDialog },
		{ "OpenSingleFileDialog", &UGKitFileFunLib::execOpenSingleFileDialog },
		{ "ReadCsv", &UGKitFileFunLib::execReadCsv },
		{ "ReadFileToArray", &UGKitFileFunLib::execReadFileToArray },
		{ "ReadFileToString", &UGKitFileFunLib::execReadFileToString },
		{ "SaveStringToFile", &UGKitFileFunLib::execSaveStringToFile },
		{ "WriteCsv", &UGKitFileFunLib::execWriteCsv },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitFileFunLib);
UClass* Z_Construct_UClass_UGKitFileFunLib_NoRegister()
{
	return UGKitFileFunLib::StaticClass();
}
struct Z_Construct_UClass_UGKitFileFunLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitFileFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories, "GetAllSubdirectories" }, // 484423807
		{ &Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir, "GetFilesFromDir" }, // 3785365074
		{ &Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile, "LoadImg2TextureFromFile" }, // 523743246
		{ &Z_Construct_UFunction_UGKitFileFunLib_OpenMultiFileDialog, "OpenMultiFileDialog" }, // 1865294952
		{ &Z_Construct_UFunction_UGKitFileFunLib_OpenSingleFileDialog, "OpenSingleFileDialog" }, // 93621411
		{ &Z_Construct_UFunction_UGKitFileFunLib_ReadCsv, "ReadCsv" }, // 2636548427
		{ &Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray, "ReadFileToArray" }, // 3286983086
		{ &Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString, "ReadFileToString" }, // 4073260946
		{ &Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile, "SaveStringToFile" }, // 1790841631
		{ &Z_Construct_UFunction_UGKitFileFunLib_WriteCsv, "WriteCsv" }, // 4209211319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitFileFunLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGKitFileFunLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitFileFunLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGKitFileFunLib_Statics::ClassParams = {
	&UGKitFileFunLib::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitFileFunLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UGKitFileFunLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGKitFileFunLib()
{
	if (!Z_Registration_Info_UClass_UGKitFileFunLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGKitFileFunLib.OuterSingleton, Z_Construct_UClass_UGKitFileFunLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGKitFileFunLib.OuterSingleton;
}
template<> GKIT_API UClass* StaticClass<UGKitFileFunLib>()
{
	return UGKitFileFunLib::StaticClass();
}
UGKitFileFunLib::UGKitFileFunLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGKitFileFunLib);
UGKitFileFunLib::~UGKitFileFunLib() {}
// End Class UGKitFileFunLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGKitCsvData::StaticStruct, Z_Construct_UScriptStruct_FGKitCsvData_Statics::NewStructOps, TEXT("GKitCsvData"), &Z_Registration_Info_UScriptStruct_GKitCsvData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGKitCsvData), 1595094797U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGKitFileFunLib, UGKitFileFunLib::StaticClass, TEXT("UGKitFileFunLib"), &Z_Registration_Info_UClass_UGKitFileFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitFileFunLib), 1122718558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_2666748833(TEXT("/Script/GKit"),
	Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DHDS_Plugins_GKit_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
