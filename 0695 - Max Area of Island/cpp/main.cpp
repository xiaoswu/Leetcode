//
//  main.cpp
//  695 - Max Area of Island
//
//  Created by ynfMac on 2019/11/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
    int R,C;
    vector<vector<int>> visited;
    int d[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
    bool InArea(int x, int y){
        return x >= 0 && x < R && y >= 0 && y < C;
    }
    
    int DFS(vector<vector<int>>& grid,int x, int y){
        visited[x][y] = 1;
        
        int result = 1;
        for (int i = 0; i < 4; i++) {
            int newX = x + d[i][0];
            int newY = y + d[i][1];
            if (InArea(newX, newY) && grid[newX][newY] == 1 && visited[newX][newY] == 0) {
                result += DFS(grid, newX, newY);
            }
        }
        return result;
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        R = grid.size();
        if (R == 0) { return 0; }
        C = grid[0].size();
        if (C == 0) { return 0; }
        
        visited = vector<vector<int>>(R,vector<int>(C,0));
        
        int result = 0;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    result = max(result, DFS(grid, i, j));
                }
            }
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<vector<int>> grid = vector<vector<int>>{{1,1,0},{0,1,1}};
    Solution().maxAreaOfIsland(grid);
    
    return 0;
}
