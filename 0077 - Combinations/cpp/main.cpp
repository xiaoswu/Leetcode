//
//  main.cpp
//  77 - Combinations
//
//  Created by xiaowu on 2019/2/26.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> res;
    
    void generateCombinations(int n,int k,int start,vector<int> & c){
        // 递归的结束条件
        if (c.size() == k){
            res.push_back(c);
            return;
        }
        for (int i = start; i <= n-(k-c.size()+1); i++) {
            c.push_back(i);
            generateCombinations(n, k, i + 1, c);
            // 回溯，将上一步push_back进数组的元素拿出来
            c.pop_back();
        }
        return;
    }
    
public:
    vector<vector<int>> combine(int n,int k){
        res.clear();
        if (n <= 0 || k <= 0 || k > n) {
            return res;
        }
        vector<int> c;
        generateCombinations(n, k, 1, c);
        return res;
    }
};

int main(int argc, const char * argv[]) {
    return 0;
}
