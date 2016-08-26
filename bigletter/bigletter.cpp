/*
描述	
找出给定字符串中大写字符(即'A'-'Z')的个数
接口说明
    原型：int CalcCapital(String str);
    返回值：int
 
 
知识点	字符串
运行时间限制	10M
内存限制	128
输入	
输入一个String数据
输出	
输出string中大写字母的个数
需考虑字符串为空  如果为空输出0
样例输入	add123#$%#%#A
样例输出	1
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

int CalcCapital(string str)
{
   int len=str.size();  //求字符串长度  or  str.length()
   int count=0;
   if(str.empty())      //判断字符串是否为空
   {
	   return 0;
   }
   else
   {
     for(int i=0;str[i]!='\0';i++)
	 {
		 if(str[i]<=90 && str[i]>=65)
			 count++;
	 }
   }
   return count;
}

void main()
{
   string A;
   getline(cin,A);
   int result=CalcCapital(A);
   cout<<result;
}