//
//  main.cpp
//  75 - 颜色分类
//
//  Created by xiaowu on 2018/8/20.
//  Copyright © 2018年 WSAlone. All rights reserved.
//  两趟扫描，第一趟先计算各个颜色的个数，第二趟按照各个颜色的个数对数组的元素重新赋值

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    void sortColors(vector<int>& nums) {
        int colors[3] = {};
        
        for (int i = 0; i < nums.size(); i++) {
            colors[nums[i]] ++;
        }
        
        int index = 0;
        
        for (int i = 0; i < colors[0]; i++) {
            nums[index++] = 0;
        }
        
        for (int i = 0; i < colors[1]; i++) {
            nums[index++] = 1;
            
        }
        
        for (int i = 0; i < colors[2]; i++) {
            nums[index++] = 2;
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


