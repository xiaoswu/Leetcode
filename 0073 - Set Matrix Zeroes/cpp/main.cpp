//
//  main.cpp
//  73 - Set Matrix Zeroes
//
//  Created by ynfMac on 2019/11/27.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        
        
        vector<vector<bool>> isZero = vector<vector<bool>>(R,vector<bool>(C,false));
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (matrix[i][j] == 0) {
                    for (int k = 0; k < C; k++) {
                        isZero[i][k] = true;
                    }
                    for (int k = 0; k < R; k++) {
                        isZero[k][j] = true;
                    }
                }
            }
        }
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (isZero[i][j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


void print(vector<vector<int>>&matrix){
    for (vector<int> v : matrix) {
        for (int c : v) {
            cout << c << " ";
        }
        cout << endl;
    }
}


int main(int argc, const char * argv[]) {
    
    vector<vector<int>> matrix = vector<vector<int>>{{1,1,1},{1,0,1},{1,1,1}};
    print(matrix);
    
    Solution().setZeroes(matrix);
    cout << "----------------"<< endl;
    print(matrix);

    
    std::cout << "Hello, World!\n";
    return 0;
}

