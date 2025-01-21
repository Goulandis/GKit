// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitFileFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitFileFunLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GKIT_API UClass* Z_Construct_UClass_UGKitFileFunLib();
	GKIT_API UClass* Z_Construct_UClass_UGKitFileFunLib_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References
	DEFINE_FUNCTION(UGKitFileFunLib::execGetFilesFromDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UGKitFileFunLib::GetFilesFromDir(Z_Param_Dir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGKitFileFunLib::execGetAllSubdirectories)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UGKitFileFunLib::GetAllSubdirectories(Z_Param_Dir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGKitFileFunLib::execLoadImg2TextureFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UGKitFileFunLib::LoadImg2TextureFromFile(Z_Param_FilePath);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGKitFileFunLib::execReadFileToArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL_REF(Z_Param_Out_Rel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UGKitFileFunLib::ReadFileToArray(Z_Param_Path,Z_Param_Out_Rel);
		P_NATIVE_END;
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
	void UGKitFileFunLib::StaticRegisterNativesUGKitFileFunLib()
	{
		UClass* Class = UGKitFileFunLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSubdirectories", &UGKitFileFunLib::execGetAllSubdirectories },
			{ "GetFilesFromDir", &UGKitFileFunLib::execGetFilesFromDir },
			{ "LoadImg2TextureFromFile", &UGKitFileFunLib::execLoadImg2TextureFromFile },
			{ "ReadFileToArray", &UGKitFileFunLib::execReadFileToArray },
			{ "ReadFileToString", &UGKitFileFunLib::execReadFileToString },
			{ "SaveStringToFile", &UGKitFileFunLib::execSaveStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics
	{
		struct GKitFileFunLib_eventGetAllSubdirectories_Parms
		{
			FString Dir;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dir;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetAllSubdirectories_Parms, Dir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir_MetaData), Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetAllSubdirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_Dir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe4\xb8\x80\xe7\xba\xa7\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xef\xbc\x8c\xe4\xb8\x8d\xe9\x80\x92\xe5\xbd\x92\xe5\x88\xb0\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe4\xb8\x80\xe7\xba\xa7\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xef\xbc\x8c\xe4\xb8\x8d\xe9\x80\x92\xe5\xbd\x92\xe5\x88\xb0\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95\xe7\x9a\x84\xe5\xad\x90\xe7\x9b\xae\xe5\xbd\x95" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "GetAllSubdirectories", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::GKitFileFunLib_eventGetAllSubdirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics
	{
		struct GKitFileFunLib_eventGetFilesFromDir_Parms
		{
			FString Dir;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dir;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetFilesFromDir_Parms, Dir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir_MetaData), Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventGetFilesFromDir_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_Dir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\x8b\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "GetFilesFromDir", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::GKitFileFunLib_eventGetFilesFromDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics
	{
		struct GKitFileFunLib_eventLoadImg2TextureFromFile_Parms
		{
			FString FilePath;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventLoadImg2TextureFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath_MetaData), Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventLoadImg2TextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x9b\xbe\xe7\x89\x87\xe5\x88\xb0Texture2D\xe8\xb4\xb4\xe5\x9b\xbe\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81png\xe3\x80\x81jpg\xe5\x92\x8cjpeg\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x9b\xbe\xe7\x89\x87\xe5\x88\xb0Texture2D\xe8\xb4\xb4\xe5\x9b\xbe\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81png\xe3\x80\x81jpg\xe5\x92\x8cjpeg" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "LoadImg2TextureFromFile", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::GKitFileFunLib_eventLoadImg2TextureFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics
	{
		struct GKitFileFunLib_eventReadFileToArray_Parms
		{
			FString Path;
			bool Rel;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_Rel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Rel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadFileToArray_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::NewProp_Path_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "ReadFileToArray", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::GKitFileFunLib_eventReadFileToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics
	{
		struct GKitFileFunLib_eventReadFileToString_Parms
		{
			FString Path;
			bool Rel;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_Rel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Rel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventReadFileToString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::NewProp_Path_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x96\x87\xe4\xbb\xb6\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "ReadFileToString", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::GKitFileFunLib_eventReadFileToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics
	{
		struct GKitFileFunLib_eventSaveStringToFile_Parms
		{
			FString Path;
			FString Content;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventSaveStringToFile_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitFileFunLib_eventSaveStringToFile_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::NewProp_Content_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|FileOpe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitFileFunLib, nullptr, "SaveStringToFile", nullptr, nullptr, Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::GKitFileFunLib_eventSaveStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitFileFunLib);
	UClass* Z_Construct_UClass_UGKitFileFunLib_NoRegister()
	{
		return UGKitFileFunLib::StaticClass();
	}
	struct Z_Construct_UClass_UGKitFileFunLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGKitFileFunLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitFileFunLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGKitFileFunLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitFileFunLib_GetAllSubdirectories, "GetAllSubdirectories" }, // 4133173687
		{ &Z_Construct_UFunction_UGKitFileFunLib_GetFilesFromDir, "GetFilesFromDir" }, // 2788030920
		{ &Z_Construct_UFunction_UGKitFileFunLib_LoadImg2TextureFromFile, "LoadImg2TextureFromFile" }, // 1950980693
		{ &Z_Construct_UFunction_UGKitFileFunLib_ReadFileToArray, "ReadFileToArray" }, // 3851008137
		{ &Z_Construct_UFunction_UGKitFileFunLib_ReadFileToString, "ReadFileToString" }, // 87937177
		{ &Z_Construct_UFunction_UGKitFileFunLib_SaveStringToFile, "SaveStringToFile" }, // 370883580
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitFileFunLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGKitFileFunLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitFileFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitFileFunLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGKitFileFunLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitFileFunLib>::IsAbstract,
	};
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
	struct Z_CompiledInDeferFile_FID_ueVideo_0_Plugins_GKit_UnrealEngine_5_3_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ueVideo_0_Plugins_GKit_UnrealEngine_5_3_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGKitFileFunLib, UGKitFileFunLib::StaticClass, TEXT("UGKitFileFunLib"), &Z_Registration_Info_UClass_UGKitFileFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitFileFunLib), 1511374804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ueVideo_0_Plugins_GKit_UnrealEngine_5_3_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_2578221758(TEXT("/Script/GKit"),
		Z_CompiledInDeferFile_FID_ueVideo_0_Plugins_GKit_UnrealEngine_5_3_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ueVideo_0_Plugins_GKit_UnrealEngine_5_3_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
