/*
��Ŀ������
       д��һ�����򣬽���һ����������ֵ���������ֵ�Ľ�������ֵ�����С�������ֵ���ڵ���5,����ȡ����С��5��������ȡ����
����������
       ����һ����������ֵ
���������
       �������ֵ�Ľ�������ֵ

�������ӣ�
       5.5
������ӣ�
       6

*/

#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <ctype.h>
#include <math.h>
using namespace std;

/*
int round(double a)
{
	int b =  floor(a);      //����ȡ��
	int c =  ceil(a);       //����ȡ��
	float d = a-b;
	if(d*10>=5)
	{
		return c;
	}else
	{
		return b;
	}
}
*/
int main()
{
	float aa;
	cin>>aa;
	//int bb;
	//bb=round(aa);
	//cout<<bb;
	cout<<int(aa+0.5);
	return 0;
}
