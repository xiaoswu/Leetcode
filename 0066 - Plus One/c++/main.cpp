//
//  main.cpp
//  加一
//
//  Created by ynfMac on 2018/10/9.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  详细的解题思路可以参考我在掘金写的一篇文章: https://juejin.im/post/5bbc59f65188255ca00caee0

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits){
        
        digits[digits.size() - 1]++;
        for (int i = digits.size() - 1; i > 0; i--) {
            if (digits[i] == 10) {
                digits[i] = 0;
                digits[i-1]++;
            }
        }
        
        if (digits[0] == 10) {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};

void printVec(const vector<int> &vec){
    for(int n: vec){
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    
    // test 1
    int arr[] = {1,2,3};
    vector<int> vec = vector<int>(arr,arr + sizeof(arr) / sizeof(int));
    printVec(Solution().plusOne(vec));
    
    // test 2
    int arr2[] = {4,3,2,1};
    vector<int> vec2 = vector<int>(arr2,arr2 + sizeof(arr2) / sizeof(int));
    printVec(Solution().plusOne(vec2));
    
    return 0;
}
