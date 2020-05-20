//
//  main.cpp
//  1275 - Find Winner on a Tic Tac Toe Game
//
//  Created by ynfMac on 2019/12/5.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
    
private:
    bool checkwin(unordered_set<int> const S, vector<vector<int>> wins){
        for (vector<int>  win: wins) {
            bool isWin = true;
            for (int n : win) {
                if (!S.count(n)) {
                    isWin = false;
                    break;
                }
            }
            if (isWin) {
                return true;
            }
        }
        return false;
    }
    
public:
    string tictactoe(vector<vector<int>>& moves) {
        
        // 1.将二维坐标转化为一维
        
        // 例举出所有的获胜的情况,共8种。
        vector<vector<int>> const wins = {
            {0,1,2},
            {3,4,5},
            {6,7,8},
            {0,3,6},
            {1,4,7},
            {2,5,8},
            {0,4,8},
            {2,4,6}
        };
        
        // 1.分为A，B两部分
        unordered_set<int>  A ,B;
        for (int i = 0; i < moves.size(); i++) {
            int num = moves[i][0] * 3 + moves[i][1];
            if (i % 2 == 0) {
                A.insert(num);
            } else {
                B.insert(num);
            }
        }
        
        if (checkwin(A,wins)) {
            return "A";
        }
        
        if (checkwin(B,wins)) {
            return "B";
        }
        
        return moves.size() == 9 ? "Draw" : "Panding";
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
