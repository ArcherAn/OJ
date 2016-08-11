#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a;   //取余结果
	int b;   //商
	int sum=0;

    while(n/10)
	{
		b=n/10;
		sum=(sum+(n%10))*10;
		n=b;
	}
	cout<<sum<<endl;
	return 0;
}