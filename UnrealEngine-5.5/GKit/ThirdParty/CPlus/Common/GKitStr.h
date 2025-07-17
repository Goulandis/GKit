#include <map>
#include <regex>
#include <string>
#include <vector>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

namespace GKit
{
	namespace Str
	{
		// 判断字符串是否匹配数学算式
		inline bool RegexMathFormulas(const std::string& Text)
		{
			std::regex rp(R"((\d+\s*[\+\-\*/\^%]\s*)+\d+)");
			return std::regex_search(Text,rp);
		}
		// 判断一句话是否包含中文
		inline bool IsChinese(const std::string& Text)
		{
			const char* TChar = Text.data();
			char Chr;
			while(true)
			{
				Chr = *TChar++;
				// 如果字符串直到结尾都没有出现中文字符，则认为字符串为其他语言
				if(Chr == 0)
				{
					break;
				}
				// 如果字符串中出现了中文，则认为字符串为中文
				if((Chr & 0x80) && (*TChar & 0x80))
				{
					return true;
				}
			}
			return false;
		}
		// 分割字符串
		inline std::vector<std::string> SplitString(std::string Str,const char* Separator)
		{
			char* ptr = NULL;
			char* p = strtok_s(Str.data(),Separator,&ptr);
			std::vector<std::string> LineVec;
			while (p)
			{
				LineVec.push_back(p);
				p = strtok_s(NULL,Separator,&ptr);
			}
			return LineVec;
		}
		// 将一句话拆分成一个个的字，支持纯中文、纯英文和中英文混合
		inline std::vector<std::string> SplitTextToWord(const std::string& Text)
		{
			int Num = Text.size();
			int i = 0;
			std::vector<std::string> RelVec;
			while(i < Num)
			{
				int size = 1;
				if(Text[i] & 0x80)
				{
					char Chr = Text[i];
					Chr <<= 1;
					do
					{
						Chr <<= 1;
						++size;
					}
					while (Chr & 0x80);
				}
				std::string Word = Text.substr(i,size);
				RelVec.push_back(Word);
				i += size;
			}
			return RelVec;
		}
		// 字符串数值转整型数值，支持中文字符串和数字字符串
		inline __int64 StrValueToIntValue(const std::string NumWord)
		{
			std::map<std::string,int> ChineseNumMap = {
				{"零",0},{"一",1},{"二",2},{"两",2},{"三",3},{"四",4},{"五",5},{"六",6},{"七",7},{"八",8},{"九",9},
				{"十",10},{"百",100},{"千",1000},{"万",10000},{"亿",100000000},
				{"0",0},{"1",1},{"2",2},{"3",3},{"4",4},{"5",5},{"6",6},{"7",7},{"8",8},{"9",9},
			};
			std::vector<std::string> SingleNumVec = GKit::Str::SplitTextToWord(NumWord);
			__int64 Rel = 0, Tmp = 0, HndMln = 0, Float = 0;
			__int64 CurrDigit;
			std::string Point = "";
			for (std::string Word : SingleNumVec)
			{
				if (ChineseNumMap.find(Word) == ChineseNumMap.end())
				{
					break;
				}
				CurrDigit = ChineseNumMap[Word];
				// 处理亿位数
				if (CurrDigit == std::pow(10, 8))
				{
					Rel += Tmp;
					Rel *= CurrDigit;
					HndMln = HndMln * std::pow(10, 8) + Rel;
					Rel = 0;
					Tmp = 0;
				}
				// 处理万位数
				else if (CurrDigit == pow(10, 4))
				{
					Rel += Tmp;
					Rel *= CurrDigit;
					Tmp = 0;
				}
				// 处理千、百、十位数
				else if (CurrDigit >= 10)
				{
					if (Tmp == 0)
					{
						Tmp = 1;
					}
					Rel = Rel + CurrDigit * Tmp;
					Tmp = 0;
				}
				// 处理个位数
				else
				{
					Tmp = Tmp * 10 + CurrDigit;
				}
			}
			Rel += Tmp;
			Rel += HndMln;
			return Rel;
		}
	}
	
}

