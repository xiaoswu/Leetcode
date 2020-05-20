//
//  main.cpp
//  130 - Surrounded Regions
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
    int eara[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    vector<vector<int>> visited;
    
public:
    void solve(vector<vector<char>>& board) {
        if (board.size() == 0 || board[0].size() == 0) return ;
        
        C = board.size(),R = board[0].size();
        visited = vector<vector<int>>(C,vector<int>(R,0));
        
        for (int i = 0; i < C; i++) {
            
            if (board[i][0] == 'O' && !visited[i][0]) {
                floodfill(board, i, 0);
            }
            
            if (board[i][R - 1] == 'O' && !visited[i][R-1]) {
                
                floodfill(board, i, R - 1);
            }
        }
        
        for (int i = 0; i < R ; i++) {
            if (board[0][i] == 'O' && !visited[0][i]) {
                floodfill(board, 0, i);
            }
            
            if (board[C - 1][i] == 'O' && !visited[C-1][i]) {
                floodfill(board, C - 1, i);
            }
        }
        
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++) {
                if (!visited[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
    
    void floodfill(vector<vector<char>>&A, int x,int y){
        visited[x][y]  = 1;
        for (int i = 0; i < 4; i++) {
            int newX = x + eara[i][0];
            int newY = y + eara[i][1];
            if (isArea(newX,newY) && A[newX][newY] == 'O' && !visited[newX][newY]) {
                floodfill(A, newX, newY);
            }
        }
    }
    
    bool isArea(int x ,int y){
        return x >= 0 && x < C && y >= 0 && y < R;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
