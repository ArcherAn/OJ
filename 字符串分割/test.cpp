/*
���������ַ������밴����Ϊ8���ÿ���ַ�����������µ��ַ������飻
���Ȳ���8���������ַ������ں��油����0�����ַ���������

�������������������ַ���(����2��,ÿ���ַ�������С��100
������������������Ϊ8�����ַ�������

�������ӣ�
          abc
          123456789

������ӣ�
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
		string substr = str.substr(count,8);           //substr(��ʼλ�ã���ȡ���ַ�������)
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
