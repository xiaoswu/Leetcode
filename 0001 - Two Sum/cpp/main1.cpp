//
//  main.cpp
//  1 - two sun
//
//  Created by xiaowu on 2018/10/17.
//  Copyright © 2018年 WSAlone. All rights reserved.
//  使用查找表

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (record.find(complement) != record.end()) {
                int res[2] = {i,record[complement]};
                return vector<int>(res,res + 2);
            }
            record[nums[i]] = i;
        }
        
        throw invalid_argument("the input has no solution");
    }
};


void printVec(const vector<int> &vec){
    
    for(int i: vec){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    
    const int nums[] = {2,7,11,15};
    
    vector<int> vec = vector<int>(nums, nums + sizeof(nums)/sizeof(int));
    
    int target = 9;
    
    printVec(Solution().twoSum(vec, target));
    
    return 0;
}
