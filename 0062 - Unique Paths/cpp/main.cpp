//
//  main.cpp
//  62 - Unique Paths
//
//  Created by ynfMac on 2019/6/25.
//  Copyright © 2019 ynfMac. All rights reserved.
//  dp

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m,vector<int>(n, 1));
        for (int i = 1; i < m; i ++) {
            for (int j = 1; j < n; j ++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
