//
//  main.cpp
//  47 - Permutations
//
//  Created by ynfMac on 2019/10/30.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums){
        vector<vector<int>> res;
        
        vector<int> out;
        vector<int> visited(nums.size(),0);
        
        if (nums.size() == 0) {
            return res;
        }
        
        sort(nums.begin(), nums.end());
        permuteDFS(nums, 0, visited, out, res);
        
        return res;
    }
    void permuteDFS(vector<int>& nums, int level, vector<int>& visited, vector<int>& out, vector<vector<int>>& res) {
        
        if (level == nums.size() ) {
            res.push_back(out);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1] && visited[i - 1] == 1) {
                continue;
            }
            
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
    // insert code here...
    vector<int> d = vector<int>{1,1,2};
    vector<vector<int>> vec = Solution().permuteUnique(d);
    
    for (vector<int> nums : vec) {
        for (int c : nums) {
            cout << c << " ";
        }
        cout << endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
