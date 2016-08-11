/*
题目描述：
        功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）
输入描述：
        输入一个long型整数
输出描述：
        按照从小到大的顺序输出它的所有质数的因子，以空格隔开

输入例子：
        180
输出例子：
        2 2 3 3 5

*/

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;


int main()
{
	long int input;
	while(cin >> input)
	{
		while(input != 1)
		{
			for(int i = 2;i<=input;i++)
			{
				if(input%i==0)
				{
					input /= i;
					cout<<i<<' ';
					break;     //只要能被i整除，i总是从2开始
				}
			}
		}
	}
	return 0;
	/*   

	while (cin >> input)
    {
        for (int a = 2; a<= sqrt(input); a++)
        {
            //此处是while,把a整除结束才可加1
            while (input%a == 0)
            {
                cout << a << ' ';
                input = input / a;
            }
        }
        if (input>1) cout << input << ' ';
    }

	*/
}
