//
//  main.cpp
//  88 - Merge Sorted Array
//
//  Created by ynfMac on 2019/11/29.
//  Copyright © 2019 ynfMac. All rights reserved.
//  合并两个有序数组

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums1_copy = vector<int>(m,0);
        for (int i = 0; i < m; i++) {
            nums1_copy[i] = nums1[i];
        }
        
        int sum = m + n;
        
        int r = 0;
        int l = 0;
        int j = 0;
        
        
        while (j < sum) {
            if (r == m && l != n) {
                for (;j < sum; j++) {
                    nums1[j] = nums2[l++];
                }
            }  else if (l == n && r != m) {
                for (; j < sum; j++) {
                    nums1[j] = nums1_copy[r++];
                }
            } else {
                if (nums1_copy[r] <= nums2[l]) {
                    nums1[j++] = nums1_copy[r++];
                } else {
                    nums1[j++] = nums2[l++];
                }
            }
        }
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> nums1 = vector<int>{1,2,3,0,0,0};
    vector<int> nums2 = vector<int>{2,5,6};
    
    Solution().merge(nums1,3,nums2, 3);
    
    for (int n : nums1) {
        cout << n << " ";
    }
    cout << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
