//
//  main.cpp
//  58 - Length of Last Word
//
//  Created by ynfMac on 2019/11/23.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // 从尾部开始遍历
        int length = 0;
        int end = s.length() - 1;
        // 假如尾部有空格，去掉尾部的空格。
        while (s[end] == ' ' && end >= 0) {
            end--;
        }
        
        // 从尾部开始计数。
        while (s[end] != ' ' && end >= 0) {
            end--;
            length++;
        }
        return length;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
