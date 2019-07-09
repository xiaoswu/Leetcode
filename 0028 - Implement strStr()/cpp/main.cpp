//
//  main.cpp
//  28 - Implement strStr()
//
//  Created by ynfMac on 2019/6/13.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
using namespace std;


class Solution {
public:
    int strStr1(string haystack, string needle) {
        int n = haystack.size(),m = needle.size();
        for (int i = 0; i <= n - m; i ++) {
            int j = 0;
            for (j = 0; j < needle.size(); j++) {
                
                if(needle[j] != haystack[j + i]){
                    break;
                }
            }
            
            if (j == needle.size() ) {
                return i;
            }
        }
        return -1;
    }
    
    
    int strStr(string haystack, string needle) {
        if (haystack == needle) {
            return 0;
        }
        
        if (needle == "") {
            return 0;
        }
        
        if (needle.size() > haystack.size()) {
            return -1;
        }
        
        int subStrCount = 0;
        bool compare = false;
        for ( int i = 0; i < haystack.size(); i++) {
            if (compare) {
                if (haystack[i] == needle[subStrCount]) {
                    subStrCount++;
                } else {
                    i = i - subStrCount; // 回滚
                    subStrCount = 0;
                    compare = false;
                }
            } else {
                if (haystack[i] == needle[0]) {
                    compare = true;
                    subStrCount++;
                }
            }
            
            if (subStrCount == needle.size()) {
                return i - subStrCount + 1;
            }
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    int c = Solution().strStr1("mississippi", "pi");
    cout << c << endl;
    
    return 0;
}
