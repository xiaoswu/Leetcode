//
//  main.cpp
//  219 - Contains Duplicate
//
//  Created by ynfMac on 2018/10/23.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  滑动窗口

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> record;
        for (int i = 0; i < nums.size(); i++) {
            if (record.find(nums[i]) != record.end()) {
                return true;
            }
            
            record.insert(nums[i]);
            
            if (record.size() > k) {
                record.erase(nums[i - k]);
            }
        }
        return false;
    }
};

void printBool(bool yes){
    if (yes) {
        cout << "ture";
    } else {
        cout << "false";
    }
    cout << endl;
    
}

int main() {
    // Example 1
    int k1 = 3;
    int ex1[] = {1,2,3,1};
    vector<int> ex1_vec(ex1,ex1 + (sizeof(ex1) / sizeof(int)));
    printBool(Solution().containsNearbyDuplicate(ex1_vec, k1));
    
    // Example 2
    int k2 = 1;
    int ex2[] = {1,0,1,1};
    vector<int> ex2_vec(ex2,ex2 + (sizeof(ex2) / sizeof(int)));
    printBool(Solution().containsNearbyDuplicate(ex2_vec,k2));
    
    // Example 3
    int k3 = 2;
    int ex3[] = {1,2,3,1,2,3};
    vector<int> ex3_vec(ex3,ex3 + (sizeof(ex3) / sizeof(int)));
    printBool(Solution().containsNearbyDuplicate(ex3_vec,k3));
    
    return 0;
}
