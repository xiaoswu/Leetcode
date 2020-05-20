//
//  main.cpp
//  101 - Symmetric Tree
//
//  Created by ynfMac on 2019/9/16.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 递归算法
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
       
        return isMirror(root, root);
    }
    
    bool isMirror(TreeNode* one, TreeNode* two){
        if (one == nullptr && two == nullptr) {
            return true;
        }
        
        if (one == nullptr || two == nullptr) {
            return false;
        }
        
        return one->val == two->val
            && isMirror(one->left, two->right)
            && isMirror(one->right, two->left);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
