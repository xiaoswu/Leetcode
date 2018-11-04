//
//  main.cpp
//  326 - Power of Three
//
//  Created by ynfMac on 2018/10/23.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用while循环

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        while (n && n % 3 == 0) {
            n = n / 3;
        }
        
        return n == 1;
    }
};

void printBool(bool isTure){
    if (isTure) {
        cout << "true";
    } else {
        cout << "false";
    }
    cout << endl;
}

int main() {
    // example 1
    printBool(Solution().isPowerOfThree(45));
    
    // example 1
    printBool(Solution().isPowerOfThree(27));
    
    return 0;
}
