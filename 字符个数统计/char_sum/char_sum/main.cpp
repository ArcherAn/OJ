//
//  main.cpp
//  char_sum
//
//  Created by Archer_An on 16/8/26.
//  Copyright © 2016年 Archer_An. All rights reserved.
//
/*
 题目描述: 编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)。不在范围内的不作统计。
 输入描述：输入N个字符，字符在ACSII码范围内(0~127)。
 输出描述: 输出字符的个数。
 
 输入例子: abc
 输出例子： 3
 
 */

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    
    string str ;
    getline(cin, str);
    int f[128] = {0};    //判断不同字符
    int len = (int)str.length();
    int num = 0;
    for(int i =0;i<len;i++){
        if(str[i]<=127  && str[i]>=0 && f[str[i]]==0){    //去除不同字符，然后统计
            f[str[i]] = 1;
            num++;
        }
    }
    cout<<num;
    return 0;
}
