//
//  main.cpp
//  0078 - Subsets
//
//  Created by ynfMac on 2020/5/27.
//  Copyright © 2020 ynfMac. All rights reserved.
//  递归+回溯

#include <iostream>
#include "vector"

using namespace std;
class Solution {
    
private:
    vector<vector<int>> res = vector<vector<int>>();
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> subset = vector<int>();
        
        calulateSubsets(nums, subset, 0);
        
        return res;
        
    }
    
    void calulateSubsets(vector<int>& nums,vector<int> &subset,int sebsetDigit){
        if (sebsetDigit == nums.size() ) {
            res.push_back(subset);
            return;
        }
        
        int s = nums[sebsetDigit];
        
        calulateSubsets(nums, subset, sebsetDigit+1);
        
        subset.push_back(s);
        calulateSubsets(nums,subset,sebsetDigit+1);
        subset.pop_back();
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
