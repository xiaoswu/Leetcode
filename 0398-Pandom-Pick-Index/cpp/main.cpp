//
//  main.cpp
//  0398-Pandom-Pick-Index
//
//  Created by ynfMac on 2020/6/18.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
private:
    vector<int> _nums;
    unordered_map<int, vector<int>> _map;
    
    int randomElement(vector<int> nums){
        
        int retIndex = 0;
        if (nums.size()  > 1) {
            retIndex = rand() % nums.size();
        }
        
        return nums[retIndex];
    }
    
public:
    Solution(vector<int>& nums) {
        _nums = nums;
        _map = unordered_map<int, vector<int>>();
    }
    
    int pick(int target) {
        if (_nums.size() == 0) {
            return -1;
        }
        
        if (_map.find(target) != _map.end()) {
            vector<int> v = _map[target];
            return randomElement(v);
        }
        
        vector<int>indexs = vector<int>();
        for (int i = 0; i < _nums.size(); i++) {
            if (_nums[i] == target) {
                indexs.push_back(i);
            }
        }
        
        if (indexs.size() == 0) {
            throw "traget 不在数组中";
        }
        
        _map[target] = indexs;
        
        return randomElement(indexs);
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
