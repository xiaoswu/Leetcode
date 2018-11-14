//
//  main.cpp
//  145 - Binary Tree Postorder Traversal
//
//  Created by xiaowu on 2018/11/14.
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        return __postorderTraversal(root,ret);
    }
    
private:
    vector<int> __postorderTraversal(TreeNode *root,vector<int> &vec){
        if (root) {
            __postorderTraversal(root->left, vec);
            __postorderTraversal(root->right, vec);
            vec.push_back(root->val);
        }
        return vec;
    }
};

int main(int argc, const char * argv[]) {
    
    
    return 0;
}
