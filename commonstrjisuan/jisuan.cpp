/*
����	
��Ŀ���⣺
���������ַ�������󹫹��ִ��ĳ��ȣ��ַ������ִ�Сд
��ϸ������
�ӿ�˵��
ԭ�ͣ�
int getCommonStrLength(char * pFirstStr, char * pSecondStr);
���������
     char * pFirstStr //��һ���ַ���
     char * pSecondStr//�ڶ����ַ���
 
֪ʶ��	�ַ���,����
����ʱ������	10M
�ڴ�����	128
����	
���������ַ���
���	
���һ������
��������	asdfas werasdfaswer
�������	6
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <strstream>
using namespace std;

int getCommonStrLength(char pFirstStr[], char pSecondStr[])
{
	int start1,start2;
	int count=0,Max=0;
    for(int i=0;pFirstStr[i]!='\0';i++)
	{
		pFirstStr[i]=tolower(pFirstStr[i]);  //ȫ����ת����Сд
	}
	for(int j=0;pSecondStr[j]!='\0';j++)
	{
		pSecondStr[j]=tolower(pSecondStr[j]);  //ȫ����ת����Сд
	}

	for(int k=0;pFirstStr[k]!='\0';k++)
		for(int l=0;pSecondStr[l]!='\0';l++)
		{
			start1=k;start2=l;
			while(pFirstStr[start1]==pSecondStr[start2] && start1<strlen(pFirstStr) && start2<strlen(pSecondStr))
			{
				start1++;
				start2++;
				count++;
			}
			if(count>Max)
				Max=count;
			count=0;
		}
		return Max;
}

void main()
{ 
   /*
   char pFirstStr[100];
   char pSecondStr[100];
   gets(pFirstStr);
   gets(pSecondStr);
   */
   char hebing[100];
   gets(hebing);
   char pFirstStr[100];
   char pSecondStr[100];
   istrstream strin(hebing); //����һ���ַ������������󣬲�ָ��sΪ�����ַ���
   strin >>pFirstStr >>pSecondStr; //��s�ж�ȡ�ַ���
   cout<<getCommonStrLength(pFirstStr,pSecondStr);

}