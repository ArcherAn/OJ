/*
����	
д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������磺
֪ʶ��	����,ָ��
����ʱ������	10M
�ڴ�����	128
����	
����N���ַ�
���	
������ַ�����ת����ַ���
��������	abcd
�������	dcba
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

void reverse(string str)
{
	int len=str.size();
	for(int i=len-1;i>=0;i--)
	{
        cout<<str[i];
	}
}

void main()
{
	string A;
	getline(cin,A);
	reverse(A);
}
