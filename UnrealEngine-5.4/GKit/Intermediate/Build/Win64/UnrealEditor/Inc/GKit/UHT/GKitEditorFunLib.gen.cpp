// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BPFunLib/GKitEditorFunLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitEditorFunLib() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GKIT_API UClass* Z_Construct_UClass_UGKitEditorFunLib();
GKIT_API UClass* Z_Construct_UClass_UGKitEditorFunLib_NoRegister();
GKIT_API UEnum* Z_Construct_UEnum_GKit_EGkitImgFormat();
UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References

// Begin Enum EGkitImgFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGkitImgFormat;
static UEnum* EGkitImgFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGkitImgFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGkitImgFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GKit_EGkitImgFormat, (UObject*)Z_Construct_UPackage__Script_GKit(), TEXT("EGkitImgFormat"));
	}
	return Z_Registration_Info_UEnum_EGkitImgFormat.OuterSingleton;
}
template<> GKIT_API UEnum* StaticEnum<EGkitImgFormat>()
{
	return EGkitImgFormat_StaticEnum();
}
struct Z_Construct_UEnum_GKit_EGkitImgFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GKit,
	nullptr,
	"EGkitImgFormat",
	"EGkitImgFormat",
	Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GKit_EGkitImgFormat()
{
	if (!Z_Registration_Info_UEnum_EGkitImgFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGkitImgFormat.InnerSingleton, Z_Construct_UEnum_GKit_EGkitImgFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGkitImgFormat.InnerSingleton;
}
// End Enum EGkitImgFormat

// Begin Class UGKitEditorFunLib Function PasteContentFromClipboard
struct Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics
{
	struct GKitEditorFunLib_eventPasteContentFromClipboard_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe5\x89\xaa\xe8\xb4\xb4\xe6\x9d\xbf\xe6\x8b\xb7\xe8\xb4\x9d\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe5\x89\xaa\xe8\xb4\xb4\xe6\x9d\xbf\xe6\x8b\xb7\xe8\xb4\x9d\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventPasteContentFromClipboard_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "PasteContentFromClipboard", nullptr, nullptr, Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::GKitEditorFunLib_eventPasteContentFromClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::GKitEditorFunLib_eventPasteContentFromClipboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGKitEditorFunLib::execPasteContentFromClipboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGKitEditorFunLib::PasteContentFromClipboard();
	P_NATIVE_END;
}
// End Class UGKitEditorFunLib Function PasteContentFromClipboard

// Begin Class UGKitEditorFunLib Function SaveAssetThumbnail
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85\n" },
#endif
		{ "CPP_Default_ImageType", "PNG" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir = { "SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, SaveDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveDir_MetaData), NewProp_SaveDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, ImageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageName_MetaData), NewProp_ImageName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, ImageType), Z_Construct_UEnum_GKit_EGkitImgFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageType_MetaData), NewProp_ImageType_MetaData) }; // 1920508157
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnail_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_SaveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_ImageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "SaveAssetThumbnail", nullptr, nullptr, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::GKitEditorFunLib_eventSaveAssetThumbnail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::GKitEditorFunLib_eventSaveAssetThumbnail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UGKitEditorFunLib Function SaveAssetThumbnail

// Begin Class UGKitEditorFunLib Function SaveAssetThumbnailByClass
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85\n" },
#endif
		{ "CPP_Default_ImageType", "PNG" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClass_MetaData), NewProp_InClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir = { "SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, SaveDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveDir_MetaData), NewProp_SaveDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, ImageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageName_MetaData), NewProp_ImageName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, ImageType), Z_Construct_UEnum_GKit_EGkitImgFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageType_MetaData), NewProp_ImageType_MetaData) }; // 1920508157
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_SaveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_ImageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "SaveAssetThumbnailByClass", nullptr, nullptr, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::GKitEditorFunLib_eventSaveAssetThumbnailByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UGKitEditorFunLib Function SaveAssetThumbnailByClass

// Begin Class UGKitEditorFunLib Function SaveAssetThumbnailByObject
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GKit|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x9a\xe8\xbf\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85\n" },
#endif
		{ "CPP_Default_ImageType", "PNG" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86UnrealEd\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x89\x93\xe5\x8c\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InObject_MetaData), NewProp_InObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir = { "SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, SaveDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveDir_MetaData), NewProp_SaveDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, ImageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageName_MetaData), NewProp_ImageName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, ImageType), Z_Construct_UEnum_GKit_EGkitImgFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageType_MetaData), NewProp_ImageType_MetaData) }; // 1920508157
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_SaveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_ImageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGKitEditorFunLib, nullptr, "SaveAssetThumbnailByObject", nullptr, nullptr, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::GKitEditorFunLib_eventSaveAssetThumbnailByObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UGKitEditorFunLib Function SaveAssetThumbnailByObject

// Begin Class UGKitEditorFunLib
void UGKitEditorFunLib::StaticRegisterNativesUGKitEditorFunLib()
{
	UClass* Class = UGKitEditorFunLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PasteContentFromClipboard", &UGKitEditorFunLib::execPasteContentFromClipboard },
		{ "SaveAssetThumbnail", &UGKitEditorFunLib::execSaveAssetThumbnail },
		{ "SaveAssetThumbnailByClass", &UGKitEditorFunLib::execSaveAssetThumbnailByClass },
		{ "SaveAssetThumbnailByObject", &UGKitEditorFunLib::execSaveAssetThumbnailByObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGKitEditorFunLib);
UClass* Z_Construct_UClass_UGKitEditorFunLib_NoRegister()
{
	return UGKitEditorFunLib::StaticClass();
}
struct Z_Construct_UClass_UGKitEditorFunLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunLib/GKitEditorFunLib.h" },
		{ "ModuleRelativePath", "BPFunLib/GKitEditorFunLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGKitEditorFunLib_PasteContentFromClipboard, "PasteContentFromClipboard" }, // 1955043219
		{ &Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnail, "SaveAssetThumbnail" }, // 2791942765
		{ &Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByClass, "SaveAssetThumbnailByClass" }, // 391916059
		{ &Z_Construct_UFunction_UGKitEditorFunLib_SaveAssetThumbnailByObject, "SaveAssetThumbnailByObject" }, // 3244220238
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGKitEditorFunLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGKitEditorFunLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitEditorFunLib_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGKitEditorFunLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UGKitEditorFunLib_Statics::Class_MetaDataParams)
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
UGKitEditorFunLib::UGKitEditorFunLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGKitEditorFunLib);
UGKitEditorFunLib::~UGKitEditorFunLib() {}
// End Class UGKitEditorFunLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGkitImgFormat_StaticEnum, TEXT("EGkitImgFormat"), &Z_Registration_Info_UEnum_EGkitImgFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1920508157U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGKitEditorFunLib, UGKitEditorFunLib::StaticClass, TEXT("UGKitEditorFunLib"), &Z_Registration_Info_UClass_UGKitEditorFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGKitEditorFunLib), 839027638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_1997208044(TEXT("/Script/GKit"),
	Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
