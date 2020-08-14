//
//  main.cpp
//  0020-Valid-Parentheses
//
//  Created by ynfMac on 2020/8/14.
//  Copyright © 2020 ynfMac. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st = stack<char>();
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                }

                int a = st.top();
                st.pop();

                if(c == ')' && a != '(') {
                    return false;
                } else if (c == '}' && a != '{') {
                    return false;
                } else if (c == ']' && a != '[') {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main(int argc, const char * argv[]) {
    cout << Solution().isValid("]") << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
