#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

/*
д��һ�����򣬽���һ������ĸ�������Լ��ո���ɵ��ַ�����
��һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд��
*/
int count(string str,char ss)  
{    
	/*
	�������ַ���ȫ��ת��Ϊ��д�ַ�
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


