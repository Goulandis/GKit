#include "GKitFileFunLib.h"
#include "IImageWrapperModule.h"
#include "HAL/FileManager.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/MinWindows.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include <codecvt>
#include <corecrt_io.h>
#include "Serialization/Csv/CsvParser.h"
#include "GKitStrFunLib.h"
#include "IDesktopPlatform.h"
#include "DesktopPlatformModule.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"

FString UGKitFileFunLib::ReadFileToString(const FString& Path, bool& Rel)
{
	FString Content;
	Rel = FFileHelper::LoadFileToString(Content,*Path);
	return Content;
}

TArray<FString> UGKitFileFunLib::ReadFileToArray(const FString& Path, bool& Rel)
{
	TArray<FString> Lines;
	Rel = FFileHelper::LoadFileToStringArray(Lines,*Path);
	return Lines;
}

bool UGKitFileFunLib::SaveStringToFile(const FString& Path, const FString& Content)
{
	return FFileHelper::SaveStringToFile(Content,*Path);
}

UTexture2D* UGKitFileFunLib::LoadImg2TextureFromFile(const FString& FilePath)
{
	UTexture2D* Tex = nullptr;
	if(!IFileManager::Get().FileExists(*FilePath))
	{
		UE_LOG(LogGKit,Error,TEXT("%s is not exists"),*FilePath);
		return Tex;
	}
	TArray<uint8> RawFileData;
	if(!FFileHelper::LoadFileToArray(RawFileData,*FilePath))
	{
		UE_LOG(LogGKit,Error,TEXT("Failed to load file to memory : %s"),*FilePath);
		return Tex;
	}
	TSharedPtr<IImageWrapper> ImageWrapper = GetImageWrapperByExtention(FilePath);
	if(ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(),RawFileData.Num()))
	{
		TArray<uint8> UncompressedRGBBA;
		if(ImageWrapper->GetRaw(ERGBFormat::RGBA,8,UncompressedRGBBA))
		{
			Tex = UTexture2D::CreateTransient(ImageWrapper->GetWidth(),ImageWrapper->GetHeight(),PF_R8G8B8A8);
			if(Tex)
			{
				void* TexData = Tex->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TexData,UncompressedRGBBA.GetData(),UncompressedRGBBA.Num());
				Tex->GetPlatformData()->Mips[0].BulkData.Unlock();
				Tex->UpdateResource();
			}
		}
	}
	return Tex;
}

TArray<FString> UGKitFileFunLib::GetAllSubdirectories(const FString& Dir)
{
	TArray<FString> Dirs;
	long long hFile = 0;
	_wfinddata_t FileInfo;
	std::wstring_convert<std::codecvt_utf8<wchar_t>> Conv;
	std::wstring RootPath = Conv.from_bytes(TCHAR_TO_UTF8(*Dir));
	std::wstring WPath = RootPath + L"\\*";
	if ((hFile = _wfindfirst(WPath.c_str(), &FileInfo)) != -1)
	{
		do
		{
			if(FileInfo.attrib & _A_SUBDIR && wcscmp(FileInfo.name,L".") != 0 && wcscmp(FileInfo.name,L"..") != 0)
			{
				std::wstring SubPath = RootPath + L"/" + FileInfo.name;
				const wchar_t* DirNameChr = SubPath.c_str();
				Dirs.Add(FString(DirNameChr));
			}
		}
		while(_wfindnext(hFile,&FileInfo) == 0);
		_findclose(hFile);
	}
	return Dirs;
}

TArray<FString> UGKitFileFunLib::GetFilesFromDir(const FString& Dir)
{
	TArray<FString> FileNames;
	IFileManager::Get().FindFiles(FileNames,*Dir);
	TArray<FString> FilePaths;
	for(FString FileName : FileNames)
	{
		FString FilePath = FPaths::Combine(Dir,FileName);
		FilePaths.Add(FilePath);
	}
	return FilePaths;
}

bool UGKitFileFunLib::ReadCsv(FString Path, TArray<FGKitCsvData>& CsvData)
{
	if (!FPaths::FileExists(Path))
	{
		UE_LOG(LogGKit, Error, TEXT("%s is not exists"), *Path);
		return false;
	}
	FString CsvString;
	TArray<uint8> FileBufffer;
	if (FFileHelper::LoadFileToArray(FileBufffer, *Path))
	{
		UGKitStrFunLib::EncodeToUtf8(CsvString, FileBufffer.GetData(), (int32)FileBufffer.Num());
	}

	const FCsvParser Parser(CsvString);
	const FCsvParser::FRows& Rows = Parser.GetRows();
	for (int RowIndex = 0; RowIndex < Rows.Num(); RowIndex++)
	{
		FGKitCsvData CsvDataCol;
		for (int ColIndex = 0; ColIndex < Rows[RowIndex].Num(); ColIndex++)
		{
			CsvDataCol.Data.Add(FString(Rows[RowIndex][ColIndex]));
		}
		CsvData.Add(CsvDataCol);
	}
	return true;
}

void UGKitFileFunLib::WriteCsv(FString Path, TArray<FGKitCsvData> CsvData)
{
	if (FPaths::GetExtension(Path) != TEXT("csv"))
	{
		UE_LOG(LogGKit, Error, TEXT("The file format is incorrect : "), *Path);
		return;
	}
	if (CsvData.IsEmpty())
	{
		UE_LOG(LogGKit, Error, TEXT("The length of the array CsvData is %d"), CsvData.Num());
		return;
	}
	FString Content;
	for (int32 RowIndex = 0; RowIndex < CsvData.Num(); RowIndex++)
	{
		FGKitCsvData Cols = CsvData[RowIndex];
		FString RowStr;
		for (int32 ColIndex = 0; ColIndex < Cols.Data.Num(); ColIndex++)
		{
			
			RowStr += TEXT("\"") + Cols.Data[ColIndex] + TEXT("\"") + TEXT(",");
	
		}
		RowStr = RowStr.LeftChop(1);
		Content += RowStr + LINE_TERMINATOR;
	}
	FFileHelper::SaveStringToFile(Content, *Path,FFileHelper::EEncodingOptions::ForceUTF8);
}

void UGKitFileFunLib::ConvertCvsDataToCsvDataWithHeader(const TArray<FGKitCsvData>& CsvData,TArray<FGkitCsvDataWithHeader>& CsvDataWithHeader)
{
	if(CsvData.IsEmpty())
	{
		UE_LOG(LogGKit,Error,TEXT("Array CsvData is empty"));
		return;
	}
	if(CsvData.Num() <= 1)
	{
		UE_LOG(LogGKit,Warning,TEXT("The datasheet has only the header"));
		return;
	}
	FGKitCsvData TableHeader = CsvData[0];
	for(int i=1;i<CsvData.Num();++i)
	{
		FGKitCsvData DataRow = CsvData[i];
		TMap<FString,FString> LineMap;
		for(int j=0;j<DataRow.Data.Num();++j)
		{
			LineMap.Add(TableHeader.Data[j],DataRow.Data[j]);
		}
		FGkitCsvDataWithHeader Data;
		Data.Data = LineMap;
		CsvDataWithHeader.Add(Data);
	}
}


void UGKitFileFunLib::OpenMultiFileDialog(TArray<FString>& FilePaths, FString FileTypes)
{
	const FString DialogTitle = TEXT("GKitMultiFileDialog");
	const FString DefaultPath = FPaths::ProjectDir();
	FileTypes = TEXT("文件类型|") + FileTypes;
	FDesktopPlatformModule::Get()->OpenFileDialog(nullptr, DialogTitle, DefaultPath, TEXT(""), FileTypes, EFileDialogFlags::Multiple, FilePaths);
}

void UGKitFileFunLib::OpenSingleFileDialog(FString& FilePath, FString FileType)
{
	TArray<FString> FileNames;
	const FString DialogTitle = TEXT("GKitSingleFileDialog");
	const FString DefaultPath = FPaths::ProjectDir();
	FileType = TEXT("文件类型|") + FileType;
	FDesktopPlatformModule::Get()->OpenFileDialog(nullptr, DialogTitle, DefaultPath, TEXT(""), FileType, EFileDialogFlags::None, FileNames);
	if (FileNames.Num() > 0)
	{
		FilePath = FileNames[0];
	}
}

TSharedPtr<IImageWrapper> UGKitFileFunLib::GetImageWrapperByExtention(const FString& ImagePath)
{
	IImageWrapperModule& Module = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	if(ImagePath.EndsWith(".png"))
	{
		return Module.CreateImageWrapper(EImageFormat::PNG);
	}
	if(ImagePath.EndsWith(".jpg") || ImagePath.EndsWith(".jpeg"))
	{
		return Module.CreateImageWrapper(EImageFormat::JPEG);
	}
	return nullptr;
}
