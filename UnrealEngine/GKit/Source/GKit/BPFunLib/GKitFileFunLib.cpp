#include "GKitFileFunLib.h"
#include "IImageWrapperModule.h"
#include "HAL/FileManager.h"
#include <string>
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include "Windows/HideWindowsPlatformTypes.h"
#include <codecvt>
#include <corecrt_io.h>

DEFINE_LOG_CATEGORY(LogGKit);

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
				void* TexData = Tex->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TexData,UncompressedRGBBA.GetData(),UncompressedRGBBA.Num());
				Tex->PlatformData->Mips[0].BulkData.Unlock();
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
	//std::wstring* wp;
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
