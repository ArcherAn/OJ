/*
����	
���7�й����ֵĸ���������7�ı��������а���7�����֣���17��27��37...70��71��72��73...���ĸ���
֪ʶ��	ѭ��
����ʱ������	0M
�ڴ�����	0
����	
һ��������N��(N������30000)
���	
������N����7�йص����ָ�������������20����7�йص����ְ���7,14,17.
��������	20
�������	3
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

void main()
{
	int N;
	cin>>N;
	int count=0;
	for(int i=1;i<=N;i++)
	{
       if(i%7==0)
	   {
		   count++;
	   }
	   else
	   {
		   int temp=i;
		   while(temp>0)
		   {
			   if(temp%10==7)
			   {
				   count++;
				   break;
			   }
			   temp=temp/10;
		   }
	   }
	}
	cout<<count;
}