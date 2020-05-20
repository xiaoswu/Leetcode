//
//  main.cpp
//  384 - Shuffle an Array
//
//  Created by ynfMac on 2019/8/2.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
private:
    vector<int> nums;
public:
    Solution(vector<int>& nums){
        for (int e : nums) {
            this->nums.push_back(e);
        }
    }
    
    vector<int> reset(){
        return nums;
    }
    
    vector<int> shuffle() {
        vector<int> ret;
        for (int e : nums) {
            ret.push_back(e);
        }
        
        for (int i = ret.size() - 1; i >= 0; i--) {
            swap(ret[i], ret[rand() % (i + 1)]);
        }
        
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
