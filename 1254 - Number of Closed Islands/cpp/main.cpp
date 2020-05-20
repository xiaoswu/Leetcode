//
//  main.cpp
//  1254 - Number of Closed Islands
//
//  Created by ynfMac on 2019/11/22.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    // 向量值
    int dirs[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    
    void dfs(vector<vector<int>>& grid, int r, int c,bool& island) {
        int nr = grid.size();
        int nc = grid[0].size();
        
        if (r >= nr || c >= nc || r < 0 || c < 0) {
            island = false;
            return;
        }
        
        if (grid[r][c] == 1) { return;}
        
        grid[r][c] = 1;
        
        for (int i = 0; i < 4; i++) {
            dfs(grid, r + dirs[i][0], c + dirs[i][1], island);
        }
    }
    
public:
    int closedIsland(vector<vector<int>>& grid) {
        int nr = grid.size();
        if (nr <= 0) {
            return 0;
        }
        int nl = grid[0].size();
        int ans = 0;
        for (int i = 0; i < nr; i++) {
            for (int j = 0; j < nl; j++) {
                if (grid[i][j] == 0) {
                    bool island = true;
                    dfs(grid, i, j, island);
                    if (island) {
                        ans = ans + 1;
                    }
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
