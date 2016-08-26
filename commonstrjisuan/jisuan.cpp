/*
描述	
题目标题：
计算两个字符串的最大公共字串的长度，字符不区分大小写
详细描述：
接口说明
原型：
int getCommonStrLength(char * pFirstStr, char * pSecondStr);
输入参数：
     char * pFirstStr //第一个字符串
     char * pSecondStr//第二个字符串
 
知识点	字符串,查找
运行时间限制	10M
内存限制	128
输入	
输入两个字符串
输出	
输出一个整数
样例输入	asdfas werasdfaswer
样例输出	6
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <strstream>
using namespace std;

int getCommonStrLength(char pFirstStr[], char pSecondStr[])
{
	int start1,start2;
	int count=0,Max=0;
    for(int i=0;pFirstStr[i]!='\0';i++)
	{
		pFirstStr[i]=tolower(pFirstStr[i]);  //全部先转换成小写
	}
	for(int j=0;pSecondStr[j]!='\0';j++)
	{
		pSecondStr[j]=tolower(pSecondStr[j]);  //全部先转换成小写
	}

	for(int k=0;pFirstStr[k]!='\0';k++)
		for(int l=0;pSecondStr[l]!='\0';l++)
		{
			start1=k;start2=l;
			while(pFirstStr[start1]==pSecondStr[start2] && start1<strlen(pFirstStr) && start2<strlen(pSecondStr))
			{
				start1++;
				start2++;
				count++;
			}
			if(count>Max)
				Max=count;
			count=0;
		}
		return Max;
}

void main()
{ 
   /*
   char pFirstStr[100];
   char pSecondStr[100];
   gets(pFirstStr);
   gets(pSecondStr);
   */
   char hebing[100];
   gets(hebing);
   char pFirstStr[100];
   char pSecondStr[100];
   istrstream strin(hebing); //定义一个字符串输入流对象，并指定s为输入字符串
   strin >>pFirstStr >>pSecondStr; //从s中读取字符串
   cout<<getCommonStrLength(pFirstStr,pSecondStr);

}