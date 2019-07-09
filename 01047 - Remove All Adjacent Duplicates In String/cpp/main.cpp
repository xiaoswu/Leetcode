//
//  main.cpp
//  1047 - Remove All Adjacent Duplicates In String
//
//  Created by ynfMac on 2019/6/1.
//  Copyright © 2019 ynfMac. All rights reserved.
//  string::back 获取字符串的最后一个字符
//  string::pop_back 移除最后一个字符

#include <iostream>


using namespace std;

class Solution {
public:
    string removeDuplicates(string S){
        string res = "";
        for (char c : S) {
            if (!res.size() || res.back() != c) {
                res += c;
            } else {
                res.pop_back();
            }
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
