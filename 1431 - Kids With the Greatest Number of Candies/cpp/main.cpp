//
//  main.cpp
//  1431 - Kids With the Greatest Number of Candies
//
//  Created by ynfMac on 2020/6/1.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res = vector<bool>(candies.size(), false);
        
        // 第一遍查找到最大的糖果数。
        int maxCandies = candies[0];
        for (int i = 1; i < candies.size(); i++) {
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }
        
        // 第二遍进行比较。将当前糖果数加上额外的糖果数如果大于等于查找到的最大的糖果数，则为true。
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandies) {
                res[i]  = true;
            }
        }
        
        return res;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
