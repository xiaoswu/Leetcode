//
//  main.cpp
//  1 - two sun
//
//  Created by xiaowu on 2018/10/17.
//  Copyright © 2018年 WSAlone. All rights reserved.
//  暴力解法，两层循环。

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    int res[] = {i,j};
                    return vector<int>(res,res + 2);
                }
            }
        }
        
        // 无解的情况,抛出异常。
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
