//
//  main.cpp
//  33- Search in Rotated Sorted Array
//
//  Created by ynfMac on 2019/11/5.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int res = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]) {
                res = i;
                break;
            }
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
