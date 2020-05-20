//
//  main.cpp
//  415 - Add Strings
//
//  Created by ynfMac on 2019/12/24.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int a = num1.size();
        int b = num2.size();
        
        // 全部初始化为0
        int longsize = a > b ? a : b;
        int shortSize = a > b ? b : a;
        string ret;
        for (int i = 0; i <= longsize; i++) {
            ret += '0';
        }
        
        
        for (int i = 0; i < ret.size() - 1; i++) {
            if (i < shortSize) {
                int m = num1[i] - '0';
                int n = num2[i] - '0';
                int j = ret[i] - '0';
                if (m + n + j >= 10) {
                    ret[i] = m + n + j - 10;
                    ret[i+1] += 1;
                } else {
                    ret[i] = j + m + n;
                }
            } else {
                string s = (longsize == a ? num1 : num2);
                int m = s[i] - '0';
                if (ret[i] == '1') {
                    if ( m + 1 >= 10) {
                        ret[i + 1] = 1;
                        ret[i] = 0;
                    } else {
                        ret[i] = s[m + 1];
                    }
                    
                } else {
                    ret[i] = s[i];
                }
            }
        }
        
        if (ret[ret.size() - 1] == '0') {
            
        }
        
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    
    cout <<Solution().addStrings("11", "22") << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
