//
//  main.cpp
//  509 - Fibonacci Number
//
//  Created by ynfMac on 2019/6/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int fib(int N){
        if (N <= 0) {
            return 0;
        }
        
        if (N == 1) {
            return 1;
        }
        
        return fib(N - 1) + fib(N - 2);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
