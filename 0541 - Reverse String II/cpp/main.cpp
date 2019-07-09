//
//  main.cpp
//  541 - Reverse String II
//
//  Created by ynfMac on 2019/6/12.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        
        for (int i = 0; i < s.size(); i += 2 * k) {
            _reverse(s, i, i + k);
        }
        
        
        return s;
    }
    
private:
    void _reverse(string &s, int i, int j){
        j = min(j, (int)s.size());
        j --;
        while (i < j) {
            swap(s[i ++], s[j --]);
        }
    }
};


int main(int argc, const char * argv[]) {
    
    string s = Solution().reverseStr("abcdefg2", 3);
    cout << s << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
