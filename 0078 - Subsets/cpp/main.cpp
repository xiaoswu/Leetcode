//
//  main.cpp
//  78 - Subsets
//
//  Created by ynfMac on 2019/12/10.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur = vector<int>();
        for (int i = 0; i < nums.size(); i++) {
        }
        
        return res;
    }
//    void dfs(vector<vector<int>>& res, vector<int>& cur, vector<int>&nums,int index){
//        if (index == nums.size()) {
//            res.push_back(cur);
//            return;
//        }
//
//        dfs(res, cur, nums, index + 1);
//        cur.push_back(nums[index]);
//        dfs(res, cur, nums, index + 1);
//    }
};

int main(int argc, const char * argv[]) {
    vector<int> vec = vector<int>{1,2,3};
    vector<vector<int>> res = Solution().subsets(vec);
    
    for ( vector<int>  p: res) {
        for (int i  : p) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
