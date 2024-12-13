#include "GKitEditorFunLib.h"
#include "IImageWrapperModule.h"
#include "ObjectTools.h"
#include "Editor/UnrealEdEngine.h"
#include "Misc/FileHelper.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "Misc/ObjectThumbnail.h"
#include "Engine/AssetManager.h"

TMap<EGkitImgFormat,EImageFormat> UGKitEditorFunLib::ImageFormatMap = {
	{EGkitImgFormat::PNG,EImageFormat::PNG},
	{EGkitImgFormat::JPEG,EImageFormat::JPEG},
	{EGkitImgFormat::GrayscaleJPEG,EImageFormat::GrayscaleJPEG},
	{EGkitImgFormat::BMP,EImageFormat::BMP},
	{EGkitImgFormat::ICO,EImageFormat::ICO},
	{EGkitImgFormat::EXR,EImageFormat::EXR},
	{EGkitImgFormat::ICNS,EImageFormat::ICNS},
	{EGkitImgFormat::TGA,EImageFormat::TGA},
	{EGkitImgFormat::HDR,EImageFormat::HDR},
	{EGkitImgFormat::TIFF,EImageFormat::TIFF},
	{EGkitImgFormat::DDS,EImageFormat::DDS}
};

void UGKitEditorFunLib::SaveAssetThumbnail(const FAssetData& AssetData,const FString& SaveDir,const FString& ImageName,const EGkitImgFormat ImageType,int32 Quality) {
	FString PackageFilename;
	// 获取资产的引用路径
	const FName ObjectFullName = FName(*AssetData.GetFullName());
	TSet<FName> ObjectFullNames;
	ObjectFullNames.Add(ObjectFullName);
	UE_LOG(LogTemp,Log,TEXT("PackageName:%s"),*AssetData.PackageName.ToString());
	// 判断资产所在的包是否存在，如果存在则返回资产的uasset文件在磁盘中的路径
	if (FPackageName::DoesPackageExist(AssetData.PackageName.ToString(), &PackageFilename))
	{
		FThumbnailMap ThumbnailMap;
		// 从指定包中加载传入的资产引用列表中对应资产的缩略图，并存储到FThumbnailMap类型的TMap中
		ThumbnailTools::LoadThumbnailsFromPackage(PackageFilename, ObjectFullNames,ThumbnailMap);
		// 通过资产引用路径寻找对应的缩略图对象
		FObjectThumbnail* ObjTN = ThumbnailMap.Find(ObjectFullName);             
		// 动态加载图片包装器模块
		IImageWrapperModule& ImageWrapperModule = FModuleManager::Get().LoadModuleChecked<IImageWrapperModule>(TEXT("ImageWrapper"));
		// 创建png格式的图片包装器
		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(*ImageFormatMap.Find(ImageType));
		// 将缩略图的数据写入图片包装器
		ImageWrapper->SetRaw(ObjTN->GetUncompressedImageData().GetData(), ObjTN->GetUncompressedImageData().Num(), ObjTN->GetImageWidth(), ObjTN->GetImageHeight(), ERGBFormat::BGRA, 8);
		// 获取对应图片格式的后缀名
		FString FileSubfix = FindObject<UEnum>(ANY_PACKAGE,TEXT("EGkitImgFormat"))->GetNameStringByValue((int64)ImageType);
		// 生成存储路径
		FString SavePath = SaveDir + ImageName + TEXT(".") + FileSubfix.ToLower();
		// 存储图片包装器的数据到指定文件中
		FFileHelper::SaveArrayToFile(ImageWrapper->GetCompressed(Quality),*SavePath);
	}    
}

void UGKitEditorFunLib::SaveAssetThumbnailByClass(const UClass* InClass, const FString& SaveDir,const FString& ImageName,const EGkitImgFormat ImageType,int32 Quality)
{
	if(InClass == nullptr) return;
	FSoftClassPath SoftClassPath(InClass);
	FName ObjectPath = FName(TEXT("/Script/Engine.Blueprint'")+SoftClassPath.ToString().Replace(TEXT("_C"),TEXT(""))+TEXT("'"));
	UAssetManager& AssetManager = UAssetManager::Get();
	FAssetData AssetData = AssetManager.GetAssetRegistry().GetAssetByObjectPath(ObjectPath);
	SaveAssetThumbnail(AssetData,SaveDir,ImageName,ImageType,Quality);
}

void UGKitEditorFunLib::SaveAssetThumbnailByObject(const UObject* InObject, const FString& SaveDir,const FString& ImageName, const EGkitImgFormat ImageType, int32 Quality)
{
	if(InObject == nullptr) return;
	SaveAssetThumbnailByClass(InObject->GetClass(),SaveDir,ImageName,ImageType,Quality);
}
