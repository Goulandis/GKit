#include "GKitStrFunLib.h"
#include <string>
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/MinWindows.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include "../../../../CPlus/Common/GKitStr.h"

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

TArray<FString> UGKitStrFunLib::StringSplitToWords(FString InStr)
{
	std::vector<std::string> Words = GKit::Str::SplitTextToWord(TCHAR_TO_UTF8(*InStr));
	TArray<FString> OutWords;
	for (std::string Word : Words)
	{
		OutWords.Add(FString(Word.c_str()));
	}
	return OutWords;
}

void UGKitStrFunLib::EncodeToUtf8(FString& Result, const uint8* Buffer, int32 Size)
{
	bool bNeedUEConvert = true;
	Encode StrEncode = DetectEncode(Buffer, Size);
	if (StrEncode == Encode::UTF8 || StrEncode == Encode::UTF8_BOM)
	{
		bNeedUEConvert = true;
	}
	else
	{
		// 将​多字节编码字符串​（如 ANSI、UTF - 8）转换为 ​宽字符（Unicode）字符串​（wchar_t）
		// 成功：返回目标宽字符串的字符数（不包括终止符 \0）
		// 失败：返回 0，可通过 GetLastError() 获取错误码（如 ERROR_INSUFFICIENT_BUFFER）	
		int32 UnicodeLen = ::MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, reinterpret_cast<const ANSICHAR*>(Buffer), Size, nullptr, 0);
		if (UnicodeLen > 0)
		{
			TArray<TCHAR>& ResultArray = Result.GetCharArray();
			ResultArray.Empty();
			ResultArray.AddUninitialized(UnicodeLen + 1); // 长度+1是为了在转换后在字符串末尾加\0字符
			// 将Buffer中的字符转换成Unicode编码的字符并存储到ResultArray中
			int32 WritedTCharLens = ::MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, reinterpret_cast<const ANSICHAR*>(Buffer), Size, ResultArray.GetData(), UnicodeLen);
			if (WritedTCharLens > 0)
			{
				// 如果转换成功，则在字符串末尾添加\0字符
				ResultArray[UnicodeLen] = TEXT('\0');
				bNeedUEConvert = false;
			}
			else
			{
				ResultArray.Empty();
			}

		}
	}
	if (bNeedUEConvert)
	{
		FFileHelper::BufferToString(Result, Buffer, Size);
	}
}

Encode UGKitStrFunLib::EncodeIsUtf8(const uint8* data, int32 size)
{
	bool bAnsi = true;
	uint8_t ch = 0x00;
	int32_t nBytes = 0;
	for (auto i = 0; i < size; i++)
	{
		ch = *(data + i);
		if ((ch & 0x80) != 0x00)
		{
			bAnsi = false;
		}
		if (nBytes == 0)
		{
			if (ch >= 0x80)
			{
				if (ch >= 0xFC && ch <= 0xFD)
				{
					nBytes = 6;
				}
				else if (ch >= 0xF8)
				{
					nBytes = 5;
				}
				else if (ch >= 0xF0)
				{
					nBytes = 4;
				}
				else if (ch >= 0xE0)
				{
					nBytes = 3;
				}
				else if (ch >= 0xC0)
				{
					nBytes = 2;
				}
				else
				{
					return Encode::ANSI;
				}
				nBytes--;
			}
		}
		else
		{
			if ((ch & 0xC0) != 0x80)
			{
				return Encode::ANSI;
			}
			nBytes--;
		}
	}
	if (nBytes > 0 || bAnsi)
	{
		return Encode::ANSI;
	}
	return Encode::UTF8;
}

Encode UGKitStrFunLib::DetectEncode(const uint8* data, int32 size)
{
	if (size > 2 && data[0] == 0xFF && data[1] == 0xFE)
	{
		return Encode::UTF16_LE;
	}
	else if (size > 2 && data[0] == 0xFE && data[1] == 0xFF)
	{
		return Encode::UTF16_BE;
	}
	else if (size > 3 && data[0] == 0xEF && data[1] == 0xBB && data[2] == 0xBF)
	{
		return Encode::UTF8_BOM;
	}
	else
	{
		return EncodeIsUtf8(data, size);
	}
}
