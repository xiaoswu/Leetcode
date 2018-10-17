//
//  main.cpp
//  11 - Container With Most Water
//
//  Created by ynfMac on 2018/10/16.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用双指针法

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& vec){
        
        assert(vec.size() >=2 );
        
        int l = 0;
        int r = vec.size() - 1;
        
        int max = 0;
        
        while (l < r) {
            int height = __height(vec[l], vec[r]);
            int length = __length(l, r);
            if (height * length > max) {
                max = height *length;
            }
            if (vec[l] > vec [r]) {
                r --;
            } else {
                l ++;
            }
        }
        return max;
    }
    
private:
    
    inline int __height(int a, int b){
        return a > b ? b : a;
    }
    
    inline int __length(int a, int b){
        assert(b > a);
        
        return b - a;
    }
};

int main(int argc, const char * argv[]) {
    
    int arr[] = {1,8,6,2,5,4,8,3,7};
    vector<int> cec = vector<int>(arr ,arr + sizeof(arr) / sizeof(int));
    
    cout << Solution().maxArea(cec) << endl;
    
    return 0;
}
