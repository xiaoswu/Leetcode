//
//  main.cpp
//  200 - Number of Islands
//
//  Created by ynfMac on 2019/11/22.
//  Copyright © 2019 ynfMac. All rights reserved.
//  数岛屿的个数

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void dfs(vector<vector<char>>& grid, int r, int c) {
        int nr = grid.size();
        int nc = grid[0].size();
        
        grid[r][c] = '0';
        
        if (r - 1 >= 0 && grid[r - 1][c] == '1') {
            dfs(grid, r - 1, c);
        }
        
        if (r + 1 < nr && grid[r + 1][c] == '1') {
            dfs(grid, r + 1, c);
        }
        
        if (c - 1 >= 0 && grid[r][c - 1] == '1') {
            dfs(grid, r, c - 1);
        }
        
        if (c + 1 < nc && grid[r][c + 1] == '1') {
            dfs(grid, r, c + 1);
        }
    }
    
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        if (nr <= 0) {
            return 0;
        }
        int nl = grid[0].size();
        int ans = 0;
        for (int i = 0; i < nr; i++) {
            for (int j = 0; j < nl; j++) {
                if (grid[i][j] == '1') {
                    ans = ans + 1;
                    dfs(grid, i, j);
                }
            }
        }
        return ans;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
