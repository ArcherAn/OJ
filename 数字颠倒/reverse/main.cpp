//
//  main.cpp
//  reverse
//
//  Created by Archer_An on 16/8/25.
//  Copyright © 2016年 Archer_An. All rights reserved.
//

/*
 题目描述：
         输入一个整数，将这个整数以字符串的形式逆序输出
         程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
 输入描述：输入一个整数
 输出描述：将这个整数以字符串的形式逆序输出
 
 输入例子: 1516000
 输出例子：0006151
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    char str;
    if(n==0){
        cout<<0;
    }else{
        while(n){
            str =n%10 + '0';
            cout<<str;
            n=n/10;
        }
    }
    
    return 0;
}

/*
int main()
{
    string str;
    cin >> str;
    for (int i = (int)str.size() - 1; i >= 0; i--)
        cout << str[i];
    return 0;
}
 */


