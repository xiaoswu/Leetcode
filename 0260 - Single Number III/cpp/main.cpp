//
//  main.cpp
//  260 - Single Number III
//
//  Created by ynfMac on 2018/10/25.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        
        unordered_map<int, int> record;
        
        for (int i = 0; i < nums.size(); i++) {
            record[nums[i]]++;
        }
        
        unordered_map<int, int>::iterator iter;
        for (iter = record.begin(); iter != record.end(); iter++) {
            if (record[iter->first] == 1) {
                res.push_back(iter->first);
            }
        }
        return res;
    }
};

void printVec(vector<int> & vec){
    for (int n : vec) {
        cout << n << " ";
    }
    cout << endl;

}

int main() {
    
    // example 1
    int arr[] = {1,2,1,3,2,5};
    vector<int> vec{arr,arr + (sizeof(arr) / sizeof(int))};
    
    vector<int> res = Solution().singleNumber(vec);
    printVec(res);
    
    
    return 0;
}
