//
//  main.cpp
//  796 - Rotate String
//
//  Created by ynfMac on 2019/6/13.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;


class Solution {
public:
    bool rotateString(string A, string B) {
        if (A == "" || B == "") {
            return false;
        }
        
        if (A.size() != B.size()) {
            return false;
        }
        
        int loopCount = A.size();
        for (int i = 1; i <= loopCount; i++) {
            // 每移动一位，做一次比较
            _rotate(A);
            if (A == B) {
                return true;
            }
        }
        return false;
    }
    
    // 移动一位
    void _rotate(string &A){
        int p = A[A.size() - 1];
        for (int i = A.size() - 1 - 1; i >= 0; i--) {
            int temp = p;
            p = A[i];
            A[i] = temp;
        }
        A[A.size() - 1] = p;
    }
};


int main(int argc, const char * argv[]) {
    string s = "124455";
    
    Solution()._rotate(s);
    
    cout << s << endl;
    return 0;
}
