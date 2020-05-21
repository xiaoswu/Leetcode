//
//  main.cpp
//  125 - Valid Palindrome
//
//  Created by ynfMac on 2018/10/16.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用对撞指针的思路

#include <iostream>
#include <string>
using namespace std;

class Solution{
    
public:
    
    bool isPalindrome(string s){
        string c = filterString(s);
        
        int l = 0;
        int r = c.size() - 1;
        
        while ( l <= r ) {
            if (c[l++] != c[r--]) {
                return false;
            }
        }
        
        return true;
    }
    
    
private:
    
    string filterString(string s){
        string r;
        for (char c : s) {
            if (isalnum(c)) {
                r +=  tolower(c);
            }
        }
        return r;
    }
};

int main(int argc, const char * argv[]) {
    
    string s = "A man, a plan, a canal: Panama";
    cout << Solution().isPalindrome(s) << endl;
    
    string s2 = "race a car";
    cout << Solution().isPalindrome(s2) << endl;
    
    return 0;
}
