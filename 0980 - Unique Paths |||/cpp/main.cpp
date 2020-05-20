//
//  main.cpp
//  Unique Paths |||
//
//  Created by ynfMac on 2019/12/2.
//  Copyright © 2019 ynfMac. All rights reserved.
// bfs

#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
    int R,C;
    int start, end;
    int dirs[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
    vector<vector<int>> grid;
    bool inArea(int x,int y){
        return x >= 0 && x < R && y >= 0 && y < C;
    }
    
    int dfs(int visited, int v, int left){
        
        visited += (1 << v);
        left--;
        
        if (v == end && left == 0 ) {
            visited -= (1 << v);
            return 1;
        }
        
        int x = v / C, y = v % C;
        int res = 0;
        for (int i = 0; i < 4; i ++) {
            int newx = x + dirs[i][0];
            int newy = y + dirs[i][1];
            int next = newx * C + newy;
            if (inArea(newx, newy) && this->grid[newx][newy] == 0 && (visited & (1 << next)) == 0) {
                res += dfs(visited, next, left);
            }
        }
        visited -= (1 << v);
        return res;
    }
    
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        this->grid = grid;
       
        R = grid.size();
        if (R == 0) {
            return 0;
        }
        
        C = grid[0].size();
        if (C == 0) {
            return 0;
        }
        
        // 一共需要访问 left 个节点
        int left = R * C;
        
        // 对节点进行处理
        for (int i = 0; i < R; i++) {
            for (int j = 0;j < C; j++) {
                if (this->grid[i][j] == 1) { // 起始点
                    start = i * C + j; // 将二维坐标转化为一维数字。
                    this->grid[i][j] = 0; // 设置为0表示这也是一个可以通行的点。
                } else if (grid[i][j] == 2){
                    end = i * C + j;
                    this->grid[i][j] = 0;
                } else if (grid[i][j] == -1){
                    left--; // 除掉障碍。
                }
            }
        }
       return dfs(0,start,left);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int>> g0 = {
        {1,0},
        {0,0},
        {0,2}
    };
    Solution().uniquePathsIII(g0);
    std::cout << "Hello, World!\n";
    return 0;
}
