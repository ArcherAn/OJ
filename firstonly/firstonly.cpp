/*
����	
�ҳ��ַ����е�һ��ֻ����һ�ε��ַ�
��ϸ������
�ӿ�˵��
ԭ�ͣ�
bool FindChar(char* pInputString, char* pChar);
���������
char* pInputString���ַ���
���������ָ��ָ����ڴ�����֤��Ч����
char* pChar����һ��ֻ����һ�ε��ַ�
����޴��ַ� �����'.'
 
֪ʶ��	�ַ���,ѭ��
����ʱ������	10M
�ڴ�����	128
����	
����һ���ַ�
���	
���һ���ַ�
��������	asdfasdfo
�������	o
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

char find(string inputChar)
{
   int len=inputChar.size();

   for(int i=0;i<len;i++)
   { 
	   int flag=0;   //��ʶλ��0��ʾ����ַ�ֻ����һ�Ρ�
	   for(int j=i+1;j<len;j++)
	   {
            if(inputChar[i]==inputChar[j])
			{
				flag=1;   //1��ʾ�ڵ�ǰ�ַ���������ڸ��ַ���ͬ���ַ���
			}
	   }
	   if(flag==0)
		   return inputChar[i];
	   else 
		   return '.';
   }

   
}

void main()
{
   string M;
   getline(cin,M);
   char s=find(M);
   cout<<s;
}