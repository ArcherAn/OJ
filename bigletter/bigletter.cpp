/*
����	
�ҳ������ַ����д�д�ַ�(��'A'-'Z')�ĸ���
�ӿ�˵��
    ԭ�ͣ�int CalcCapital(String str);
    ����ֵ��int
 
 
֪ʶ��	�ַ���
����ʱ������	10M
�ڴ�����	128
����	
����һ��String����
���	
���string�д�д��ĸ�ĸ���
�迼���ַ���Ϊ��  ���Ϊ�����0
��������	add123#$%#%#A
�������	1
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

int CalcCapital(string str)
{
   int len=str.size();  //���ַ�������  or  str.length()
   int count=0;
   if(str.empty())      //�ж��ַ����Ƿ�Ϊ��
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