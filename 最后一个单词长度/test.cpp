#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;


int count(string str){               /*  ͳ���ַ������һ�����ʵĳ���  */
	int count=0;
	int num=0;
    for(int i=0;i<str.length();i++)
	{
		if(str[i]==' '){
			count++;
		}
	}
	if(count==0){
	   num= str.length();
	   return num; 
	}else
	{
        for(int j=str.length()-1;j>=0;j--)
		{
			if(str[j]==' ')
			{
				break;
			}else
			{
				num++;
			}
		}
		return num;
	}
}


void main(){

    string A;                // ����һ���ַ���
	getline(cin,A);
	cout<<count(A);
	
}