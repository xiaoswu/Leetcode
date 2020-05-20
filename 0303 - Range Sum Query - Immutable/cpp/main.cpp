//
//  main.cpp
//  303 - Range Sum Query - Immutable
//
//  Created by ynfMac on 2019/7/5.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class NumArray {
    
private:
    vector<int> data;
public:
    NumArray(vector<int>& nums) {
        data.push_back(0);
        
        // data.back 返回数组的最后一个元素的值.
        for (int num: nums) {
            data.push_back(data.back() + num);
        }
    }
    
    int sumRange(int i, int j) {
        i ++;
        j ++;
        return data[j] - data[i - 1];
    }
};

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    return 0;
}
