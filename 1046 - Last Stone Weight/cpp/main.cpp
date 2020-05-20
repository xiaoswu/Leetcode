//
//  main.cpp
//  1046 - Last Stone Weight
//
//  Created by ynfMac on 2019/12/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        
        for (int i = 0; i < stones.size(); i++) {
            q.push(stones[i]);
        }
        
        while (q.size() > 1) {
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            
            if (first != second) {
                q.push(abs(first-second));
            }
        }
        return q.size() == 0 ? 0 : q.top();
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int> v = vector<int>{2,2};
    
    int ans = Solution().lastStoneWeight(v);
    
    cout << ans << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
