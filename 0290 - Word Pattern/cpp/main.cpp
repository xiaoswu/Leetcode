//
//  main.cpp
//  290 - Word Pattern
//
//  Created by ynfMac on 2018/11/2.
//  Copyright © 2018年 ynfMac. All rights reserved.
//  使用查找表

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<char> char_vec;
        for (char c : pattern) {
            char_vec.push_back(c);
        }
        
        vector<string> string_vec;
        int startIndex = 0;
        for (int i = 0; i < str.size(); i++) {
            
            if (i == str.size() - 1) {
                string str1 = string(&str[startIndex],&str[i + 1]);
                string_vec.push_back(str1);
            }
            
            char c = str[i];
            if (c == ' ') {
                string str1 = string(&str[startIndex],&str[i]);
                string_vec.push_back(str1);
                startIndex = i + 1;
            }
        }
        
        if (char_vec.size() != string_vec.size()) return false;
        
        unordered_map<char, string> record_map;
        unordered_set<string> record_set;
        for (int i = 0; i < char_vec.size(); i++) {
            
            // 不存在查找表中进行添加
            if (record_map.find(char_vec[i]) == record_map.end()) {
                if (record_set.find(string_vec[i]) != record_set.end()) {
                    return false;
                } else {
                    record_map[char_vec[i]] = string_vec[i];
                    record_set.insert(string_vec[i]);
                }
                
            } else { // 存在于查找表中进行查找比对
                unordered_map<char, string>::iterator iter;
                iter = record_map.find(char_vec[i]);
                string str1 = (*iter).second;
                if (strcmp((str1.c_str()), string_vec[i].c_str()) != 0) {
                    return false;
                }
            }
        }
        return true;
    }
};



int main(int argc, const char * argv[]) {
    
   cout <<  Solution().wordPattern("abba", "dog dog dog dog") << endl;
    
    return 0;
}
