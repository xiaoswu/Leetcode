//
//  main.cpp
//  0131 - Palindrome Partitioning
//
//  Created by ynfMac on 2020/5/27.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    
private:
    
    vector<vector<string>> res = vector<vector<string>>();
    
    // 判断是否是回文串
    bool vaildPalindrome(string s){
        if (s.length() == 0) {
            return false;
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[s.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    
    void findPalindrome(vector<string>&r,string s, int nextIndex){
        

        
        if (nextIndex == s.size()) {
            res.push_back(r);
            return;
        }
        
        
        for (int i = nextIndex; i < s.size(); i++) {
            if (!vaildPalindrome(s.substr(nextIndex,i - nextIndex + 1))) {
                continue;
            }
            
            r.push_back(s.substr(nextIndex,i-nextIndex+1));
            findPalindrome(r, s, i + 1);
            r.pop_back();
        }
    }
public:
    vector<vector<string>> partition(string s) {
        
        res.clear();
        
        vector<string> r =  vector<string>();
        string c = "";
        findPalindrome(r, s, 0);
        
        return res;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<vector<string>> res = Solution().partition("aaccddee");
    
    for (vector<string> out : res) {
        for (string s : out) {
            cout << s << " ";
        }
        
        cout << endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
