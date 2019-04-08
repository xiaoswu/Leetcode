//
//  main.cpp
//  003 - Longest Substring Without Repeating Characters
//
//  Created by xiaowu on 2019/3/18.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Solution {
    
public:
    int lengthOfLongestSubstring(string s){
        int freq[256] = {0};
        int l = 0, r = -1;
        int res = 0;

        while (l < s.size()) {
            // 对数组取值的时候，第一考虑的是要保证数组不越界。
            if (r + 1 < s.size() && freq[s[r+1]] == 0) {
                r++;
                freq[s[r]]++;
                res = max(res, r-l+1);
            } else {
                freq[s[l]] --;
                l++;
            }
        }
        return  res;
    }
};


int main(int argc, const char * argv[]) {
    return 0;
}




