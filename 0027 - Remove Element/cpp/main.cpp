//
//  main.cpp
//  27 - Remove Element
//
//  Created by ynfMac on 2018/10/18.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用双指针法

#include <iostream>
#include <vector>

using namespace std;

class Sloution{
    
public:
    int removeElement(vector<int> &nums, int val){
        
        int k = 0;
        for (int n : nums) {
            if (n != val) {
                nums[k++] = n;
            }
        }
        return k;
    }
};

int main() {
    
    // test 1
    const int arr[] = {3,2,2,3};
    vector<int> vec = vector<int>(arr,arr + (sizeof(arr) / sizeof(int)));
    cout << Sloution().removeElement(vec, 2) << endl;
    
    // test 2
    const int arr2[] = {0,1,2,2,3,0,4,2};
    vector<int> vec2 = vector<int>(arr2,arr2 + (sizeof(arr2) / sizeof(int)));
    cout << Sloution().removeElement(vec2, 2) << endl;
    
    
    return 0;
}
