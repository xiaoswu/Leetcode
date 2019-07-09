//
//  main.cpp
//  559 - Maximum Depth of N-ary Tree
//
//  Created by ynfMac on 2019/6/18.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;
    
    Node() {}
    
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution{
public:
    int maxDepth(Node* root) {
        if (!root) {
            return 0;
        }
        
        int deep = 0;
        for (int i = 0; i < root->children.size();i++) {
           deep = max( maxDepth(root->children[i]),deep);
        }
        
        return deep + 1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
