/*
����:	
     ����һ�����֣���������26���ַ�����ɣ���������ַ����ġ�Ư���ȡ�����������ĸ��Ư���ȡ����ܺ͡�
     ÿ����ĸ����һ����Ư���ȡ�����Χ��1��26֮�䡣û���κ�������ĸӵ����ͬ�ġ�Ư���ȡ�����ĸ���Դ�Сд��
     ����������֣�����ÿ�����������ܵġ�Ư���ȡ���
֪ʶ��:
	�ַ���
����ʱ������	0M
�ڴ�����	0
����:	
����N������N������
N���ַ�����ÿ����ʾһ������

���:	
ÿ�����ƿ��ܵ����Ư���̶�
��������	2 
            zhangsan 
			lisi
�������	192 
            101

*/
#include <iostream>
#include <string>
#include <algorithm>   //�ṩ������
#include <ctype.h>
using namespace std;

int Beauty(char a[])
{
	int b[26]={0};  //�洢ÿ���ַ��ĸ���
	int sum=0;
	for(int i=0;a[i]!='\0';i++)
	{
		a[i]=tolower(a[i]);  //ȫ����ת����Сд
	}
	for(int j=0; a[j]!='\0'; j++)
	{
		b[a[j]-97]++;
	}
	sort(b,b+26);
	for(int k=25; k>=0; k--)
	{
		sum+=(k+1)*b[k];
	}
	return sum;
}

int main()
{   
	int M;
	char array[100][100];
	cin>>M;
	getchar(); //����س�
	for(int i=0;i<M;i++)
		gets(array[i]);
	for(int m=0;m<M;m++)
		cout<<Beauty(array[m])<<endl; 
	return 0;
}