//
//  main.cpp
//  973 - K Closest Points to Origin
//
//  Created by ynfMac on 2019/12/21.
//  Copyright © 2019 ynfMac. All rights reserved.
//


#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Solution {
    
    struct cmp {
        bool operator()(pair<vector<int>, int> a, pair<vector<int>, int> b){
            return a.second > b.second;
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int size = points.size();
        
        vector<vector<int>> res = vector<vector<int>>();
        
        if (K > size) {
            return res;
        }
        
        priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int>>,cmp> q;
        for(int i = 0; i < size; i++){
            int a = abs(points[i][0]);
            int b = abs(points[i][1]);
            int dis = a*a + b*b;
            if (q.size() < K) {
                q.push(make_pair(points[i], dis));
            } else {
                if (dis < q.top().second) {
                    q.pop();
                    q.push(make_pair(points[i], dis));
                }
            }
        }
        
        while (!q.empty()) {
            vector<int> dis = q.top().first;
            res.push_back(dis);
            q.pop();
        }
        return res;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
