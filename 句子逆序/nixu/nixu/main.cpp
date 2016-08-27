//
//  main.cpp
//  nixu
//
//  Created by Archer_An on 16/8/26.
//  Copyright © 2016年 Archer_An. All rights reserved.
//
/*
 题目描述
          将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
          所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
 输入描述: 将一个英文语句以单词为单位逆序排放。
 输出描述: 得到逆序的句子
 输入例子: I am a boy
 输出例子: boy a am I
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int i =0;
    int k =0;
    int len = (int)str.length();
    for(int j=len-1;j>=0;j--){
        k++;
        if(str[j] == ' '){
            for(i=j+1;i<=j+k;i++){
                cout<<str[i];
            }
            cout<<' ';
            k = 0;
        }
        i=0;
    }
    for (int m =0;m<len ; m++) {
        cout<<str[m];
        if(str[m] == ' '){
            break;
        }
    }
    return 0;
}
