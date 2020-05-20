//
//  main.cpp
//  852 - Peak Index in a Mountain Array
//
//  Created by ynfMac on 2019/6/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int l = 0;
        int r = A.size() - 1;
        int m;
        while (l < r) {
            m = l + (r - l) / 2;
            if (A[m] > A[m + 1] && A[m] > A[m - 1]) {
                return m;
            } else if (A[m + 1] > A[m]){
                l = m;
            } else {
                r = m;
            }
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> rec = vector<int>{1,2,4,1};
    cout << Solution().peakIndexInMountainArray(rec) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
