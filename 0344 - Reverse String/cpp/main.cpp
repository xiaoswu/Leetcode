//
//  main.cpp
//  344 - Reverse String
//
//  Created by xiaowu on 2018/10/17.
//  Copyright © 2018年 WSAlone. All rights reserved.
//

/* 解题思路: 首字符与尾字符交换，第二个字符与倒数第二个字符交换，第三个字符与倒数第三个字符交换，以此类推 **/

#include <iostream>
#include <string>

using namespace std;

class Solution{
  
public:
    string reverseString(string s) {
        int n = s.size();
        for (int i = 0; i < n/2; i++) {
            char c = s[i];
            s[i]  = s[n-1-i];
            s[n-1-i] = c;
        }
        return s;
    }
};

int main() {
    
    string s = "hello";
    cout << Solution().reverseString(s) << endl;
    
    
    string s1 = "A man, a plan, a canal: Panama";
    cout << Solution().reverseString(s1) << endl;

    return 0;
}
