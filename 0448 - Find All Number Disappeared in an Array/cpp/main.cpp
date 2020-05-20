//
//  main.cpp
//  448 - Find All Number Disappeared in an Array
//
//  Created by ynfMac on 2019/8/1.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> p;
        for (int i = 0; i < nums.size(); i++) {
            p.insert(nums[i]);
        }
        
        vector<int> ret;
        for (int i = 1; i <= nums.size(); i++) {
            if (p.find(i) == p.end()) {
                ret.push_back(i);
            }
        }
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    
    return 0;
}
