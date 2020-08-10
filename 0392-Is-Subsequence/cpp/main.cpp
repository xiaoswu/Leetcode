//
//  main.cpp
//  0392-Is-Subsequence
//
//  Created by ynfMac on 2020/7/27.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>


using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
        int j = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[j]) {
                j++;
            }
        }
        
        return j == s.size()-1;

    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
