//
//  main.cpp
//  0035-Search-Insert-Position
//
//  Created by ynfMac on 2020/7/17.
//  Copyright © 2020 ynfMac. All rights reserved.
//  因为是一个有序的数组，所以可以使用二分搜索的方法来解决，时间复杂度0(logn),空间复杂度0(1).

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        if(nums.size() == 0) {
            return 0;
        }
        
        if (target <= nums[0]) {
            return 0;
        }
        
        int left = 0;
        int right = length - 1;
        
        while (left <= right) {
            int middle = left + ((right - left) >> 1);
            if (target == nums[middle]) {
                return middle;
            } else if (target > nums[middle]){
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        return right + 1;
        
    }
};

int main(int argc, const char * argv[]) {
    vector<int> vec = vector<int>{1};
    int a = Solution().searchInsert(vec, 1);
    cout << a << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
