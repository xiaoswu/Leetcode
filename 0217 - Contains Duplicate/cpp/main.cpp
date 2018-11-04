//
//  main.cpp
//  217 - Contains Duplicate
//
//  Created by ynfMac on 2018/10/23.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  use set

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> record;
        for (int i = 0; i < nums.size(); i++) {
            if (record.find(nums[i]) != record.end()) {
                return true;
            }
            record.insert(nums[i]);
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
    int ex1[] = {1,2,3,1};
    vector<int> ex1_vec(ex1,ex1 + (sizeof(ex1) / sizeof(int)));
    printBool(Solution().containsDuplicate(ex1_vec));
    
    // Example 2
    int ex2[] = {1,2,3,4};
    vector<int> ex2_vec(ex2,ex2 + (sizeof(ex2) / sizeof(int)));
    printBool(Solution().containsDuplicate(ex2_vec));
    
    // Example 3
    int ex3[] = {1,1,1,3,3,4,3,2,4,2};
    vector<int> ex3_vec(ex3,ex3 + (sizeof(ex3) / sizeof(int)));
    printBool(Solution().containsDuplicate(ex3_vec));
    
    
    return 0;
}
