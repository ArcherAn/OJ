//
//  main.cpp
//  repeat
//
//  Created by Archer_An on 16/8/30.
//  Copyright © 2016年 Archer_An. All rights reserved.
//
/*
 题目描述：  对于一个字符串，请设计一个高效算法，找到第一次重复出现的字符。
           给定一个字符串(不一定全为字母)A及它的长度n。请返回第一个重复出现的字符。保证字符串中有重复字符，字符串的长度小于等
           于500。
 测试样例：  "qywyer23tdd",11
 返回：      y
 */
#include <iostream>
#include <string>
using namespace std;

char findFirstRepeat(string A,int n){
    bool times[256]={0};
    char c;
    if(A.size()==0 || n==0){
        c=0;
    }
    for(int i=0;i<n;i++){
        if(!times[A[i]]){
            times[A[i]]=1;
        }
        else{
            c=A[i];
            break;
        }
        
    }
    return c;
}



int main() {
    string str;
    getline(cin, str);
    cout<<findFirstRepeat(str,str.size());
    return 0;
}
