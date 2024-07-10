#pragma once
#include "IImageWrapper.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitFileFunLib.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGKit, All, All)

UCLASS()
class GKIT_API UGKitFileFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	// 读取文件内容到字符串
	UFUNCTION(BlueprintCallable,Category="GKit|FileOpe")
	static FString ReadFileToString(const FString& Path,bool& Rel);
	// 读取文件内容到字符串数组
	UFUNCTION(BlueprintCallable,Category="GKit|FileOpe")
	static TArray<FString> ReadFileToArray(const FString& Path,bool& Rel);
	// 保存字符串到文件
	UFUNCTION(BlueprintCallable,Category="GKit|FileOpe")
	static bool SaveStringToFile(const FString& Path,const FString& Content);
	// 从文件加载图片到Texture2D贴图，支持png、jpg和jpeg
	UFUNCTION(BlueprintCallable,Category="GKit|FileOpe")
	static UTexture2D* LoadImg2TextureFromFile(const FString& FilePath);
	// 获取文件夹下一级子目录的所有文件夹，不递归到子目录的子目录
	UFUNCTION(BlueprintCallable,Category="GKit|FileOpe")
	static TArray<FString> GetAllSubdirectories(const FString& Dir);
	// 获取文件夹下所有的文件
	UFUNCTION(BlueprintCallable,Category="GKit|FileOpe")
	static TArray<FString> GetFilesFromDir(const FString& Dir);

private:
	// 根据文件类型获取文件包装器
	static TSharedPtr<IImageWrapper> GetImageWrapperByExtention(const FString& ImagePath);
};
