//
//  main.cpp
//  1103 - Distribute Candies to People
//
//  Created by xiaowu on 2019/7/14.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> vec = vector<int>(num_people, 0);
        
        int i = 0;
        int currentCandies = 0;
        while (candies > currentCandies) {
            currentCandies += 1;
            vec[i] += currentCandies;
            candies -= currentCandies;
            i++;
            if (i == vec.size()) {
                i = 0;
            }
        }
        
        vec[i] += (candies);
        return vec;
    }
};

int main(int argc, const char * argv[]) {
    Solution().distributeCandies(7, 4);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
