/*
描述	
输出7有关数字的个数，包括7的倍数，还有包含7的数字（如17，27，37...70，71，72，73...）的个数
知识点	循环
运行时间限制	0M
内存限制	0
输入	
一个正整数N。(N不大于30000)
输出	
不大于N的与7有关的数字个数，例如输入20，与7有关的数字包括7,14,17.
样例输入	20
样例输出	3
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