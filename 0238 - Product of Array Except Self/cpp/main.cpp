//
//  main.cpp
//  238 - Product of Array Except Self
//
//  Created by ynfMac on 2018/11/1.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        assert(nums.size() > 1);
        int count = nums.size();
        
        vector<int> result(count,1);
        vector<int> left(count, 1);
        vector<int> right(count, 1);
        
        // 计算数组中某个元素左边的乘积
        for (int i = 1; i < count; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }
        
        // 计算数组中某个元素右边的乘积
        for (int i = count - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }
        
        // 两者相乘
        for (int i = 0; i < count; i++) {
            result[i] = left[i] * right[i];
        }
        
        return result;
    }
};

void printVec(vector<int>& vec){
    for (int n : vec){
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    
    int arr[] = {1,2,3,4};
    vector<int> vec(arr,arr + sizeof(arr) / sizeof(int));
    
    vector<int> res = Solution().productExceptSelf(vec);
    
    printVec(res);
    
    return 0;
}
