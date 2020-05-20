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
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int a = i^j;
                if (a == 0) {
                    return nums[j];
                }
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
