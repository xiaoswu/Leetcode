//
//  main.cpp
//  4 - Median of Two Sorted Arrays
//
//  Created by ynfMac on 2019/11/5.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() == 0 && nums2.size() == 0) {
            return 0;
        }
        vector<int> allNums;
        // 将两个数组合并为一个按照从小到大排序的数组，然后对这个数组取中位数。
        int d = 0,
            p = 0;
        
        while (d < nums1.size() || p < nums2.size()) {
            
            if (d == nums1.size()) {
                for (int i = p; i < nums2.size(); i++) {
                    allNums.push_back(nums2[p++]);
                }
            } else if (p == nums2.size()){
                for (int i = d; i < nums1.size(); i++) {
                    allNums.push_back(nums1[d++]);
                }
            } else if (nums1[d] > nums2[p]){
                allNums.push_back(nums2[p++]);
            } else {
                allNums.push_back(nums1[d++]);
            }
        }
        
        double res = 0;
        if (allNums.size() < 2) {
            res = allNums[0];
        } else {
            
            if (allNums.size() % 2 == 0) {
                res = (double)(allNums[allNums.size() / 2] + allNums[allNums.size() / 2 - 1]) / 2;
            } else {
                res = (double)allNums[allNums.size() / 2];
            }
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> nums1 = vector<int>{1,2};
    vector<int>nums2 = vector<int>{3,4};
    
    double d = Solution().findMedianSortedArrays(nums1, nums2);

    cout << d << endl;
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
