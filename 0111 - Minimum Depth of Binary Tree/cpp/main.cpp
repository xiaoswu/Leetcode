//
//  main.cpp
//  111 - Minimum Depth of Binary Tree
//
//  Created by ynfMac on 2019/6/18.
//  Copyright © 2019 ynfMac. All rights reserved.
//

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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        
        return __minDepth(root, 1);
    }
    
    int __minDepth(TreeNode * node, int min){
        if (node->right && node->left) {
            min++;
            int left = __minDepth(node->left, min);
            int right = __minDepth(node->right, min);
            return __min(left, right);
        } else if (node->right && !node->left){
            return __minDepth(node->right, min+1);
        } else if (node->left && !node->right){
            return __minDepth(node->left, min+1);
        } else {
            return min;
        }
    }
    
private:
    int __min(int a, int b){
        return a > b ? b : a;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


