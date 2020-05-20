//
//  main.cpp
//  9 - Palindrome Number
//
//  Created by ynfMac on 2019/12/10.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string s = to_string(x);
        
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
