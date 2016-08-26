/**
描述	计算字符串最后一个单词的长度，单词以空格隔开。
知识点	字符串,循环
运行时间限制	0M
内存限制	0
输入	一行字符串，长度小于128。
输出	整数N，最后一个单词的长度。
样例输入	hello world
样例输出	5
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
