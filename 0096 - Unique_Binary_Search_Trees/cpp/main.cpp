//
//  main.cpp
//  96 Unique_Binary_Search_Trees
//
//  Created by ynfMac on 2019/10/14.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> G(n + 1, 0);
        
        
        G[0] = 1;
        G[1] = 1;
        
        for (int i = 2; i <= n; i ++) {
            for (int j = 1; j <= i; j++) {
                G[i] += G[j - 1] * G[i - j];
            }
        }
        return G[n];
    }
    
private:
   
};

int main(int argc, const char * argv[]) {
    
    int c = Solution().numTrees(3);
    cout << c << endl;
    
    
    return 0;
}
