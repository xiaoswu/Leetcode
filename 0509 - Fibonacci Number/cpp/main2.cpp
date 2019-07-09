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
        if (N <= 1 ) {
            return N;
        }
        
        int pre = 0, cur = 1;
        for (int i = 2; i < N; i++) {
            int num = pre + cur;
            pre = cur;
            cur = num;
        }
        
        return cur;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << Solution().fib(10) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
