//
//  main.cpp
//  703 - Kth Largest Element in a Stream
//
//  Created by ynfMac on 2019/12/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class KthLargest {

private:
    int k;
    priority_queue<int,vector<int>,greater<int>> q;
    
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int i = 0; i < nums.size(); i++) {
            add(nums[i]);
        }
        
    }
    
    int add(int val) {
        if (q.size() < k) {
            q.push(val);
        } else if (val > q.top()) {
            q.pop();
            q.push(val);
        }
        
        return q.top();
    }
};

int main(int argc, const char * argv[]) {
    
    int k = 3;
    vector<int> arr = vector<int>{4,5,8,2};
    KthLargest * kthLargest = new class KthLargest(k,arr);
    
    
    kthLargest->add(3);
    kthLargest->add(5);
    kthLargest->add(10);
    kthLargest->add(9);
    kthLargest->add(4);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
