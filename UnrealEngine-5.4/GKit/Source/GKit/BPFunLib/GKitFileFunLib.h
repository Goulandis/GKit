#pragma once
#include "GKit.h"
#include "IImageWrapper.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitFileFunLib.generated.h"

USTRUCT(BlueprintType)
struct FGKitCsvData {
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> Data;
};

UCLASS()
class GKIT_API UGKitFileFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
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

	 // 读取Csv文件，存储到FGKitCsvData结构数组中(TArray<FGKitCsvData>是一个与表结构完全一致的二维数组)
	UFUNCTION(BlueprintCallable, Category = "GKit|FileOpe")
	static bool ReadCsv(FString Path,TArray<FGKitCsvData>& CsvData);
	// 将FGKitCsvData结构数组存储的二维表保存到Csv文件中(TArray<FGKitCsvData>是一个与表结构完全一致的二维数组)
	UFUNCTION(BlueprintCallable, Category = "GKit|FileOpe")
	static void WriteCsv(FString Path, TArray<FGKitCsvData> CsvData);

	// 打开资源文件管理器，可指定多种文件类型(如：*.txt;*.csv;*.json)，可选多个文件，输出存储所选文件路径的数组
	UFUNCTION(BlueprintCallable, Category = "GKit|FileOpe")
	static void OpenMultiFileDialog(TArray<FString>& FilePaths,FString FileTypes = TEXT("*"));
	// 打开资源文件管理器，指定文件类型(*.txt、*.csv、*.json等，默认为*支持任意类型文件)，选择一个文件，输出所选文件路径
	UFUNCTION(BlueprintCallable, Category = "GKit|FileOpe")
	static void OpenSingleFileDialog(FString& FilePath,FString FileType=TEXT("*"));
private:
	// 根据文件类型获取文件包装器
	static TSharedPtr<IImageWrapper> GetImageWrapperByExtention(const FString& ImagePath);
};
