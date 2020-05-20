//
//  main.cpp
//  287 - Find the Duplicate Number
//
//  Created by ynfMac on 2019/6/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        
        for (int i = 0; i < nums.size(); i++) {
            if (set.find(nums[i]) == set.end()) {
                set.insert(nums[i]);
            } else {
                return nums[i];
            }
        }
        
        return 0;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
