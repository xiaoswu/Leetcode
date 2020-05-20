//
//  main.cpp
//  692 - Top K Frequent Words
//
//  Created by ynfMac on 2019/12/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;
class Solution {
struct cmp {
    bool operator()(pair<string, int> a, pair<string, int> b){
        if (a.second == b.second) {
            return a.first > b.first;
        }
        
        return a.second < b.second;
    }
    };
    
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for (int i = 0;  i < words.size(); i++) {
            m[words[i]] ++;
        }
        
        priority_queue<pair<string, int>,vector<pair<string, int>>,cmp> q;
        
        unordered_map<string, int> :: iterator iter = m.begin();
        while (iter != m.end()) {
            q.push(make_pair(iter->first, iter->second));
            iter++;
        }
        
        if (q.size() < k) {
            k = q.size();
        }
        
        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(q.top().first);
            q.pop();
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
