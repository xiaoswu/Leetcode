//
//  main.cpp
//  53 - Maximum Subarray
//
//  Created by ynfMac on 2019/11/20.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        
        int sum = 0;
        for (int num : nums) {
            if (sum > 0) {
                sum += num;
            } else {
                sum = num;
            }
            
            ans = max(ans, sum);
        }
        return ans;
    }
    
    int maxSubArray1(vector<int>& nums) {
        int length =nums.size();
        vector<int> dp = vector<int>{length, -1};
        dp[0] = nums[0];
        int ans = nums[0];
        
        for (int i = 1; i < length; i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            ans = max(dp[i],ans);
        }
        
        return ans;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec = {-2,3, -1, -3,5};
    
    cout << Solution().maxSubArray(vec) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
