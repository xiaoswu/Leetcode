//
//  main.cpp
//  0009 - Palindrome Number
//
//  Created by ynfMac on 2020/6/10.
//  Copyright © 2020 ynfMac. All rights reserved.
//  将数字前后颠倒，判断是否相等

#include <iostream>
#include <string>

using namespace std;

class  Solution {
    
public:
    bool isPalindrome(int x) {
        if ( x < 0 ) {
            return false;
        }
        
        int c = 0;
        long  y = x;
        while (y != 0) {
            c = c * 10 + y % 10;
            y = y / 10;
        }
        return c == x;
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    cout << Solution().isPalindrome(923269235) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
