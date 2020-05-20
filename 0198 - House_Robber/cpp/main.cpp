//
//  main.cpp
//  198 - House_Robber
//
//  Created by ynfMac on 2019/10/18.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        
        int leght = nums.size();
        
        if (leght == 0) {
            return 0;
        }
        if (leght == 1) {
            return nums[0];
        }
        
        vector<int> dp = vector<int>{leght + 1, -1};
        
        dp[0] = 0;
        dp[1] = nums[0];
        for (int i = 2; i <= leght; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
        }
        
        return dp[leght];
    }
    
private:
    
};

int main(int argc, const char * argv[]) {
    vector<int> nums = {1,2,3,1};
    cout << Solution().rob(nums) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
