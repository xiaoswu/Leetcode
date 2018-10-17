//
//  main.cpp
//  实现 pow(x, n)
//
//  Created by ynfMac on 2018/10/10.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  计算一个数的n次方

#include <iostream>
#include "powTestHelper.hpp"

using namespace std;

// 累乘
double power1(double x,int n){
    if (n == 0) return 1;
    
    double res = 1;
    for (int i = 1; i <= n; i++) {
        res *= x;
    }
    
    return res;
}

// 使用递归实现
double power(double x,int n){
    
    // 递归终止的条件
    if(n == 0) return 1;
    
    double ans = power(x, n /2);
    
    if(n % 2 == 0){
        return ans *ans;
    } else {
        return ans *ans *x;
    }
}

double myPow1(double x,int n){
    
    if (n < 0) {
        return 1.0 / power1(x, -n);
    } else {
        return power1(x, n);
    }
}

double myPow(double x, int n) {
    if(n < 0){
        return 1.0 / power(x,-n);
    } else {
        return power(x,n);
    }
}

int main() {
    
    // 测试两种实现方式的效率，明显使用mypow方法的效率要高，因为乘法的次数更少。
    powTestHelper::testPow("myPow1",myPow1 , 14, 100000000);
    powTestHelper::testPow("myPow",myPow, 14, 1000000000);
    return 0;
}
