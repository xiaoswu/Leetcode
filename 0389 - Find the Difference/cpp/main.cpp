//
//  main.cpp
//  0389 - Find the Difference
//
//  Created by xiaowu on 2019/7/10.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int num_s = 0;
        for (char c : t) {
            num_s += c;
        }
        for (char c : s) {
            num_s -= c;
        }
        return num_s;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
