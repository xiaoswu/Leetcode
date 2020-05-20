//
//  main.cpp
//  127 - Word Ladder
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
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> set(wordList.begin(),wordList.end());
        if (set.find(endWord) == set.end()) {
            return 0;
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
        queue<pair<string, int>> q;
        q.push(make_pair(beginWord, 1));
        while (!q.empty()) {
            string front_s = q.front().first;
            int t = q.front().second;
            q.pop();
            set.insert(front_s);
            
            for (int i = 0; i < front_s.size(); i++) {
                string geWord = front_s;
                geWord[i] = '*';
                vector<string> vec = m[geWord];
                
                for (string s : vec) {
                    if (set.find(s) == set.end()) {
                        if (s == endWord) {
                            return t + 1;
                        }
                        q.push(make_pair(s, t+1));
                        set.insert(s);
                    }
                }
            }
        }
        return 0;
    }
};

int main(int argc, const char * argv[]) {
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = vector<string>{"hot","dot","dog","lot","log","cog"};
    
    cout << Solution().ladderLength(beginWord, endWord, wordList) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
