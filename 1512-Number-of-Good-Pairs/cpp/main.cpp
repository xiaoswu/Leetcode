//
//  main.cpp
//  1512-Number-of-Good-Pairs
//
//  Created by ynfMac on 2020/7/17.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        unordered_map<int, int> m;
        for (int num : nums) {
            m[num]++;
        }
        
        int result = 0;
        
        for (auto iter : m) {
            if (iter.second > 1) {
                for (int i = 1; i < iter.second; i++) {
                    result += i;
                }
            }
        }
        
        return result;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> res = vector<int>{1,1,2,3,4,5,4,4};
    
    int a = Solution().numIdenticalPairs(res);
    
    cout << a << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
