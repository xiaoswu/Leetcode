//
//  main.cpp
//  120 - Triangle
//
//  Created by xiaowu on 2019/1/5.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
    
    public:
        int minimumTotal(vector<vector<int> > &triangle) {
            
            for (int i = triangle.size() - 2; i >= 0; i--) {
                for (int j = 0; j <= i; j++) {
                    triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
                    
                }
            }
            return triangle[0][0];
        }
};

int main() {
    vector<vector<int>> vet = { {-1},
                                {2,3},
                                 {1,-1,-3}
                                };
    
    int b = Solution().minimumTotal(vet);
    cout << b << endl;
    
    
    return 0;
}
