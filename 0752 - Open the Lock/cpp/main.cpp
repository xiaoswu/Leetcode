//
//  main.cpp
//  752 - Open the Lock
//
//  Created by ynfMac on 2019/11/28.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        // 使用set来查询比使用数组查询时间更快。
        unordered_set<string> dead = unordered_set<string>(deadends.begin(),deadends.end());
        
        // 如果死亡数字是‘0000’,那么从起始位置就无法出发，所以无论如何也不能解锁。
        // 如果目标数在死亡数字内，也无法解锁。
        if (dead.find(target) != dead.end() || dead.find("0000") != dead.end()) {
            return -1;
        }
        
        unordered_set<string> visited;
        queue<pair<string, int>> q;
        q.push(make_pair("0000", 0));
        visited.insert("0000");
        while (!q.empty()) {
            string cur = q.front().first;
            int step = q.front().second;
            q.pop();
            
            vector<string> next = getNext(cur,dead);
            for (string s : next) {
                if (visited.find(s) == visited.end()) {
                    if (s == target) {
                        return step + 1;
                    }
                    
                    visited.insert(s);
                    q.push(make_pair(s, step + 1));
                }
            }
        }
        return -1;
    }
    
private:
    
    // 这个方法是对当前锁下一步的状态进行统计，存放在数组中，如果是死亡锁就排除掉。
    vector<string> getNext(const string& s, const unordered_set<string>& dead){
        vector<string> res;
        assert(s.size() == 4);
        for (int i = 0; i < 4; i++) {
            int num = s[i] - '0';
            
            int d = num + 1;
            if (d > 9) d = 0;
            string t = s;
            t[i] = ('0' + d);
            if (dead.find(t) == dead.end()) {
                res.push_back(t);
            }
            
            d = num - 1;
            if (d < 0) d = 9;
            t = s;
            t[i] = ('0' + d);
            if (dead.find(t) == dead.end()) {
                res.push_back(t);
            }
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
