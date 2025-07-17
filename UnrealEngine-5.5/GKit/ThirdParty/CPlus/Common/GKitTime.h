#include <time.h>
#include <string>
#include <vector>
#include <map>
#include "GKitStr.h"

namespace GlobalManager
{
	namespace Time
	{
		// 算式标识
		enum class OpeTag
		{
			Add,// 加法
			Sub,// 减法
			Mul,// 乘法
			Div,// 除法
			Rem,// 求余
			Squ,// 平方
			Cub,// 立方
			Squr,// 平方根
			Cubr,// 立方根
			Pow,// 求幂
			Rot,// 取根
		};
		// 时间运算，支持时间加与时间减
		inline std::tm TimeOperator(const std::tm& Time1,const std::tm& Time2,const OpeTag Ope = OpeTag::Add)
		{
			std::tm RelTime = {0};
			std::map<int,int> MonMap = {
				{1,31},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}
			};
			// 年份能被100整除，则年份为世纪年
			if(Time1.tm_year%100==0)
			{
				// 世纪年能被400整除，则为闰年，否则不是闰年
				if(Time1.tm_year%400==0)
				{
					MonMap.insert(std::pair<int,int>(2,29));
				}
				else
				{
					MonMap.insert(std::pair<int,int>(2,28));
				}
			}
			else
			{
				// 非世纪年能被4整除，则为闰年，否则不是闰年
				if(Time1.tm_year%4==0)
				{
					MonMap.insert(std::pair<int,int>(2,29));
				}
				else
				{
					MonMap.insert(std::pair<int,int>(2,28));
				}
			}

			int Sec=0,Min=0,Hour=0,Day=0,Mon=0,Year=0;
			bool bSec = false,bMin = false,bHour = false,bDay = false,bMon = false;
			if(Ope == OpeTag::Add)
			{
				Sec = Time1.tm_sec + Time2.tm_sec;
				if(Sec >= 60)
				{
					Sec -= 60;
					bSec = true;
				}
				Min = Time1.tm_min + Time2.tm_min;
				if(bSec){Min += 1;bSec=false;}
				if(Min >= 60)
				{
					Min -= 60;
					bMin = true;
				}
				Hour = Time1.tm_hour + Time2.tm_hour;
				if(bMin){Hour+=1;bMin=false;}
				if(Hour >= 24)
				{
					Hour -= 24;
					bHour = true;
				}
				Day = Time1.tm_mday + Time2.tm_mday;
				if(bHour){Day+=1;bHour=false;}
				if(Day>=MonMap[Time1.tm_mon])
				{
					Day -= MonMap[Time1.tm_mon];
					bDay = true;
				}
				Mon = Time1.tm_mon + Time2.tm_mon;
				if(bDay){Mon+=1;bDay=false;}
				if(Mon > 12)
				{
					Mon -= 12;
					bMon = true;
				}
				Year = Time1.tm_year + Time2.tm_year;
				if(bMon){Year+=1;bMon=false;}
			}
			if(Ope == OpeTag::Sub)
			{
				Sec = Time1.tm_sec - Time2.tm_sec;
				if(Sec < 0)
				{
					bSec = true;
				}
				Min = Time1.tm_min - Time2.tm_min;
				if(bSec)
				{
					Min--;
					Sec = 60 + Sec;//Sec<0
					bSec = false;
				}
				bMin = Min<0?true:false;
				Hour = Time1.tm_hour - Time2.tm_hour;
				if(bMin)
				{
					Hour--;
					Min = 60 + Min;//Min<0
					bMin = false;
				}
				bHour = Hour<0?true:false;
				Day = Time1.tm_mday - Time2.tm_mday;
				if(bHour)
				{
					Day--;
					Hour = 24 + Hour;//Hour<0
					bHour = false;
				}
				bDay = Day<1?true:false;
				Mon = Time1.tm_mon - Time2.tm_mon;
				if(bDay)
				{
					Mon--;
					Day = MonMap[Mon] + Day;//Day<0
					bDay = false;
				}
				bMon = Mon<1?true:false;
				Year = Time1.tm_year - Time2.tm_year;
				if(bMon)
				{
					Year--;
					Mon = 12 + Mon;//Mon<0;
					bMon = false;
				}
				if(Year < 1900)//C++ time函数获取的是自1900年之后过去了多少年,当计算的年份小于1900时，可能会出现表示问题
				{
					return RelTime;
				}
			}
			RelTime.tm_year = Year;
			RelTime.tm_mon = Mon;
			RelTime.tm_mday = Day;
			RelTime.tm_hour = Hour;
			RelTime.tm_min = Min;
			RelTime.tm_sec = Sec;
			return RelTime;
		}
		// 比较两个std::tm格式的时间的大小，返回-1表示Time1<Time2，返回1表示Time1>Time2,返回0表示Time1=Time2
		inline int TmCompare(const std::tm Time1,const std::tm Time2)
		{
			int Year = Time1.tm_year - Time2.tm_year;
			int Mon = Time1.tm_mon - Time2.tm_mon;
			int Day = Time1.tm_mday - Time2.tm_mday;
			int Hour = Time1.tm_hour - Time2.tm_hour;
			int Min = Time1.tm_min - Time2.tm_min;
			int Sec = Time1.tm_sec - Time2.tm_sec;
			if(Year < 0){return -1;}
			if(Year > 0){return 1;}
			if(Mon < 0){return -1;}
			if(Mon > 0){return 1;}
			if(Day < 0){return -1;}
			if(Day > 0){return 1;}
			if(Hour < 0){return -1;}
			if(Hour > 0){return 1;}
			if(Min < 0){return -1;}
			if(Min > 0){return 1;}
			if(Sec < 0){return -1;}
			if(Sec > 0){return 1;}
			return 0;
		}
		// 时间字符串转Tm，时间字符串格式为：xxxx-xx-xx xx:xx:xx
		inline std::tm StringToTm(const std::string& TimeStr)
		{
			std::tm Time = {0};
			std::vector<std::string> DateAndTimeVec = GKit::Str::SplitString(TimeStr," ");
			if(DateAndTimeVec.size() == 2)
			{
				std::vector<std::string> DateVec = GKit::Str::SplitString(DateAndTimeVec[0],"-");
				if(DateVec.size() == 3)
				{
					Time.tm_year = std::stoi(DateVec[0]);
					Time.tm_mon = std::stoi(DateVec[1]);
					Time.tm_mday = std::stoi(DateVec[2]);
				}
				else
				{
					return Time;
				}
				std::vector<std::string> TimeVec = GKit::Str::SplitString(DateAndTimeVec[1],":");
				if(TimeVec.size() == 3)
				{
					Time.tm_hour = std::stoi(TimeVec[0]);
					Time.tm_min = std::stoi(TimeVec[1]);
					Time.tm_sec = std::stoi(TimeVec[2]);
					return Time;
				}
				else
				{
					return Time;
				}
			}
			else
			{
				std::vector<std::string> DateVec = GKit::Str::SplitString(DateAndTimeVec[0],"-");
				if(DateVec.size() == 3)
				{
					Time.tm_year = std::stoi(DateVec[0]);
					Time.tm_mon = std::stoi(DateVec[1]);
					Time.tm_mday = std::stoi(DateVec[2]);
					return Time;
				}
				return Time;
			}
		}

		// Tm时间转字符串，字符串格式:xxxx-xx-xx xx:xx:xx
		inline std::string TmToString(std::tm Time)
		{
			return std::to_string(Time.tm_year)+"-"+std::to_string(Time.tm_mon)+"-"+std::to_string(Time.tm_mday)+" "+
				std::to_string(Time.tm_hour)+":"+std::to_string(Time.tm_min)+":"+std::to_string(Time.tm_sec);
		}
		// 获取本机当前时间
		inline std::tm GetNowLocalTime()
		{
			std::time_t Timet = std::time(NULL);
			std::tm Tm;
			localtime_s(&Tm,&Timet);
			//time函数获取的是自1900年之后过去了多少年，所以计算具体年份时需要加上1900
			Tm.tm_year += 1900;
			//tm结构体中tm_mon的表示范围为[0-11],所以在表示具体月份时许需要加1
			Tm.tm_mon += 1;
			return Tm;
		}
	}
}

