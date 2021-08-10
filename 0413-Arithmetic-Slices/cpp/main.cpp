//
//  main.cpp
//  0413-Arithmetic-Slices
//
//  Created by ynfMac on 2021/8/10.
//  Copyright © 2021 ynfMac. All rights reserved.
//  暴力解
//  时间复杂度：O(n^2)
//  空间复杂度：0(1)
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if (nums.size() < 3) {
            return 0;
        }
        int differ = 0;
        int times = 0;
        for (int i = 0; i <= nums.size() - 3; i++) {
            // 确定差
            
            if (nums[i+2] - nums[i+1] != nums[i+1] - nums[i]) {
                continue;
            } else {
                differ = nums[i + 1] - nums[i];
                times ++;
            }
            
            for (int j = i+2; j < nums.size(); j++) {
                if (j+1 < nums.size() && nums[j+1] - nums[j] == differ) {
                    times ++;
                } else {
                    break;
                }
            }
        }
        return  times;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> a = vector<int>{1};
    int b = Solution().numberOfArithmeticSlices(a);
    cout << b << endl;
    
    
    
    
    
    return 0;
}
