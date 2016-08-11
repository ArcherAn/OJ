#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

/*
写出一个程序，接受一个有字母和数字以及空格组成的字符串，
和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
*/
int count(string str,char ss)  
{    
	/*
	将所有字符串全部转换为大写字符
	*/
	for(int j=0;j<str.length();j++)
	{
		if(islower(str[j]))
		{
            str[j]=toupper(str[j]);
		}
	}
	if(islower(ss))
	{
		ss=toupper(ss);
	}
    int count = 0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==ss)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string A;
	char m;
	getline(cin,A);
	cin>>m;
	cout<<count(A,m);
	return 0;
}


