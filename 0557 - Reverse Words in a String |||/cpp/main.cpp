//
//  main.cpp
//  557 - Reverse Words in a String |||
//
//  Created by ynfMac on 2019/6/1.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>



using namespace std;

class Solution {
public:
    string reverseWords(string s){
        int start = 0;
        for (int i = start + 1; i <= s.size(); ) {
            if (i == s.size() || s[i] == ' ') {
                _reverse(s, start, i - 1);
                start = i + 1;
                i = start + 1;
            } else  {
                i ++;
            }
        }
        return s;
    }
    
    // 反转单个单词
private:
    void _reverse(string& s, int start, int end){
        for (int i = start, j = end; i < j; i++,j--) {
            swap(s[i], s[j]);
        }
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
