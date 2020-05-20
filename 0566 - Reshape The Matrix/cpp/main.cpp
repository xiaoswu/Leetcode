//
//  main.cpp
//  566 - Reshape The Matrix
//
//  Created by ynfMac on 2019/7/31.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (nums.size() * nums[0].size() != r * c) {
            return nums;
        }
        
        vector<int> allNums;
        
        for (vector<int> r : nums) {
            for (int c : r) {
                allNums.push_back(c);
            }
        }
        
        vector<vector<int>> ret;
        int start = 0;
        for (int i = 0; i < r; i++) {
            vector<int> p;
            for (int j = 0; j < c; j++) {
                p.push_back(allNums[start++]);
            }
            
            ret.push_back(p);
        }
        
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
