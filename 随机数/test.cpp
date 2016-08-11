/*
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;


int  * quchong(int *b)
{
	static int c[100];
	static int d[100];
	int len = sizeof(b)/sizeof(b[0]);
    sort(b,b+len);
	int j =0;
	if(len==1)
	{
		int m = 0;
		d[m]=b[0];
		return d;
	}
	else
	{
		c[0]=b[0];
		for(int i=1;i<len;++i)
		{
			if(b[i]!=b[i-1])
			{
			   c[++j]=b[i];
			}else
			{
				continue;
			}
		}
		return c;
	}
	
}
int main()
{  
	int M=0;             //输入的个数;
	int mm[100];
	cin>>M;
	for(int i=0;i<M;i++)
	{
		cin>>mm[i];
	
	}
	int *nn;
	nn=quchong(mm);
	int len = sizeof(nn)/sizeof(nn[0]);
	for(int j=0;j<len;j++)
	{
		cout<<nn[j]<<endl;
	}
	return 0;
}
*/
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n){
        int inputArray[100];
        int tmp;
        for(int i=0;i<n;i++){
            cin >> tmp;
            inputArray[i] = tmp;
        }
        sort(inputArray,inputArray+n);
        if(n==1)
            cout<<inputArray[n-1]<<endl;
        else{
            cout<<inputArray[0]<<endl;
            for(int i=1;i<n;++i){
                if(inputArray[i]!=inputArray[i-1])
                    cout << inputArray[i] << endl;
            }
        }
    }
 
    return 0;
}