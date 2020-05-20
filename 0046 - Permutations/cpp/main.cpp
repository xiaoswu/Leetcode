//
//  main.cpp
//  46 - Permutations
//
//  Created by ynfMac on 2019/9/29.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> res;
        
        vector<int> out;
        vector<int> visited(nums.size(),0);
        
        if (nums.size() == 0) {
            return res;
        }
        
        permuteDFS(nums, 0, visited, out, res);
        
        return res;
    }
    void permuteDFS(vector<int>& nums, int level, vector<int>& visited, vector<int>& out, vector<vector<int>>& res) {
        
        if (level == nums.size()) {
            res.push_back(out);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] == 0) {
                visited[i] = 1;
                out.push_back(nums[i]);
                permuteDFS(nums, level + 1, visited, out, res);
                
                out.pop_back();
                visited[i] = 0;
            }
        }
    }
};

int main(int argc, const char * argv[]) {

    vector<int> nums = vector<int>{1,2,3};
    Solution().permute(nums);
    
    return 0;
}
