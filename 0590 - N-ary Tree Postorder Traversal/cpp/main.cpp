//
//  main.cpp
//  590 - N-ary Tree Postorder Traversal
//
//  Created by ynfMac on 2019/6/20.
//  Copyright © 2019 ynfMac. All rights reserved.
//  N叉树的后序遍历

#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    vector<Node *> children;
    Node() {}
    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> postorder(Node * root){
        vector<int> vec;
        return __postorder(root,vec);
    }
    
    vector<int> __postorder(Node * root ,vector<int> &vec){
        if (root) {
            for (Node *node : root->children) {
                __postorder(node, vec);
            }
            vec.push_back(root->val);
        }
        return vec;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
