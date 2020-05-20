//
//  main.cpp
//  540 - Single Element in a Sorted Array
//
//  Created by ynfMac on 2019/12/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        assert(nums.size() % 2 != 0);
        if (nums.size() == 1) {
            return nums[0];
        }
        for (int i = 0; i < nums.size()-1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec = vector<int>{1,1,2};
    cout << Solution().singleNonDuplicate(vec) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
