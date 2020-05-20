//
//  main.cpp
//  17 - Letter Combinations of a Phone Number
//
//  Created by ynfMac on 2019/10/30.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    
    vector<vector<char>> vectors =
    {{},{'a','b','c'},{'d','e','f'},{'g','h','i'},
    {'j','k','l'},{'m','n','o'},{'p','q','r','s'},
    {'t','u','v'},{'w','x','y','z'}};
    
    vector<string> answers;
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return vector<string>();
        }
        answers.clear();
        solve(0, digits, "");
        return answers;
    }
    
private:
    void solve(int start,string digits, string cur_answer){
        
        if (cur_answer.size() == digits.size()) {
            answers.push_back(cur_answer);
            return;
        }
        int nunber = stringToInt(digits[start]);
        vector<char> numbers = vectors[nunber - 1];
        for (int i = 0; i < numbers.size(); i++) {
            cur_answer.push_back(numbers[i]);
            solve(start + 1, digits, cur_answer);
            cur_answer.pop_back();

        }
    }
                                     
  int stringToInt(char s){
      switch (s) {
          case '2':
              return 2;
              break;
          case '3':
              return 3;
          case '4':
              return 4;
              break;
          case '5':
              return 5;
          case '6':
              return 6;
              break;
          case '7':
              return 7;
          case '8':
              return 8;
          case '9':
              return 9;
              break;
              
          default:
              break;
      }
      
      return 0;
 }
};

int main(int argc, const char * argv[]) {
    
   vector<string> an = Solution().letterCombinations("");
    
    for (int i = 0; i < an.size(); i++) {
        cout << an[i] << " ";
    }
    
    return 0;
}
