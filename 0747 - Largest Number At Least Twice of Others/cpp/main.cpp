//
//  main.cpp
//  747 - Largest Number At Least Twice of Others
//
//  Created by ynfMac on 2019/8/1.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>


// 
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        if (nums.size() < 2) {
            return 0;
        }
        
        // 求出最大数及最大数的索引。
        int biggestNum = nums[0];
        int index = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > biggestNum) {
                biggestNum = nums[i];
                index = i;
            }
        }
        
        // 循环判断
        for (int i = 0; i < nums.size(); i++) {
            if (biggestNum < nums[i] * 2 && nums[i] != biggestNum) {
                return -1;
            }
        }
        
        return index;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> p = vector<int>{0,0,3,2};
    // insert code here...
    cout<< Solution().dominantIndex(p) << endl;
    
    return 0;
}
