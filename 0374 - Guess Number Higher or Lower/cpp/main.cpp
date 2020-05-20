//
//  main.cpp
//  374 - Guess Number Higher or Lower
//
//  Created by ynfMac on 2019/11/11.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        
        while (low <= high) {
            int mid = low + (high - low)/2;
            
            int res = guess(mid);
            if (res == 0) {
                return mid;
            } else if (res < 0){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    
    return 0;
}
