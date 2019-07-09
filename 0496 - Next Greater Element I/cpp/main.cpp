//
//  main.cpp
//  496 - Next Greater Element I
//
//  Created by ynfMac on 2019/6/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//  暴力解法

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int> ret;
        
        for (int i = 0; i < nums1.size(); i++) {
            int max = -1;
        
            int index = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    index = j;
                }
                
                if (index >= 0  && nums2[j] > nums1[i]) {
                    max = nums2[j];
                    break;
                }
            }
            
            ret.push_back(max);
        }
        
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
