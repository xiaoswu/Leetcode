//
//  main.cpp
//  0036 - Valid Sudoku
//
//  Created by ynfMac on 2019/7/10.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9),col(9),block(9);
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int bindex = (i / 3) * 3 + j / 3;
                char cur = board[i][j];
                if (cur != '.') {
                    if (row[i].count(cur) || col[j].count(cur) || block[bindex].count(cur)) {
                        return false;
                    }
                    
                    row[i].insert(cur);
                    col[j].insert(cur);
                    block[bindex].insert(cur);
                }
            }
        }
        
        return true;
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
