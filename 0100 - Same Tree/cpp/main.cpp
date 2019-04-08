//
//  main.cpp
//  100 - Same Tree
//
//  Created by xiaowu on 2019/3/24.
//  Copyright © 2019年 WSAlone. All rights reserved.
//

#include <iostream>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL),right(NULL){};
};

class Solution {
public:
    bool isSameTree(TreeNode *p,TreeNode *q){
        
        if (!p && !q) return true;
        
        if (p || !q) return false;
        
        if (q || !p) return false;
        
        if (p->val != q->val) return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main(int argc, const char * argv[]) {
    return 0;
}
