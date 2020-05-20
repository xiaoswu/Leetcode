//
//  main.cpp
//  54 - Spiral Matrix
//
//  Created by ynfMac on 2019/12/2.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
    int R, C;
    int d[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
private:
    bool inArea(int x,int y){
        return x >=0 && x < R && y >= 0 && y < C;
    }
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        R = matrix.size();
        if (R == 0) {
            return vector<int>();
        }
        C = matrix[0].size();
        if (C == 0) {
            return vector<int>();
        }
        vector<int> ans = vector<int>();
        vector<vector<bool>> visited = vector<vector<bool>>(R,vector<bool>(C,false));
        int r = 0, c = 0, di = 0;
        for (int i = 0; i < R * C; i++) {
            ans.push_back(matrix[r][c]);
            visited[r][c] = true;
            
            int cr = r + d[di][0];
            int cc = c + d[di][1];
            
            if (inArea(cr, cc) && !visited[cr][cc]) {
                r = cr;
                c = cc;
            } else {
                //
                di = (di + 1) % 4;
                r  = r + d[di][0];
                c  = c + d[di][1];
            }
        }
        return ans;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
