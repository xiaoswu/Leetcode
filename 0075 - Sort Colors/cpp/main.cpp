//
//  main.cpp
//  leetcode-75-Sort Colors
//
//  Created by ynfMac on 2018/10/12.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用三路快排的思想

#include <iostream>
#include <vector>
#include <cassert>


using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int zero = -1;
        int two = nums.size();
        for (int i = 0; i < two; ) {
            if (nums[i] == 0) {
                swap(nums[i++], nums[++zero]);
            } else if (nums[i] == 1){
                i++;
            } else {
                swap(nums[i], nums[--two]);
            }
        }
    }
};

void printArr(vector<int> nums){
    for(int n:nums){
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    // test 1
    vector<int> vec = {1,2,2,0,1,2,1,0,0};
    Solution().sortColors(vec);
    printArr(vec);
    return 0;
}
