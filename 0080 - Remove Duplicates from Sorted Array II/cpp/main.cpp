//
//  main.cpp
//  80 - Remove Duplicates from Sorted Array II
//
//  Created by ynfMac on 2020/1/3.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return n;
        }
        
        int sp = 1;
        for (int fp = 2; fp < n; fp++) {
            if (nums[fp] != nums[sp - 1]) {
                nums[++sp] = nums[fp];
            }
        }
        return sp + 1;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums = vector<int>{1,1,1,2,2,3};
    
    Solution().removeDuplicates(nums);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
