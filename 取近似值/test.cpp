/*
题目描述：
       写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。
输入描述：
       输入一个正浮点数值
输出描述：
       输出该数值的近似整数值

输入例子：
       5.5
输出例子：
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
	int b =  floor(a);      //向下取整
	int c =  ceil(a);       //向上取整
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
