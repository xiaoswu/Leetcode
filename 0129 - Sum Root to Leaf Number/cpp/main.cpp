//
//  main.cpp
//  129 - Sum Root to Leaf Number
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
    int sumNumbers(TreeNode* root) {
        if (!root) {
            return 0;
        } else {
            int sum = 0;
            dfs(root, root->val,sum);
            return sum;
        }
    }
    
private:
    void dfs(TreeNode *root, int num, int& sum) {
        if (!root) {
            return;
        }
        
        if (!root->left && !root->right) {
            sum = sum +num;
            return;
        }
        
        if (root->left) {
            dfs(root->left,num *10 + root->left->val, sum);
        }
        if (root->right) {
            dfs(root->right, num *10 + root->right->val,sum);
        }
    }
};

int main(int argc, const char * argv[]) {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    
    cout << Solution().sumNumbers(root) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
