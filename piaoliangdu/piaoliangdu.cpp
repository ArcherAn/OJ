/*
描述:	
     给出一个名字，该名字有26个字符串组成，定义这个字符串的“漂亮度”是其所有字母“漂亮度”的总和。
     每个字母都有一个“漂亮度”，范围在1到26之间。没有任何两个字母拥有相同的“漂亮度”。字母忽略大小写。
     给出多个名字，计算每个名字最大可能的“漂亮度”。
知识点:
	字符串
运行时间限制	0M
内存限制	0
输入:	
整数N，后续N个名字
N个字符串，每个表示一个名字

输出:	
每个名称可能的最大漂亮程度
样例输入	2 
            zhangsan 
			lisi
样例输出	192 
            101

*/
#include <iostream>
#include <string>
#include <algorithm>   //提供排序函数
#include <ctype.h>
using namespace std;

int Beauty(char a[])
{
	int b[26]={0};  //存储每个字符的个数
	int sum=0;
	for(int i=0;a[i]!='\0';i++)
	{
		a[i]=tolower(a[i]);  //全部先转换成小写
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
	getchar(); //清除回车
	for(int i=0;i<M;i++)
		gets(array[i]);
	for(int m=0;m<M;m++)
		cout<<Beauty(array[m])<<endl; 
	return 0;
}