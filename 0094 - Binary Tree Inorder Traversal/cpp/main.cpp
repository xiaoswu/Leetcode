//
//  main.cpp
//  94 - Binary Tree Inorder Traversal
//
//  Created by xiaowu on 2018/11/14.
//  Copyright © 2018年 WSAlone. All rights reserved.
//  使用递归

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x),left(NULL),right(NULL) {};
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        return __inorderTraversal(root,ret);
    }
    
private:
    vector<int> __inorderTraversal(TreeNode *root,vector<int> &vec){
        if (root) {
            __inorderTraversal(root->left, vec);
            vec.push_back(root->val);
            __inorderTraversal(root->right, vec);
        }
        return vec;
    }
};

int main(int argc, const char * argv[]) {
    
    
    return 0;
}
