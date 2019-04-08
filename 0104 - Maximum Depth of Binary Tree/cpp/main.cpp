//
//  main.cpp
//  104 - Maximum Depth of Binary Tree
//
//  Created by xiaowu on 2018/11/14.
//  Copyright © 2018年 WSAlone. All rights reserved.
//

#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int a): val(a),left(NULL),right(NULL){};
};


class Solution{
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int leftMacDepth = maxDepth(root->left);
        int rightMacDepth = maxDepth(root->right);
        
        return max(leftMacDepth,rightMacDepth) + 1;
    }
};
int main(int argc, const char * argv[]) {
    return 0;
}
