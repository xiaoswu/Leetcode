//
//f  main.cpp
//  485 - Max Consecutive Ones
//
//  Created by ynfMac on 2019/6/13.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = nums[0];
        
        int MaxOnes = 0;
        for (int i = 1; i < nums.size() ; i ++) {
            if (nums[i] == 1) {
                k++;
            } else{
                if (k != 0) {
                    MaxOnes = max(MaxOnes, k);
                    k = 0;
                }
            }
        }
        return max(MaxOnes,k);
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> sArray = {1,0,1,1,0,1};
    int a = Solution().findMaxConsecutiveOnes(sArray);
    cout << a << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
