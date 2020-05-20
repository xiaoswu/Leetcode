//
//  main.cpp
//  63 - Unique Paths ||
//
//  Created by ynfMac on 2019/6/25.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<long>> dp = vector<vector<long>>(m,vector<long>(n, 1));
        for (int i = 0; i < m;) {
            if (obstacleGrid[i][0] == 1) {
                while (i < m) {
                    dp[i][0] = 0;
                    i++;
                }
            } else {
                i++;
            }
        }
        
        
        for (int i = 0; i < n;) {
            if (obstacleGrid[0][i] == 1) {
                while (i < n) {
                    dp[0][i] = 0;
                    i++;
                }
            } else {
                i++;
            }
        }
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (obstacleGrid[i][j] == 1) {
                    dp[i][j] = 0;
                }
            }
        }
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n ; j++) {
                if (dp[i][j] != 0) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};

int main(int argc, const char * argv[]) {
    vector<int> a = vector<int>{0,0,0};
    vector<int> b = vector<int>{0,1,0};
    vector<int> c = vector<int>{0,0,0};
    vector<vector<int>> abc = vector<vector<int>>{a,b,c};

    cout << Solution().uniquePathsWithObstacles(abc) << endl;

    std::cout << "Hello, World!\n";
    
    return 0;
}
