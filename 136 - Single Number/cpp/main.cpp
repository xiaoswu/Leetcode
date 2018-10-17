//
//  main.cpp
//  只出现一次的数字
//
//  Created by ynfMac on 2018/10/10.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <cassert>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        assert(nums.size() % 2 == 1);
       // 声明一个map
        map<int,int> m;
        // 遍历数组，以数组元素为key,出现次数为value,存入map.
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        // 遍历map,找出value为一的数组元素
        int res = 0;
        map<int,int>::iterator iter;
        for (iter = m.begin(); iter != m.end(); iter++) {
            if (iter->second == 1) {
                res = iter->first;
            }
        }
        return res;
    }
};

int main() {
    // test 1
    const int arr[] = {2,2,1};
    vector<int> vec = vector<int>(arr,arr + sizeof(arr) / sizeof(int));
    cout << Solution().singleNumber(vec) << endl;
    
    
    // test 2
    const int arr2[] = {4,1,2,1,2};
    vector<int> vec2 = vector<int>(arr2,arr2 + sizeof(arr2) / sizeof(int));
    cout << Solution().singleNumber(vec2) << endl;
    
    return 0;
}
