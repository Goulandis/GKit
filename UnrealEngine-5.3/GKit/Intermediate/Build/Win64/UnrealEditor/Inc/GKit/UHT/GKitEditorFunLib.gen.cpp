// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitEditorFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitEditorFunLib() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GKIT_API UClass* Z_Construct_UClass_UGKitEditorFunLib();
	GKIT_API UClass* Z_Construct_UClass_UGKitEditorFunLib_NoRegister();
	GKIT_API UEnum* Z_Construct_UEnum_GKit_EGkitImgFormat();
	UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGkitImgFormat;
	static UEnum* EGkitImgFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGkitImgFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGkitImgFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GKit_EGkitImgFormat, Z_Construct_UPackage__Script_GKit(), TEXT("EGkitImgFormat"));
		}
		return Z_Registration_Info_UEnum_EGkitImgFormat.OuterSingleton;
	}
	template<> GKIT_API UEnum* StaticEnum<EGkitImgFormat>()
	{
		return EGkitImgFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_GKit_EGkitImgFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enumerators[] = {
		{ "EGkitImgFormat::PNG", (int64)EGkitImgFormat::PNG },
		{ "EGkitImgFormat::JPEG", (int64)EGkitImgFormat::JPEG },
		{ "EGkitImgFormat::GrayscaleJPEG", (int64)EGkitImgFormat::GrayscaleJPEG },
		{ "EGkitImgFormat::BMP", (int64)EGkitImgFormat::BMP },
		{ "EGkitImgFormat::ICO", (int64)EGkitImgFormat::ICO },
		{ "EGkitImgFormat::EXR", (int64)EGkitImgFormat::EXR },
		{ "EGkitImgFormat::ICNS", (int64)EGkitImgFormat::ICNS },
		{ "EGkitImgFormat::TGA", (int64)EGkitImgFormat::TGA },
		{ "EGkitImgFormat::HDR", (int64)EGkitImgFormat::HDR },
		{ "EGkitImgFormat::TIFF", (int64)EGkitImgFormat::TIFF },
		{ "EGkitImgFormat::DDS", (int64)EGkitImgFormat::DDS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMP.Comment", "/** Windows Bitmap. */" },
		{ "BMP.Name", "EGkitImgFormat::BMP" },
		{ "BMP.ToolTip", "Windows Bitmap." },
		{ "DDS.Comment", "/** DirectDraw Surface */" },
		{ "DDS.Name", "EGkitImgFormat::DDS" },
		{ "DDS.ToolTip", "DirectDraw Surface" },
		{ "EXR.Comment", "/** OpenEXR (HDR) image file format. */" },
		{ "EXR.Name", "EGkitImgFormat::EXR" },
		{ "EXR.ToolTip", "OpenEXR (HDR) image file format." },
		{ "GrayscaleJPEG.Comment", "/** Single channel JPEG. */" },
		{ "GrayscaleJPEG.Name", "EGkitImgFormat::GrayscaleJPEG" },
		{ "GrayscaleJPEG.ToolTip", "Single channel JPEG." },
		{ "HDR.Comment", "/** Hdr file from radiance using RGBE */" },
		{ "HDR.Name", "EGkitImgFormat::HDR" },
		{ "HDR.ToolTip", "Hdr file from radiance using RGBE" },
		{ "ICNS.Comment", "/** Mac icon. */" },
		{ "ICNS.Name", "EGkitImgFormat::ICNS" },
		{ "ICNS.ToolTip", "Mac icon." },
		{ "ICO.Comment", "/** Windows Icon resource. */" },
		{ "ICO.Name", "EGkitImgFormat::ICO" },
		{ "ICO.ToolTip", "Windows Icon resource." },
		{ "JPEG.Comment", "/** Joint Photographic Experts Group. */" },
		{ "JPEG.Name", "EGkitImgFormat::JPEG" },
		{ "JPEG.ToolTip", "Joint Photographic Experts Group." },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
		{ "PNG.Comment", "/** Portable Network Graphics. */" },
		{ "PNG.Name", "EGkitImgFormat::PNG" },
		{ "PNG.ToolTip", "Portable Network Graphics." },
		{ "TGA.Comment", "/** Truevision TGA / TARGA */" },
		{ "TGA.Name", "EGkitImgFormat::TGA" },
		{ "TGA.ToolTip", "Truevision TGA / TARGA" },
		{ "TIFF.Comment", "/** Tag Image File Format files */" },
		{ "TIFF.Name", "EGkitImgFormat::TIFF" },
		{ "TIFF.ToolTip", "Tag Image File Format files" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GKit,
		nullptr,
		"EGkitImgFormat",
		"EGkitImgFormat",
		Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GKit_EGkitImgFormat()
	{
		if (!Z_Registration_Info_UEnum_EGkitImgFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGkitImgFormat.InnerSingleton, Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGkitImgFormat.InnerSingleton;
	}
	DEFINE_FUNCTION(UGKitEditorFunLib::execSaveAssetThumbnailByObject)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDir);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageName);
		P_GET_ENUM(EGkitImgFormat,Z_Param_ImageType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGKitEditorFunLib::SaveAssetThumbnailByObject(Z_Param_InObject,Z_Param_SaveDir,Z_Param_ImageName,EGkitImgFormat(Z_Param_ImageType),Z_Param_Quality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGKitEditorFunLib::execSaveAssetThumbnailByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDir);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageName);
		P_GET_ENUM(EGkitImgFormat,Z_Param_ImageType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGKitEditorFunLib::SaveAssetThumbnailByClass(Z_Param_InClass,Z_Param_SaveDir,Z_Param_ImageName,EGkitImgFormat(Z_Param_ImageType),Z_Param_Quality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGKitEditorFunLib::execSaveAssetThumbnail)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDir);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageName);
		P_GET_ENUM(EGkitImgFormat,Z_Param_ImageType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGKitEditorFunLib::SaveAssetThumbnail(Z_Param_Out_AssetData,Z_Param_SaveDir,Z_Param_ImageName,EGkitImgFormat(Z_Param_ImageType),Z_Param_Quality);
		P_NATIVE_END;
	}
	void UGKitEditorFunLib::StaticRegisterNativesUGKitEditorFunLib()
	{
		UClass* Class = UGKitEditorFunLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveAssetThumbnail", &UGKitEditorFunLib::execSaveAssetThumbnail },
			{ "SaveAssetThumbnailByClass", &UGKitEditorFunLib::execSaveAssetThumbnailByClass },
			{ "SaveAssetThumbnailByObject", &UGKitEditorFunLib::execSaveAssetThumbnailByObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct GKitEditorFunLib_eventSaveAssetThumbnail_Parms
		{
			FAssetData AssetData;
			FString SaveDir;
			FString ImageName;
			EGkitImgFormat ImageType;
			int32 Quality;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir = { "SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, SaveDir), METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, ImageName), METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, ImageType), Z_Construct_UEnum_GKit_EGkitImgFormat, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_MetaData)) }; // 558503348
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_Quality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
		{ "Comment", "// \xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85\n" },
		{ "CPP_Default_ImageType", "PNG" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "SaveAssetThumbnail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::GKitEditorFunLib_eventSaveAssetThumbnail_Parms), Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics
	{
		struct GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms
		{
			const UClass* InClass;
			FString SaveDir;
			FString ImageName;
			EGkitImgFormat ImageType;
			int32 Quality;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir = { "SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, SaveDir), METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, ImageName), METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, ImageType), Z_Construct_UEnum_GKit_EGkitImgFormat, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_MetaData)) }; // 558503348
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_Quality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
		{ "Comment", "// \xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85\n" },
		{ "CPP_Default_ImageType", "PNG" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "SaveAssetThumbnailByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms), Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics
	{
		struct GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms
		{
			const UObject* InObject;
			FString SaveDir;
			FString ImageName;
			EGkitImgFormat ImageType;
			int32 Quality;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir = { "SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, SaveDir), METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, ImageName), METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, ImageType), Z_Construct_UEnum_GKit_EGkitImgFormat, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_MetaData)) }; // 558503348
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_Quality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
		{ "Comment", "// // \xe9\x80\x9a\xe8\xbf\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85\n" },
		{ "CPP_Default_ImageType", "PNG" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "SaveAssetThumbnailByObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms), Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitEditorFunLib);
	UClass* Z_Construct_UClass_UGKitEditorFunLib_NoRegister()
	{
		return UGKitEditorFunLib::StaticClass();
	}
	struct Z_Construct_UClass_UGKitEditorFunLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGKitEditorFunLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGKitEditorFunLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail, "SaveAssetThumbnail" }, // 605605976
		{ &Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass, "SaveAssetThumbnailByClass" }, // 2593987373
		{ &Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject, "SaveAssetThumbnailByObject" }, // 1358848920
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGKitEditorFunLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitEditorFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGKitEditorFunLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitEditorFunLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGKitEditorFunLib_Statics::ClassParams = {
		&UGKitEditorFunLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGKitEditorFunLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGKitEditorFunLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGKitEditorFunLib()
	{
		if (!Z_Registration_Info_UClass_UGKitEditorFunLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGKitEditorFunLib.OuterSingleton, Z_Construct_UClass_UGKitEditorFunLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGKitEditorFunLib.OuterSingleton;
	}
	template<> GKIT_API UClass* StaticClass<UGKitEditorFunLib>()
	{
		return UGKitEditorFunLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGKitEditorFunLib);
	UGKitEditorFunLib::~UGKitEditorFunLib() {}
	struct Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::EnumInfo[] = {
		{ EGkitImgFormat_StaticEnum, TEXT("EGkitImgFormat"), &Z_Registration_Info_UEnum_EGkitImgFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 558503348U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGKitEditorFunLib, UGKitEditorFunLib::StaticClass, TEXT("UGKitEditorFunLib"), &Z_Registration_Info_UClass_UGKitEditorFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitEditorFunLib), 839841614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_1813838314(TEXT("/Script/GKit"),
		Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_UE51_Plugins_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
