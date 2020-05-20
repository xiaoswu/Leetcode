//
//  main.cpp
//  155 - Min Stack
//
//  Created by ynfMac on 2019/11/25.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class MinStack {
    
private:
    vector<int> stack;
    
public:
    
    MinStack() {
        this->stack = vector<int>();
    }
    
    void push(int x) {
        this->stack.push_back(x);
    }
    
    void pop() {
        this->stack.pop_back();
    }
    
    int top() {
        return stack[stack.size() - 1];
    }
    
    int getMin() {
        int min = stack[0];
        for (int i = 1; i < stack.size(); i++) {
            if (stack[i] < min) {
                min = stack[i];
            }
        }
        return min;
    }
};
int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    return 0;
}
