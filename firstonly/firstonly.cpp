/*
描述	
找出字符串中第一个只出现一次的字符
详细描述：
接口说明
原型：
bool FindChar(char* pInputString, char* pChar);
输入参数：
char* pInputString：字符串
输出参数（指针指向的内存区域保证有效）：
char* pChar：第一个只出现一次的字符
如果无此字符 请输出'.'
 
知识点	字符串,循环
运行时间限制	10M
内存限制	128
输入	
输入一串字符
输出	
输出一个字符
样例输入	asdfasdfo
样例输出	o
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

char find(string inputChar)
{
   int len=inputChar.size();

   for(int i=0;i<len;i++)
   { 
	   int flag=0;   //标识位，0表示这个字符只出现一次。
	   for(int j=i+1;j<len;j++)
	   {
            if(inputChar[i]==inputChar[j])
			{
				flag=1;   //1表示在当前字符后面存在于该字符相同的字符。
			}
	   }
	   if(flag==0)
		   return inputChar[i];
	   else 
		   return '.';
   }

   
}

void main()
{
   string M;
   getline(cin,M);
   char s=find(M);
   cout<<s;
}