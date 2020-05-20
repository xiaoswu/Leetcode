//
//  main.cpp
//  668. Kth Smallest Number in Multiplication Table
//
//  Created by ynfMac on 2019/12/20.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;
class Solution {
public:
    int findKthNumber(int m, int n, int k) {
            
            if (m*n < k) {
                return 0;
            }
            
            int c = m*n - k + 1;
            
            priority_queue<int,vector<int>,greater<int>> q;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j <n; j++) {
                    int num = (i+1)*(j+1);
                    if (q.size() < c) {
                        q.push(num);
                    } else {
                        if (num > q.top()) {
                            q.pop();
                            q.push(num);
                        }
                    }
                }
            }
            return q.top();
        }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
