//
//  main.cpp
//  690 - Employee Importance
//
//  Created by ynfMac on 2019/12/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
 // Employee info
 class Employee {
 public:
 // It's the unique ID of each node.
 // unique id of this employee
 int id;
 // the importance value of this employee
 int importance;
 // the id of direct subordinates
 vector<int> subordinates;
 };

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
    }
};
int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    return 0;
}
