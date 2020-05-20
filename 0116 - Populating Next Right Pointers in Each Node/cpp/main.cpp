//
//  main.cpp
//  116 - Populating Next Right Pointers in Each Node
//
//  Created by ynfMac on 2019/12/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

 class Node {
 public:
 int val;
 Node* left;
 Node* right;
 Node* next;
 
 Node() : val(0), left(NULL), right(NULL), next(NULL) {}
 
 Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
 
 Node(int _val, Node* _left, Node* _right, Node* _next)
 : val(_val), left(_left), right(_right), next(_next) {}
 };

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) {
            return root;
        }
        
        queue<pair<Node *, int>> q;
        q.push(make_pair(root, 0));
        vector<vector<Node *>> res;
        
        while (!q.empty()) {
            Node *node = q.front().first;
            int level = q.front().second;
            
            q.pop();
            
            if (level == res.size()) {
                res.push_back(vector<Node *>());
            }
            
            res[level].push_back(node);
            if (node->left) {
                q.push(make_pair(node->left, level+1));
            }
            if (node->right) {
                q.push(make_pair(node->right, level+ 1));
            }
        }
        for (int i = 0; i < res.size(); i++) {
            vector<Node *> v  = res[i];
            for (int i = 0; i < v.size(); i++) {
                if (i != v.size() -1 ) {
                    Node *node = v[i];
                    node->next = v[i + 1];
                }
            }
        }
        return root;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
