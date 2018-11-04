//
//  main.cpp
//  202 - Happy Number
//
//  Created by ynfMac on 2018/10/19.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution{
    
public:
    bool isHappy(int n){
        int w = op(n);
        unordered_set<int> record;
        
        while (w != 1) {
            if (record.find(w) != record.end()) {
                return false;
            }
            record.insert(w);
            
             w = op(w);
        }
        return true;
    }

private:
    // 拆解数
    int op(int x){
        int res = 0;
        while (x) {
            int t = x % 10;
            res += t * t;
            x = x / 10;
        }
        return res;
    }
};

int main() {
    cout << Solution().isHappy(983) << endl;
    
    return 0;
}
