//
//  main.cpp
//  240 - Search a 2D Matrix II
//
//  Created by xiaowu on 2020/5/31.
//  Copyright © 2020 WSAlone. All rights reserved.
//  双指针

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() < 1 || matrix[0].size() < 1) {
            return false;
        }
        
        int x = matrix[0].size() - 1;
        int y = 0;
        
        while (x >= 0 && y <= matrix.size() - 1) {
            if (target > matrix[y][x]) {
                y += 1;
            } else if (target < matrix[y][x]){
                x -= 1;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
