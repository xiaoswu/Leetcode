//
//  main.cpp
//  70 - Climbing Stairs
//
//  Created by xiaowu on 2019/1/5.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
// 递归算法
//private:
//    int calculate(int n){
//        if (n == 1) return 1;
//
//        if (n == 2) return 2;
//
//        return calculate(n - 1) + calculate(n - 2);
//    }
    
// 动态规划
public:
    int climbStairs(int n) {
        vector<int> memo(n+1,-1);
        
        memo[0] = 1;
        memo[1] = 1;
        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i-1] + memo[i-2];
        }
        return memo[n];
    }
};

int main() {
    Solution s = Solution();
    
    int a = s.climbStairs(4);
    cout << a << endl;
    
    return 0;
}
