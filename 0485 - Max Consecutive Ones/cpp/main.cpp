//
//  main.cpp
//  485 - Max Consecutive Ones
//
//  Created by ynfMac on 2018/10/22.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        
        for (int i = 0; i < nums.size();) {
            int oneIndex = findConsecutiveOnes(i, nums);
            if (oneIndex == -1) {
                i++;
            } else {
                if (oneIndex > res) res = oneIndex;
                i += oneIndex;
            }
        }
        
        return res;
    }
    
private:
    int findConsecutiveOnes(int n,vector<int>& nums){
        
        assert(n >= 0 && n < nums.size());
        
        if (nums[n] != 1) return -1;
        
        int freqIndex = 0;
        
        for (int i = n; i < nums.size(); i++) {
            if (nums[i] == 0) break;
            freqIndex++;
        }
        return freqIndex;
    }
};

int main() {
    
    // example
    int arr[] = {0,1,1,1,0,1,1,1,1};
    vector<int> vec = vector<int>{arr, arr+ sizeof(arr) /sizeof(int)};
    cout << Solution().findMaxConsecutiveOnes(vec) << endl;
    return 0;
}
