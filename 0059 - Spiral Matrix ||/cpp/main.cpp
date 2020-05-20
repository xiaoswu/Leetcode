//
//  main.cpp
//  59 - Spiral Matrix ||
//
//  Created by ynfMac on 2019/12/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
    
private:
    int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    
public:
    vector<vector<int>> generateMatrix(int n) {
        int allNums = n * n;
        
        vector<vector<int>> res = vector<vector<int>>(n,vector<int>(n,0));
        vector<vector<bool>> visited = vector<vector<bool>>(n,vector<bool>(n,false));
        int r = 0,c = 0,di = 0;
        for (int i = 0; i < allNums; i++) {
            visited[r][c] = true;
            res[r][c] = i + 1;
            int newr = r + dirs[di][0];
            int newc = c + dirs[di][1];
            if (newr >= 0 && newr < n && newc >= 0 && newc < n && !visited[newr][newc]) {
                r = newr;
                c = newc;
            } else {
                di = (di + 1) % 4;
                r = r + dirs[di][0];
                c = c + dirs[di][1];
            }
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    
   vector<vector<int>> res = Solution().generateMatrix(3);
    
    for (vector<int>  r: res) {
        for (int c : r) {
            cout << c << " ";
        }
        cout << endl;
    }
    std::cout << "Hello, World!\n";
    return 0;
}
