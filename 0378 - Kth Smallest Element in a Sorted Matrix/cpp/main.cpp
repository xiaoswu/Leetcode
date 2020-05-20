//
//  main.cpp
//  378. Kth Smallest Element in a Sorted Matrix
//
//  Created by ynfMac on 2019/12/20.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int v = matrix.size();
        if (v*v < k) {
            return 0;
        }
        
        int m = v*v - k + 1;
        
        priority_queue<int,vector<int>,greater<int>> q;
        for (int i = 0; i < v; i++) {
            for (int j = 0; j <v; j++) {
                if (q.size() < k) {
                    q.push(matrix[i][j]);
                } else {
                    if (matrix[i][j] > q.top()) {
                        q.pop();
                        q.push(matrix[i][j]);
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
