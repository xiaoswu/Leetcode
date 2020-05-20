//
//  main.cpp
//  1221 - Split a String in Balanced Strings
//
//  Created by ynfMac on 2019/12/25.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;
class Solution {
public:
    int balancedStringSplit(string s){
        int Rnum = 0,Lnum = 0,n = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                Rnum++;
            }
            if (s[i] == 'L') {
                Lnum++;
            }
            if (Rnum == Lnum) {
                n++;
            }
        }
        return n;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
