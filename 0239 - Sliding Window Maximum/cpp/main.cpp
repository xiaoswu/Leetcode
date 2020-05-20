//
//  main.cpp
//  239 - Sliding Window Maximum
//
//  Created by ynfMac on 2019/12/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int sum = 0;
        int index = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        for (int i = k; k < nums.size(); k++) {
            
            if (sum - nums[i - k] + nums[i] > sum) {
                sum = sum - nums[i - k] + nums[i];
                index = i-k+1;
            };
            cout << sum - nums[i - k] + nums[i] << endl;
            cout << sum << endl;
        }
        
        vector<int> result;
        for (int i = index; i < index + k; i++) {
            result.push_back(nums[i]);
        }
        
        return result;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> vec = vector<int>{1,3,-1,-3,5,3,6,7};
    
    vector<int> res = Solution().maxSlidingWindow(vec, 3);
    
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
