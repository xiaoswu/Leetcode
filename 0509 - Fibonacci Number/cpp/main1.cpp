//
//  main.cpp
//  509 - Fibonacci Number
//
//  Created by ynfMac on 2019/6/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int N) {
        
        vector<long> dp(N + 1, -1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= N; i ++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return (int)dp[N];
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << Solution().fib(32) << endl;
    
    return 0;
}
