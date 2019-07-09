//
//  main.cpp
//  589 - N-ary Tree Preorder Traversal
//
//  Created by ynfMac on 2019/6/17.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int val;
    vector<Node *>children;
    
    Node() {}
    
    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
    
};

class Solution {
public:
    vector<int> preorder(Node *root) {
        vector<int> ret;
        
        return __preorder(root,ret);
    }
    
    vector<int> __preorder(Node *root,vector<int> &vec){
        if (root) {
            vec.push_back(root->val);
            for (Node *node : root->children) {
                __preorder(node, vec);
            }
        }
        return vec;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
