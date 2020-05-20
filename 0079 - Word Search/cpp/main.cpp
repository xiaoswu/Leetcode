//
//  main.cpp
//  79 - Word Search
//
//  Created by ynfMac on 2019/12/5.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int R,C;
    
    vector<vector<bool>> visited;
    
    int dirs[4][2] = {{1,0},{0,1},{0,-1},{-1,0}};
    
    bool inArea(int x, int y){
        return x >= 0 && x < R && y >= 0 && y < C;
    }
    
    bool dfs(vector<vector<char>>& board,int x,int y,string word,int level){
        
        if (level == word.size() - 1) {
            return board[x][y] == word[level];
        }
        
        if (board[x][y] == word[level]) {
            visited[x][y] = true;
            for (int i = 0; i < 4; i++) {
                int newx = x + dirs[i][0];
                int newy = y + dirs[i][1];
                
                if (inArea(newx, newy) &&
                    !visited[newx][newy]  ) {
                    if ( dfs(board, newx, newy, word, level + 1) ) {
                        return true;
                    }
                }
            }
            visited[x][y] = false;
        }
        return false;
    }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        R = board.size();
        C = board[0].size();
        
        visited = vector<vector<bool>>(R,vector<bool>(C,false));
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (dfs(board, i, j, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<vector<char>> board = vector<vector<char>>{{'a','b','c','e'},{'s','f','e','s'},{'a','d','e','e'}};
    
    cout << Solution().exist(board, "abceseeefs") << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
