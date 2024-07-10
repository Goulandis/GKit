#include "GKitStrFunLib.h"

FString UGKitStrFunLib::AESEncrypt(FString Input, FString Key)
{
	if(Input.IsEmpty() || Key.IsEmpty())
	{
		return "";
	}
	FString SignStartStr = "=-StartCheck-=";
	FString SignEndStr = "=-EndCheck-=";
	Input = SignStartStr + Input;
	Input.Append(SignEndStr);

	TArray<uint8> Content;
	std::string _s(TCHAR_TO_UTF8(*Input));
	Content.Append((unsigned char*)_s.data(),_s.size());
	Input = FBase64::Encode(Content);

	FString SpliteSymbol = "@GKit";
	Input.Append(SpliteSymbol);
	Key = FMD5::HashAnsiString(*Key);
	TCHAR* KeyTChar = Key.GetCharArray().GetData();
	ANSICHAR* KeyAnsi = (ANSICHAR*)TCHAR_TO_ANSI(KeyTChar);
	
	uint32 Size = Input.Len();
	Size = Size + (FAES::AESBlockSize - Size % FAES::AESBlockSize);
	uint8* Blob = new uint8[Size];
	if(StringToBytes(Input,Blob,Size))
	{
		FAES::EncryptData(Blob,Size,KeyAnsi);
		Input = FString::FromHexBlob(Blob,Size);
		delete Blob;
		return Input;
	}
	delete Blob;
	return "";
}

FString UGKitStrFunLib::AESDecrypt(FString Input, FString Key)
{
	if(Input.IsEmpty() || Key.IsEmpty())
	{
		return "";
	}
	FString SpliteSymbol = "@GKit";
	Key = FMD5::HashAnsiString(*Key);
	TCHAR* KetTChar = Key.GetCharArray().GetData();
	ANSICHAR* KeyAnsi = (ANSICHAR*)TCHAR_TO_ANSI(KetTChar);
	uint32 Size = Input.Len();
	Size = Size + (FAES::AESBlockSize - Size % FAES::AESBlockSize);
	uint8* Blob = new uint8[Size];
	if(FString::ToHexBlob(Input,Blob,Size))
	{
		FAES::DecryptData(Blob,Size,KeyAnsi);
		Input = BytesToString(Blob,Size);
		FString LeftData,RightData;
		Input.Split(SpliteSymbol,&LeftData,&RightData,ESearchCase::CaseSensitive,ESearchDir::FromStart);
		Input = LeftData;
		TArray<uint8> Content;
		FBase64::Decode(Input,Content);
		Input = FString(UTF8_TO_TCHAR(Content.GetData()));
		FString SignStartStr = "=-StartCheck-=";
		FString SignEndStr = "=-EndCheck-=";
		Input.Split(SignStartStr,&LeftData,&RightData,ESearchCase::CaseSensitive, ESearchDir::FromStart);
		Input = RightData;
		Input.Split(SignEndStr,&LeftData,&RightData,ESearchCase::CaseSensitive, ESearchDir::FromStart);
		Input = LeftData;
		delete Blob;
		return Input;
	}
	delete Blob;
	return "";
}
