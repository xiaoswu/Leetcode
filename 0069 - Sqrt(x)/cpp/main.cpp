//
//  main.cpp
//  69 - Sqrt(x)
//
//  Created by ynfMac on 2019/6/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        long long  l = 0;
        long long  r = x;
        long  m;
        
        while (l <= r) {
            m = l + (r - l) / 2;
            
            long long num = m * m;
            if (num == x) {
                return m;
            } else if (num > x){
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return r;
    }
};

int main(int argc, const char * argv[]) {
    
    cout << Solution().mySqrt(8) << endl;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
