//
//  main.cpp
//  73 - Set Matrix Zeroes
//
//  Created by ynfMac on 2019/11/27.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
    
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (!m) return;
        
        int n = matrix[0].size();
        if (!n) return;
        
        vector<int> zeroRows,zeroCols;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!matrix[i][j]) {
                    zeroRows.push_back(i);
                    zeroCols.push_back(j);
                }
            }
        }
        
        for (int r : zeroRows) {
            for (int j = 0; j < n; j++) {
                matrix[r][j] = 0;
            }
        }
        
        for (int c : zeroCols) {
            for (int j = 0; j < m; j++) {
                matrix[j][c] = 0;
            }
        }
    }
};

int main1(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    return 0;
}

