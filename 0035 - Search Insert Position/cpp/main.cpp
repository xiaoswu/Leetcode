//
//  main.cpp
//  35 - Search Insert Position
//
//  Created by ynfMac on 2019/6/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int> &nums, int target){
        if (target <= nums[0]) {
            return 0;
        }
        
        if (target > nums[nums.size() - 1]) {
            return nums.size();
        }
        
        if (target == nums[nums.size() - 1]){
            return nums.size() - 1;
        }
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == target) {
                return i;
            }
            
            if ((target > nums[i] && target < nums[i + 1])) {
                return i +1;
            }
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> a = vector<int>{1,3,5,6};
    cout << Solution().searchInsert(a, 5);
    std::cout << "Hello, World!\n";
    return 0;
}
