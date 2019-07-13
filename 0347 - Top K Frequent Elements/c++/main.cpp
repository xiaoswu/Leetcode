//
//  main.cpp
//  347 - Top K Frequent Elements
//
//  Created by xiaowu on 2019/7/10.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> record;
        for (int i =0; i < nums.size(); i++) {
            record[nums[i]]++;
        }
        assert(record.size() > k);
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for (unordered_map<int, int>::iterator iter = record.begin(); iter != record.end(); iter++) {
            if (pq.size() == k) {
                
                if (iter->second > pq.top().first) {
                    cout << iter->second << endl;
                    cout << pq.top().first << endl;
                    pq.pop();
                    
                    pq.push(make_pair(iter->second, iter->first));
                }
            } else {
                pq.push(make_pair(iter->second , iter->first));
            }
        }
        
        vector<int> res;
        
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
        
    };
};

int main(int argc, const char * argv[]) {
    
    vector<int> a = vector<int>{1,1,1,2,2,6};
    vector<int> b = Solution().topKFrequent(a, 2);
    
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
