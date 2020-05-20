//
//  main.cpp
//  1091 - Shortest Path in Binary Matrix
//
//  Created by ynfMac on 2019/11/27.
//  Copyright © 2019 ynfMac. All rights reserved.
//  使用BFS可以解决无权图的最短路径问题

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Solution {
private:
    int R,C;
    int d[8][2] = {{1,0},{1,1},{1,-1},{0,-1},{0,1},{-1,-1},{-1,1},{-1,0}};
    bool inArea(int x, int y){
        return x >= 0 && x < R && y >= 0 && y < C;
    }
    
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        R = grid.size();
        C = grid[0].size();
        
        if (grid[0][0] == 1) {
            return -1;
        }
        
        if (R == 1 && C == 1) {
            return 1;
        }
        
        vector<vector<bool>> visited = vector<vector<bool>>(R,vector<bool>(C,false));
        vector<vector<int>> path = vector<vector<int>>(R,vector<int>(C, -1));
        
        queue<pair<int, int>> q;
        path[0][0] = 1;
        q.push({0,0}); // 起始点
        visited[0][0] = true;
        
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            
            for (int i = 0; i < 8; i++) {
                int newX = cur.first + d[i][0];
                int newY = cur.second + d[i][1];
                if (inArea(newX, newY) && grid[newX][newY] == 0 && !visited[newX][newY]) {
                    q.push(pair<int, int>(newX,newY));
                    visited[newX][newY] = true;
                    
                    path[newX][newY] = path[cur.first][cur.second] + 1;
                    
                    if (newX == R - 1 && newY == C - 1) {
                        return path[newX][newY];
                    }
                }
            }
            
        }
        return -1;
    }
};
int main(int argc, const char * argv[]) {
    vector<vector<int>> grid = vector<vector<int>>{{0,1},{1,0}};
    
    Solution().shortestPathBinaryMatrix(grid);
    
    std::cout << "Hello, World!\n";
    return 0;
}
