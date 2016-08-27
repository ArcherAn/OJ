//
//  main.cpp
//  merge
//
//  Created by Archer_An on 16/8/26.
//  Copyright © 2016年 Archer_An. All rights reserved.
//
/*
 题目描述: 数据表记录包含表索引和数值，请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。
 输入描述: 先输入键值对的个数  然后输入成对的index和value值，以空格隔开
 输出描述: 输出合并后的键值对（多行）
 输入例子: 4
        0 1
        0 2
        1 2
        3 4
 
 输出例子:
        0 3
        1 2
        3 4
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
    int Key_Value[10000]={0},Key,Value,Number,i;
    cin>>Number;
    for(i=0;i<Number;i++)
    {
        cin>>Key>>Value;
        Key_Value[Key]+=Value;
    }
    for(i=0;i<10000;i++)
    {
        if(Key_Value[i]!=0)
        cout<<i<<" "<<Key_Value[i]<<endl;
    }
    return 0;
}
