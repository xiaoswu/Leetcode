//
//  main.cpp
//  144 - Binary Tree Preorder Traversal
//
//  Created by xiaowu on 2018/11/10.
//  Copyright © 2018年 WSAlone. All rights reserved.
//

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        return __preorderTraversal(root,ret);
    }
    
private:
    vector<int> __preorderTraversal(TreeNode *root,vector<int> &vec){
        if (root) {
            vec.push_back(root->val);
            __preorderTraversal(root->left, vec);
            __preorderTraversal(root->right, vec);
        }
        return vec;
    }
};

int main(int argc, const char * argv[]) {

    
    return 0;
}
