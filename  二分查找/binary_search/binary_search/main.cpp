//
//  main.cpp
//  binary_search
//
//  Created by Archer_An on 16/8/30.
//  Copyright © 2016年 Archer_An. All rights reserved.
//

/*
 对于一个有序数组，我们通常采用二分查找的方式来定位某一元素，请编写二分查找的算法，在数组中查找指定元素。
 给定一个整数数组A及它的大小n，同时给定要查找的元素val，请返回它在数组中的位置(从0开始)，若不存在该元素，返回-1。若该元素出现多
 次，请返回第一次出现的位置。
 测试样例：[1,3,5,7,9],5,3
 返回：1
 */
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int A[5]={1,3,5,7,9};
    int low=0,high=4;
    int mid;
    int x=3;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==x)break;
        if(A[mid]<x)low=mid+1;
        else high=mid-1;
    }
    if(low<=high)
        cout<<mid<<endl;
    else cout<<-1;
    
    return 0;
}
