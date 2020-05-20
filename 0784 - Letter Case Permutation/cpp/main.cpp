//
//  main.cpp
//  784 - Letter Case Permutation
//
//  Created by ynfMac on 2019/10/31.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        
        for (int i = 0; i < S.size(); i++) {
            if (isupper(S[i])) { // 判断是否为大写字母
                S[i] = tolower(S[i]);
            }
        }
        vector<string> res;
        string v;
        solve(S, 0,v, res);
        return res;
    }
    
private:
    void solve(string& s, int index, string& cur_res, vector<string>& res){
        if (cur_res.size() == s.size()) {
            res.push_back(cur_res);
            return;
        }
        
        
    }
};

int main(int argc, const char * argv[]) {
    
    Solution().letterCasePermutation("123b");
    std::cout << "Hello, World!\n";
    return 0;
}
