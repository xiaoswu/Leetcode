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


        int l = next_alpha_numeric(s, 0);
        int r = pre_alpha_numeric(s, s.size() - 1);

        while (l <= r) {
            
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            
            l = next_alpha_numeric(s, l + 1);
            r = pre_alpha_numeric(s, r - 1);
        }
        return true;
    }
    
    
private:
    
    int next_alpha_numeric(const string& s, int index){
        for (int i = index; i < s.size(); i++) {
            if (isalnum(s[i])) {
                return i;
            }
        }
        return s.size();
    }
    
    int pre_alpha_numeric(const string& s, int index){
        for (int i = index; i >= 0; i--) {
            if (isalnum(s[i])) {
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    
    string s = "A man, a plan, a canal: Panama";
    cout << Solution().isPalindrome(s) << endl;
    
    string s2 = "race a car";
    cout << Solution().isPalindrome(s2) << endl;
    
    return 0;
}
