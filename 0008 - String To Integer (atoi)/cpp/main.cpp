//
//  main.cpp
//  8 - String To Integer (atoi)
//
//  Created by ynfMac on 2019/12/21.
//  Copyright © 2019 ynfMac. All rights reserved.
//
// 先去空格

// 判断首位，除负号，数字外，如果是0，就直接返回。，如果符号后面紧跟着0，0也要去掉
// 取后面的数字，遇到数字外的字符，停止。
// 进行转换
// 如何确认是数字呢？

#include <iostream>
#include <string>


using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        
        int p = 0;
        
        // 去空格
        while ( str[p] == ' ' && p < str.size()) {
            p++;
        }
        
        if (p == str.size()) {
            return 0;
        }
        
        // 确定正负号
        char firstNumber = str[p];
        bool isnegativeN = false;
        if (firstNumber == '-' || firstNumber == '+') {
            p++;
            if (firstNumber == '-') {
                isnegativeN = true;
            }
        }

        // 除掉首位的0
        while ( str[p] == '0' && p < str.size()) {
            p++;
        }
        
        long res = 0;
        
        // 取数字
        while ( str[p] - '0' >= 0 && str[p] - '0' <= 9 ) {
            int number = str[p] - '0';
            res = res * 10 + number;
            if (res > INT_MAX) {
                break;
            }
            p++;
        }
        
        // 对负号进行处理
        if (isnegativeN) {
            
            if (res >= INT_MAX) {
                return (int)INT_MIN;
            } else return (int)-res;
        }
        
        return res >= INT_MAX  ? (INT_MAX) : (int)res;
    }
};

int main(int argc, const char * argv[]) {
    
    string str = "-0000912834";
    
    int a = Solution().myAtoi(str);
    cout << a << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
