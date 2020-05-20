//
//  main.cpp
//  375 - Guess Number Higher or Lower ||
//
//  Created by ynfMac on 2019/11/11.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

using namespace std;
class Solution {
public:
    int getMoneyAmount(int n) {
        int low = 1;
        int high = n;
        
        while (low <= high) {
            int mid = low + (high - low)/2;
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
    
    int num = Solution().getMoneyAmount(1);
    
    cout << num << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
