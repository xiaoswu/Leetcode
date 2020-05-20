//
//  main.cpp
//  42 - Trapping Rain Water
//
//  Created by ynfMac on 2020/1/3.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        for (int i = 0; i < height.size(); i++) {
            int left_max = height[i];
            int right_max = height[i];
            for (int l = i-1; l > 0; l--) {
                left_max = max(height[l], left_max);
            }
            for (int r = i+1; r < height.size(); r++) {
                right_max = max(height[r], right_max);
            }
            ans += min(right_max, left_max) - height[i];
        }
        
        return ans;
    }
    
    int trap1(vector<int>& height) {
         int ans = 0;
         int maxHeight = 0;
         for (int i = 0; i < height.size(); i++) {
             if (height[i] < maxHeight) {
                 ans += maxHeight - height[i];
             }
             maxHeight = max(maxHeight, height[i]);
         }
         return ans;
     }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
