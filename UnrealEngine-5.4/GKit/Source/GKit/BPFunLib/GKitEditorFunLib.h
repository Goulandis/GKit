#pragma once
#include "CoreMinimal.h"
#include "IImageWrapper.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitEditorFunLib.generated.h"

UENUM(BlueprintType)
enum class EGkitImgFormat : uint8
{
	/** Portable Network Graphics. */
	PNG,
	/** Joint Photographic Experts Group. */
	JPEG,
	/** Single channel JPEG. */
	GrayscaleJPEG,	
	/** Windows Bitmap. */
	BMP,
	/** Windows Icon resource. */
	ICO,
	/** OpenEXR (HDR) image file format. */
	EXR,
	/** Mac icon. */
	ICNS,
	/** Truevision TGA / TARGA */
	TGA,
	/** Hdr file from radiance using RGBE */
	HDR,
	/** Tag Image File Format files */
	TIFF,
	/** DirectDraw Surface */
	DDS,
};

UCLASS()
class GKIT_API UGKitEditorFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	static TMap<EGkitImgFormat,EImageFormat> ImageFormatMap;

	// 保存资产缩略图，使用了UnrealEd模块，不可打包
	UFUNCTION(BlueprintCallable,Category="GKit|Editor")
	static void SaveAssetThumbnail(
		const FAssetData& AssetData,
		const FString& SaveDir,
		const FString& ImageName,
		const EGkitImgFormat ImageType=EGkitImgFormat::PNG,
		int32 Quality = 100);
	// 通过类保存资产缩略图，使用了UnrealEd模块，不可打包
	UFUNCTION(BlueprintCallable,Category="GKit|Editor")
	static void SaveAssetThumbnailByClass(
		const UClass* InClass,
		const FString& SaveDir,
		const FString& ImageName,
		const EGkitImgFormat ImageType=EGkitImgFormat::PNG,
		int32 Quality = 100);
	// // 通过对象保存资产缩略图，使用了UnrealEd模块，不可打包
	UFUNCTION(BlueprintCallable,Category="GKit|Editor")
	static void SaveAssetThumbnailByObject(
		const UObject* InObject,
		const FString& SaveDir,
		const FString& ImageName,
		const EGkitImgFormat ImageType=EGkitImgFormat::PNG,
		int32 Quality = 100);
};
