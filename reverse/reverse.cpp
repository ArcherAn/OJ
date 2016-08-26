/*
描述	
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。例如：
知识点	数组,指针
运行时间限制	10M
内存限制	128
输入	
输入N个字符
输出	
输出该字符串反转后的字符串
样例输入	abcd
样例输出	dcba
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

void reverse(string str)
{
	int len=str.size();
	for(int i=len-1;i>=0;i--)
	{
        cout<<str[i];
	}
}

void main()
{
	string A;
	getline(cin,A);
	reverse(A);
}
