/*
����	
��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ��� �磺���롰I am a student���������tneduts a ma I����
���������
inputString��������ַ���

����ֵ��
���ת���õ������ַ���
 
֪ʶ��	�ַ���
����ʱ������	10M
�ڴ�����	128
����	
����һ���ַ����������пո�
���	
���������ַ���
��������	I am a student
�������	tneduts a ma I
*/

#include <iostream>
#include <string>
using namespace std;

void main()
{
	string A;
	string B;
	getline(cin, A);
	int length=A.length();
	getchar();
	for(int k=length-1;k>=0;k--)
	{
		cout<<A[k];
	}
}