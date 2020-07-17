//
//  main.cpp
//  35 - Search Insert Position
//
//  Created by ynfMac on 2019/6/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//  直接一趟循环根据值的大小进行比较 时间复杂度0(n),空间复杂度0(1)

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int> &nums, int target){
        int length = nums.size();
        if( length == 0 ){ return 0;}
        if(target <= nums[0]) {
            return 0;
        }

        for(int i = 1; i < length;i ++) {
            if ( target == nums[i] || target > nums[i - 1] && target < nums[i] ) {
                 return i;
            }
        }

        return length;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> a = vector<int>{1,3,5,6};
    cout << Solution().searchInsert(a, 5);
    std::cout << "Hello, World!\n";
    return 0;
}
