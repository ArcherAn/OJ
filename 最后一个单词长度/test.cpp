#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;


int count(string str){               /*  统计字符串最后一个单词的长度  */
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

    string A;                // 输入一个字符串
	getline(cin,A);
	cout<<count(A);
	
}