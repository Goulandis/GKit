#pragma once
#include "GKit.h"
#include "IImageWrapper.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitFileFunLib.generated.h"

// 存储Csv数据表带表头的数据行，Key为表头，Value为行值
USTRUCT(BlueprintType)
struct FGkitCsvDataWithHeader
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="GKit|File")
	TMap<FString,FString> Data;
};

//存储Cvs数据表的行
USTRUCT(BlueprintType)
struct FGKitCsvData {
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="GKit|File")
	TArray<FString> Data;
};

UCLASS()
class GKIT_API UGKitFileFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// 读取文件内容到字符串
	UFUNCTION(BlueprintCallable,Category="GKit|File")
	static FString ReadFileToString(const FString& Path,bool& Rel);
	// 读取文件内容到字符串数组
	UFUNCTION(BlueprintCallable,Category="GKit|File")
	static TArray<FString> ReadFileToArray(const FString& Path,bool& Rel);
	// 保存字符串到文件
	UFUNCTION(BlueprintCallable,Category="GKit|File")
	static bool SaveStringToFile(const FString& Path,const FString& Content);
	// 从文件加载图片到Texture2D贴图，支持png、jpg和jpeg
	UFUNCTION(BlueprintCallable,Category="GKit|File")
	static UTexture2D* LoadImg2TextureFromFile(const FString& FilePath);
	// 获取文件夹下一级子目录的所有文件夹，不递归到子目录的子目录
	UFUNCTION(BlueprintCallable,Category="GKit|File")
	static TArray<FString> GetAllSubdirectories(const FString& Dir);
	// 获取文件夹下所有的文件
	UFUNCTION(BlueprintCallable,Category="GKit|File")
	static TArray<FString> GetFilesFromDir(const FString& Dir);

	 // 读取Csv文件，存储到FGKitCsvData结构数组中(TArray<FGKitCsvData>是一个与表结构完全一致的二维数组)，0号元素为表头
	UFUNCTION(BlueprintCallable, Category = "GKit|File")
	static bool ReadCsv(FString Path,TArray<FGKitCsvData>& CsvData);
	// 将FGKitCsvData结构数组存储的二维表保存到Csv文件中(TArray<FGKitCsvData>是一个与表结构完全一致的二维数组)
	UFUNCTION(BlueprintCallable, Category = "GKit|File")
	static void WriteCsv(FString Path, TArray<FGKitCsvData> CsvData);
	/*
	 * 将Csv表结构数据的行转换为每一行都带有表头的Csv表结构数据，每一个带表头的数据行都存储在FGkitCsvDataWithHeader数据结构下，Key为表头，Value为行值
	 * 如：将原始表结构：
	 *		\A,B,C\
	 *		\1,2,3\
	 *		\4,5,6\
	 *		\7,8,9\
	 * 转换为更易读取使用的每一行都带表头的数据结构：
	 *		\A,B,C\
	 *		\1,2,3\
	 *		\A,B,C\
	 *		\4,5,6\
	 *		\A,B,C\
	 *		\7,8,9\
	 */
	UFUNCTION(BlueprintCallable, Category = "GKit|File")
	static void ConvertCvsDataToCsvDataWithHeader(const TArray<FGKitCsvData>& CsvData,TArray<FGkitCsvDataWithHeader>& CsvDataWithHeader);

	// 打开资源文件管理器，可指定多种文件类型(如：*.txt;*.csv;*.json)，可选多个文件，输出存储所选文件路径的数组
	UFUNCTION(BlueprintCallable, Category = "GKit|File")
	static void OpenMultiFileDialog(TArray<FString>& FilePaths,FString FileTypes = TEXT("*"));
	// 打开资源文件管理器，指定文件类型(*.txt、*.csv、*.json等，默认为*支持任意类型文件)，选择一个文件，输出所选文件路径
	UFUNCTION(BlueprintCallable, Category = "GKit|File")
	static void OpenSingleFileDialog(FString& FilePath,FString FileType=TEXT("*"));
private:
	// 根据文件类型获取文件包装器
	static TSharedPtr<IImageWrapper> GetImageWrapperByExtention(const FString& ImagePath);
};
