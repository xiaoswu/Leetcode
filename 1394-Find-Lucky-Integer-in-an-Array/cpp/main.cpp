//
//  main.cpp
//  1394-Find-Lucky-Integer-in-an-Array
//
//  Created by ynfMac on 2020/6/18.
//  Copyright © 2020 ynfMac. All rights reserved.
//


// leetcode链接：https://leetcode-cn.com/problems/find-lucky-integer-in-an-array/

// 使用字典，key为数字，value为值。然后遍历字典 找到key == value的数，题目要求有多个满足条件的数时取最大，所以在遍历字典时，要用一个变量，同步更新满足条件的最大值。
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> map = unordered_map<int,int>();
        for (int a : arr) {
            map[a]++;
        }
        
        int maxSameNum = -1;
        for (auto [key,value] : map) {
            if (key == value) {
                maxSameNum = max(maxSameNum, key);
            }
        }
        return maxSameNum;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
