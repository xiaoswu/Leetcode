//
//  main.cpp
//  345 - Reverse Vowels of a String
//
//  Created by ynfMac on 2018/10/16.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用对撞指针的思路

#include <iostream>
#include <string>

using namespace std;

class Solution {
    
private:
    
    bool isVowel(char c) const {
        return c == 'a'
            || c == 'e'
            || c == 'i'
            || c == 'o'
            || c == 'u'
            || c == 'A'
            || c == 'E'
            || c == 'I'
            || c == 'O'
            || c == 'U';
    }
  
public:
    
    string reverseVowels(string s){
        int l = 0;
        int r = s.size() - 1;
        
        while (l <= r) {
            while (l <= r && !isVowel(s[l])) {
                l ++;
            }
            
            while (l <= r && !isVowel(s[r])) {
                r --;
            }
            if (!(l <= r)) {
                break;
            }
            
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
        
        return s;
    }
};

int main() {
    
    // test 1
    string s = "hello";
    cout << Solution().reverseVowels(s) << endl;
    
    // test 2
    string s2 = "leetcode";
    cout << Solution().reverseVowels(s2) << endl;
    
    return 0;
}
