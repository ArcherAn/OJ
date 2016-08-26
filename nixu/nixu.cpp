/*
描述	
将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。 如：输入“I am a student”，输出“tneduts a ma I”。
输入参数：
inputString：输入的字符串

返回值：
输出转换好的逆序字符串
 
知识点	字符串
运行时间限制	10M
内存限制	128
输入	
输入一个字符串，可以有空格
输出	
输出逆序的字符串
样例输入	I am a student
样例输出	tneduts a ma I
*/

#include <iostream>
#include <string>
using namespace std;

void main()
{
	string A;
	string B;
	getline(cin, A);
	int length=A.length();
	getchar();
	for(int k=length-1;k>=0;k--)
	{
		cout<<A[k];
	}
}