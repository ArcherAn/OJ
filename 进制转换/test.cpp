#include <iostream>
#include <string.h>
/*
题目描述：
      写出一个程序，接受一个十六进制的数值字符串，输出该数值的十进制字符串。（多组同时输入 ）
输入描述：
      输入一个十六进制的数值字符串。
输出描述： 
      输出该数值的十进制字符串。

输入例子：
      0xA
输出例子：
      10
*/
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

int main() {
    int a;
    while (cin >> hex >> a) {
        cout << a << endl;
    }
	return 0;
}