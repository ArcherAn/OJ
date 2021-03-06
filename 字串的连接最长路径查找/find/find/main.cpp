//
//  main.cpp
//  find
//
//  Created by Archer_An on 16/8/29.
//  Copyright © 2016年 Archer_An. All rights reserved.
//
/*
 题目描述： 给定n个字符串，请对n个字符串按照字典序排列。 
 输入描述： 输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
 输出描述： 数据输出n行，输出结果为按照字典序排列的字符串。
 输入例子:  
 9
 cap
 to
 cat
 card
 two
 too
 up
 boat
 boot
 
 输出例子： 
 boat
 boot
 cap
 card
 cat
 to
 too
 two
 up
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin>>n) {
        string str;
        vector<string> vs;
        while (n--)
        {
            cin >> str;
            vs.push_back(str);
        }
        sort(vs.begin(), vs.end());
        vector<string>::iterator vit;
        for (vit = vs.begin(); vit != vs.end(); vit++)
        {
            cout << *vit << endl;
        }
    }
    return 0;
}
