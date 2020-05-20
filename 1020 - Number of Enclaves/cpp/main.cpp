//
//  main.cpp
//  1020 - Number of Enclaves
//
//  Created by ynfMac on 2019/11/25.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
    int C;
    int R;
    int eara[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    
public:
    int numEnclaves(vector<vector<int>>& A) {
        if (A.size() == 0 || A[0].size() == 0) return 0;
        
        C = A.size(),R = A[0].size();
        
        for (int i = 0; i < C; i++) {
            if (A[i][0]) {
                floodfill(A, i, 0);
            }
            
            if (A[i][R - 1]) {
                floodfill(A, i, R - 1);
            }
        }
        
        for (int i = 0; i < R ; i++) {
            if (A[0][i]) {
                floodfill(A, 0, i);
            }
            
            if (A[C - 1][i]) {
                floodfill(A, C - 1, i);
            }
        }
        
        int result = 0;
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++) {
                result += A[i][j];
            }
        }
        
        return  result;
    }
    
    void floodfill(vector<vector<int>>&A, int x,int y){
        A[x][y] = 0;
        
        for (int i = 0; i < 4; i++) {
            int newX = x + eara[i][0];
            int newY = y + eara[i][1];
            if (isArea(newX,newY) && A[newX][newY] == 1) {
                floodfill(A, newX, newY);
            }
        }
    }
    
    bool isArea(int x ,int y){
        return x >= 0 && x < C && y >= 0 && y < R;
    }
};

int main(int argc, const char * argv[]) {
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
