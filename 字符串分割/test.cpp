/*
连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
长度不是8整数倍的字符串请在后面补数字0，空字符串不处理

输入描述：连续输入字符串(输入2次,每个字符串长度小于100
输出描述：输出到长度为8的新字符串数组

输入例子：
          abc
          123456789

输出例子：
		  abc00000
		  12345678
		  90000000
*/
       
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
#define MAX_SIZE 100
using namespace std;


void outputstr(string str)
{
    int quotient = str.length()/8;
	int remainder = str.length()%8;
	int count = 0;
	for(int i =0;i<quotient;i++)
	{
		string substr = str.substr(count,8);           //substr(起始位置，截取子字符串个数)
		cout<<substr<<endl;
		count +=8;
	}
	if(remainder !=0)
	{
		cout<<str.substr(count,8);
		for(int j=remainder;j<8;j++)
		{
			cout<<"0";
		}
		cout<<endl;
	}
}

int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	if(str1.length() > MAX_SIZE || str1.length() < 1 ||str2.length() > MAX_SIZE || str2.length() < 1)
	{
		cout<<"error"<<endl;
	}
	else{
		outputstr(str1);
		outputstr(str2);
	}
	return 0;
}
