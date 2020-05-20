//
//  main.cpp
//  463 - Island Perimeter
//
//  Created by ynfMac on 2019/11/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int d[4][2] = {{1,0},{-1,0},{0,1},{0, -1}};
    
    int C,R;
    
    bool isInArea(int x, int y){
        return x >= 0 && x < C && y >= 0 && y < R;
    }
    
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        C = grid.size();
        if (C == 0) {
            return 0;
        }
        
        R = grid[0].size();
        if (R == 0) {
            return 0;
        }
        
        int result = 0;
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++) {
                if (grid[i][j] == 1) {
                    result += islandEdge(grid,i,j);
                }
            }
        }
        return result;
    }
    
    int islandEdge(vector<vector<int>>& grid, int x,int y){
        int edge = 4;
        cout << x;
        cout << y;
        
        for (int i = 0; i < 4;i++) {
            int newX = x + d[i][0];
            int newY = y + d[i][1];
            
            if (isInArea(newX, newY) && grid[newX][newY]) {
                edge --;
            }
        }
        return edge;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<vector<int>> vec = vector<vector<int>>{{1,1}};
    
    cout << Solution().islandPerimeter(vec);
    
    std::cout << "Hello, World!\n";
    return 0;
}
