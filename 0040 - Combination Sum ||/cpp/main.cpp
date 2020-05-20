//
//  main.cpp
//  40 - Combination Sum ||
//
//  Created by ynfMac on 2019/10/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
public:
    
    vector<vector<int>> solutions;
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        combinatonSum(candidates, 0, target, vector<int>());
        return solutions;
    }
    
private:
    void combinatonSum(vector<int>& candidates, int start, int target,vector<int> solution){
        
        if (target == 0) {
            solutions.push_back(solution);
            return;
        }
        
        
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i-1]) {
                continue;
            }
            if (target >= candidates[i]) {
                solution.push_back(candidates[i]);
                combinatonSum(candidates, i+1, target-candidates[i], solution);
                solution.pop_back();
            }
        }
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    return 0;
}
