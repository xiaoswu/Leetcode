//
//  main.cpp
//  两个数组的交集
//
//  Created by ynfMac on 2018/10/9.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用set

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> nums1Set = set<int>(nums1.begin(),nums1.end());
        
        set<int> resultSet;
        for (int i = 0; i < nums2.size(); i ++) {
            if (nums1Set.find(nums2[i]) != nums1Set.end()) {
                resultSet.insert(nums2[i]);
                
            }
        }
        return vector<int>(resultSet.begin(),resultSet.end());
    }
        
};

void printVec(const vector<int> &vec){
    for(int n: vec){
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    
    const int nums1[] = {1,2,2,1};
    const int nums2[] = {2,2};
    
    vector<int> vec1 = vector<int>(nums1, nums1 + sizeof(nums1) / sizeof(int));
    vector<int> vec2 = vector<int>(nums2, nums2 + sizeof(nums2) / sizeof(int));
    
    printVec(Solution().intersect(vec1, vec2));
    
    return 0;
}
