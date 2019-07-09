//
//  main.cpp
//  561 - Array Partition I
//
//  Created by ynfMac on 2019/6/13.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums){
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }
        return sum;
    }
};


int main(int argc, const char * argv[]) {
    
    return 0;
}
