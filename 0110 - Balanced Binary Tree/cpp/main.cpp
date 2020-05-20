//
//  main.cpp
//  110 - Balanced Binary Tree
//
//  Created by ynfMac on 2019/11/23.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        
        int a = abs(depth(root->left)- depth(root->right));
        
        return a <= 1 && (isBalanced(root->left)) && (isBalanced(root->right));;
        
    }
    
private:
    int depth(TreeNode * root) { // 求节点的最大深度。
        if (root == nullptr) {
            return 0;
        }
        return max(depth(root->left), depth(root->right)) + 1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
