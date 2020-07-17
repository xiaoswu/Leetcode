//
//  main.cpp
//  739 - Daily Temperatures
//
//  Created by ynfMac on 2020/6/11.
//  Copyright © 2020 ynfMac. All rights reserved.
//   暴力枚举法，但是会超出时间限制

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> retVec = vector<int>(T.size(),0);
        
        for (int i = 0; i < T.size(); i++) {
            int k = T[i];
            
            int days = 0;
            for (int j = i + 1; j < T.size(); j++) {
                days ++;
                if (T[j] > k) {
                    retVec[i] = days;
                    break;
                }
            }
        }
        return retVec;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
