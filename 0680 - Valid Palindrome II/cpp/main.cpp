//
//  main.cpp
//  0680 - Valid Palindrome II
//
//  Created by ynfMac on 2020/5/21.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        string c = filterString(s);
        
        int l = 0;
        int r = c.size() - 1;
        
        while (r >= l) {
            if (c[l] != c[r]) {
                if (NumberOfDeletionsAllowed != 0) {
                    NumberOfDeletionsAllowed -= 1;
                    return validPalindrome(s.substr(l + 1,r-l)) || validPalindrome(s.substr(l,r-l));
                } else {
                    return false;
                }
                
            } else {
                l++;
                r--;
            }
        }
        
        return true;

    }
    
private:
    
    // 允许删除的次数
    int NumberOfDeletionsAllowed = 1;

    
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
    cout << Solution().validPalindrome("abcddcbae");

    std::cout << "Hello, World!\n";
    return 0;
}
