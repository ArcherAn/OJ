/**
����	�����ַ������һ�����ʵĳ��ȣ������Կո������
֪ʶ��	�ַ���,ѭ��
����ʱ������	0M
�ڴ�����	0
����	һ���ַ���������С��128��
���	����N�����һ�����ʵĳ��ȡ�
��������	hello world
�������	5
*/
#include<iostream>
#include<string>
using namespace std;
void main()
{
	string A;
    getline(cin, A);
    int len = A.length();
    int ans = 0;
    while(A[len-1]!=' ' && len){
        len--;
        ans++;
    }
    cout<<ans<<endl;
   
}
