//
//  main.cpp
//  98 - Validate Binary Search Tree
//
//  Created by ynfMac on 2019/6/24.
//  Copyright © 2019 ynfMac. All rights reserved.
//

/* 二叉搜索树的定义
  1.节点的左子树只包含小于当前节点的值
  2.节点的右子树只包含大于当前节点的值
  3.所有的左子树和右子树自身也是二叉搜索树
 */

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        
        bool left = false;
        if (root->left->val < root->val) {
            left = isValidBST(root->left);
        } else {
            return false;
        }
        
        bool right = false;
        if (root->right->val > root->val) {
            right = isValidBST(root->right);
        } else {
            return false;
        }
        
        return left && right;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
