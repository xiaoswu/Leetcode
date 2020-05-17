//
//  main.cpp
//  1118 - How Many Days in a Month
//
//  Created by xiaowu on 2019/7/14.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numberOfDays(int Y, int M) {
        // 整体的判断逻辑是：判断月份，如果是1，3，5，7，8，10，12月，则有31天，然后剩下的不属于2月，则有30天，最后剩下2月，再判断这一年是否为闰年，闰年为29天，不为闰年就是28天。
        unordered_set<int> thirtyOneDaysMonth = {1,3,5,7,8,10,12};
        if (thirtyOneDaysMonth.find(M) != thirtyOneDaysMonth.end()) {
            return 31;
        }
        
        if (M != 2) {
            return 30;
        } else {
           return isLeapYear(Y) ? 29 : 28;
        }
    }
    
private:
    
    // 判断是否是润年
    bool isLeapYear( int y){
        return y % 4 == 0 || y % 400 == 0;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
