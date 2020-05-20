//
//  main.cpp
//  977 - Squares of a Sorted Array
//
//  Created by ynfMac on 2019/6/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        // 先求平方
        for (int i = 0; i < A.size(); i++) {
            A[i] = pow(A[i], 2);
        }
        
        // 然后再排序
        sort(A.begin(), A.end());
        
        return A;
    }
};

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    return 0;
}
