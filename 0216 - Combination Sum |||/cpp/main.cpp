//
//  main.cpp
//  Combination Sum |||
//
//  Created by ynfMac on 2019/10/31.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        
        solve(k, n, vector<int>(), res, 1);
        return res;
    }
    
private:
    void solve(int k, int n, vector<int>cur_res, vector<vector<int>>& res,int index){
        if (k == 0 && n == 0) {
            res.push_back(cur_res);
            return;
        }
        
        if (k < 0 || n < 0) {
            return;
        }
        
        for (int i = index; i < 10; i++) {
            
            if (i > n) {
                break;
            }
            cur_res.push_back(i);
            solve(k - 1, n - i, cur_res, res, i + 1);
            cur_res.pop_back();
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
   vector<vector<int>> d = Solution().combinationSum3(2, 4);
    
    
    //cout << d.size();
    for (vector<int> nums: d) {
        for (int num : nums) {
            cout << num;
        }
        cout << endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
