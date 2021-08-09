//
//  main.cpp
//  0137-Single-Number ||
//
//  Created by ynfMac on 2021/8/6.
//  Copyright © 2021 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map = unordered_map<int,int>();
        
        for (int num : nums) {
            map[num]++;
        }
        
        for (auto [key,value] : map) {
            if (map[key] == 1) {
                return  key;
            }
        }
        
        return -1;
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
