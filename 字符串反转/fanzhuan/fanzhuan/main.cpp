//
//  main.cpp
//  fanzhuan
//
//  Created by Archer_An on 16/8/26.
//  Copyright © 2016年 Archer_An. All rights reserved.
//
/*
 题目描述
          写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。
 输入描述: 输入N个字符
 输出描述: 输出该字符串反转后的字符串
 输入例子: abcd
 输出例子: dcba
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    for(int i=(int)str.size()-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}
