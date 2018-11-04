//
//  main.cpp
//  242 - Valid Anagram
//
//  Created by ynfMac on 2018/10/18.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#include <iostream>
#include <string>
// 底层是用哈希表实现的map
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;
        
        
        unordered_map<char, int> mapS;
        
        for(char c: s){
            mapS[c]++;
        }
        
        unordered_map<char, int> mapT;
        for(char c: t){
            mapT[c]++;
        }
        
        unordered_map<char, int>::iterator iter;
        for(iter = mapS.begin(); iter != mapS.end(); iter++){
            
            if (mapT.find(iter->first) == mapT.end()) {
                return false;
            }
            
            if (mapT[iter->first] != iter->second) {
                return false;
            }
        }
        return true;
    }
};

void printBool(bool isTure){
    if (isTure) {
        cout << "ture";
    } else {
        cout << "false";
    }
    cout << endl;
}

int main() {
    // example 1
    string s = "anagram", t = "nagaram";
    printBool(Solution().isAnagram(s, t));
    
    // example 2
    string s1 = "rat", t1 = "car";
    printBool(Solution().isAnagram(s1, t1));

    
    return 0;
}
