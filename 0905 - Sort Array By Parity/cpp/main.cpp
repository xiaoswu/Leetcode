//
//  main.cpp
//  905 - Sort Array By Parity
//
//  Created by ynfMac on 2019/12/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0;
        int j = A.size();
        
        while (i < j) {
            if (A[i] % 2 == 1) {
                j -= 1;
                swap(A[i],A[j]);
            } else {
                i += 1;
            }
        }
        return A;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
