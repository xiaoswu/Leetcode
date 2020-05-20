//
//  main.cpp
//  48 - Rotate Image
//
//  Created by ynfMac on 2019/8/1.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int s = matrix.size();
        
        for (int i = 0; i < s; i++) {
            for (int j = i; j < s; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for (int i = 0; i < s; i ++) {
            for (int j = 0; j < (s - 1) / 2; j ++) {
                swap(matrix[i][j], matrix[i][s - j - 1]);
            }
        }
    }
};


int main(int argc, const char * argv[]) {
    
    vector<vector<int>> res = vector<vector<int>>{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    Solution().rotate(res);
    
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res.size(); j++) {
            cout << res[i][j] << "  ";
        }
        cout << endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
