//
//  main.cpp
//  221 - Maximal Square
//
//  Created by ynfMac on 2019/12/6.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int R = matrix.size();
        if (R == 0) {
            return 0;
        }
        
        int C = matrix[0].size();
        if (C == 0) {
            return 0;
        }
        
        vector<vector<int>> dp = vector<vector<int>>(R + 1,vector<int>(C + 1,0));
        int maximalSquare = 0;
        
        for (int i = 1; i <= R; i++) {
            for (int j = 1; j <= C; j++) {
                if (matrix[i-1][j-1] == '1') {
                    dp[i][j] = min(min(dp[i - 1][j], dp[i - 1][j - 1]), dp[i][j - 1])  + 1;
                    // 更新最大的正方形数
                    maximalSquare = max(maximalSquare, dp[i][j]);
                }
            }
        }
        return maximalSquare * maximalSquare;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
