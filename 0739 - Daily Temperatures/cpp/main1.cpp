//
//  main.cpp
//  739 - Daily Temperatures
//
//  Created by ynfMac on 2020/6/11.
//  Copyright © 2020 ynfMac. All rights reserved.
//   使用递减栈，具体实现过程参考了：https://leetcode-cn.com/problems/daily-temperatures/solution/leetcode-tu-jie-739mei-ri-wen-du-by-misterbooo/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> retVec = vector<int>(T.size(),0);
        stack<int> s = stack<int>();
        
        for (int i = 0; i < T.size(); i++) {
            while (!s.empty() && T[i] > T[s.top()]) {
                auto t = s.top(); s.pop();
                retVec[t] = i - t;
            }
            s.push(i);
        }
        return retVec;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
