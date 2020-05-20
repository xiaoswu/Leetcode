//
//  main.cpp
//  551 - Student attendance Records |
//
//  Created by ynfMac on 2019/7/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <unordered_map>

using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        int a_nums = s[0] == 'A';
        int l_mums = s[0] == 'L';
        
        for (int i = 1; i < s.size(); i ++) {
            if (s[i] == 'A') {
                a_nums++;
            } else if (s[i] == 'L'){
                if (s[i - 1] != 'L' && l_mums <= 2) {
                    l_mums = 1;
                } else {
                    l_mums++;
                }
            }
        }
        return a_nums <= 1 && l_mums <= 2;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
   bool result = Solution().checkRecord("PPALLL");
    
    cout << result << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
