/*
��Ŀ������
        ����:����һ�������������մ�С�����˳����������������������ӣ���180����������Ϊ2 2 3 3 5 ��
����������
        ����һ��long������
���������
        ���մ�С�����˳����������������������ӣ��Կո����

�������ӣ�
        180
������ӣ�
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
					break;     //ֻҪ�ܱ�i������i���Ǵ�2��ʼ
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
            //�˴���while,��a���������ſɼ�1
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
