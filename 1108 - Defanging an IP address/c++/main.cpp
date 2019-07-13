//
//  main.cpp
//  1108 - Defanging an IP address
//
//  Created by xiaowu on 2019/7/14.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        
        int len = address.size();
        for (int i = 0; i < len; i++) {
            if (address[i] == '.') {
                address.insert(i, "[");
                address.insert(i + 2, "]");
                len += 2;
                i += 2;
            }
        }
        return address;
    }
};

int main(int argc, const char * argv[]) {
    
    string s = "255.100.50.0";
    
   string s1 = Solution().defangIPaddr(s);
    
    cout << s1 << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
