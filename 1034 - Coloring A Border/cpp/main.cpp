//
//  main.cpp
//  1034 - Coloring A Border
//
//  Created by ynfMac on 2019/11/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
    int C;
    int R;
    int newColor;
    int oldColor;
    int eara[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    vector<vector<int>> visited;
    
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int r0, int c0, int color) {
        R = grid.size();
        if (R == 0) {
            return grid;
        }
        
        C = grid[0].size();
        if (C == 0) {
            return grid;
        }
        
        if(!isArea(r0, c0)){
            return grid;
        }
        
        this->newColor = color;
        this->oldColor = grid[r0][c0];
        visited = vector<vector<int>>(R,vector<int>(C,0));
        
        if (this->newColor == this->oldColor) {
            return grid;
        }
        
        floodfill(grid, r0, c0);
        
        return grid;
    }
    
    void floodfill(vector<vector<int>>&A, int x,int y){
        visited[x][y] = 1;
        
        if (x == 0 || x == R - 1 || y == 0 || y == C - 1) {
            A[x][y] = newColor;
        }
        
        for (int i = 0; i < 4; i++) {
            int newX = x + eara[i][0];
            int newY = y + eara[i][1];
            if (isArea(newX,newY) && A[newX][newY] == oldColor && !visited[newX][newY]) {
                floodfill(A, newX, newY);
            }
        }
    }
    
    bool isArea(int x ,int y){
        return x >= 0 && x < C && y >= 0 && y < R;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<vector<int>> vec = vector<vector<int>>{{1,1,1},{3,1,3},{3,2,3},{2,1,2},{2,3,3}};
    Solution().colorBorder(vec, 0, 1, 2);
    
    std::cout << "Hello, World!\n";
    return 0;
}
