//
//  main.cpp
//  34 - Find First and Last Position of Element in Sorted Array
//
//  Created by ynfMac on 2019/11/6.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // 二分收索
        int start = 0;
        int end = 0;
        int n = nums.size();
        int m = nums.size();
        bool hasfind = false;
        while (start < n) {
            int middle = start + (n - start)/2;
            if (nums[middle] < target) {
                start = middle + 1;
            } else {
                n = middle;
                if (nums[middle] == target) {
                    hasfind = true;
                }
            }
        }
        
        while (end < m) {
            int middle = end + (m - end)/2;
            
            if (nums[middle] <= target) {
                end = middle + 1;
                if (nums[middle] == target) {
                    hasfind = true;
                }
            } else {
                m = middle;
            }
        }
        
        if (!hasfind) {
            return vector<int>{-1, -1};
        }
        
        return vector<int>{start,end-1};
    }
};


int main(int argc, const char * argv[]) {
    vector<int> d = vector<int>{5,7,7,7,8,10};
    
    vector<int> vec = Solution().searchRange(d, 7);
    
    for (int a : vec) {
        cout << a << " ";
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
