//
//  main.cpp
//  126 - Word Ladder ||
//
//  Created by ynfMac on 2019/12/4.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {

public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        vector<vector<string>> result;
        unordered_set<string> set(wordList.begin(),wordList.end());
        if (set.find(endWord) == set.end()) {
            return result;
        }
        
        set = unordered_set<string>();
        
        unordered_map<string, vector<string>> m;
        for (string word : wordList) {
            for (int i = 0; i < beginWord.size(); i++) {
                string geWord = word;
                geWord[i] = '*';
                m[geWord].push_back(word);
            }
        }
        
        // pair<string, int> 第一个是单词，第二个是经过转换的次数
        queue<pair<string, vector<string>>> q;
        vector<string> words = vector<string>();
        words.push_back(beginWord);
        q.push(make_pair(beginWord, words));
        while (!q.empty()) {
            string front_s = q.front().first;
            vector<string> front_v = q.front().second;
            q.pop();
            set.insert(front_s);
            
            for (int i = 0; i < front_s.size(); i++) {
                string geWord = front_s;
                geWord[i] = '*';
                vector<string> vec = m[geWord];
                
                for (string s : vec) {
                    if (set.find(s) == set.end()) {
                        front_v.push_back(s);
                        if (s == endWord) {
                            result.push_back(front_v);
                        } else {
                            q.push(make_pair(s, front_v));
                            set.insert(s);
                        }
                    }
                }
            }
        }
        return result;
    }
};



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
