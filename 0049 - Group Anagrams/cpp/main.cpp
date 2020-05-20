//
//  main.cpp
//  49 - Group Anagrams
//
//  Created by ynfMac on 2019/12/7.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            m[key].push_back(s);
        }
        
        vector<vector<string>> res;
        for (const auto& p :m) {
            res.push_back(p.second);
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    return 0;
}
