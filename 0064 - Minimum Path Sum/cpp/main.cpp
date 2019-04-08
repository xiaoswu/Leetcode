//
//  main.cpp
//  64 - Minimum Path Sum
//
//  Created by xiaowu on 2019/1/7.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i_size = grid.size() - 1;
        int j_size = grid[0].size() - 1;
        
        for (int i = i_size; i >= 0; i--) {
            for (int j = j_size; j >= 0; j--) {
                
                if (j == j_size && i != i_size) {
                    grid[i][j] +=  grid[i+1][j];
                } else if (j != j_size && i == i_size){
                    grid[i][j] +=  grid[i][j+1];
                } else if (j != j_size && i != i_size){
                    grid[i][j] += min(grid[i+1][j], grid[i][j+1]);
                }
            }
        }
        return grid[0][0];
    }
};


int main(int argc, const char * argv[]) {
    
    vector<vector<int>> vet = { {1,3,1},
                                {1,5,1},
                                {4,2,1}
                                    };
    
    int b = Solution().minPathSum(vet);
    cout << b << endl;
    return 0;
}
