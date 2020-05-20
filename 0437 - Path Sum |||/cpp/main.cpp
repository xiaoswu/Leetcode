//
//  main.cpp
//  437 - Path Sum |||
//
//  Created by ynfMac on 2019/11/25.
//  Copyright © 2019 ynfMac. All rights reserved.
//  两层递归

#include <iostream>

using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    
private:
    int sum;
    int paths;

    void DFS(TreeNode *node, int sum){
        if (node == nullptr) {
            return;
        }
        
        if (sum == node->val) {
            paths++;
        }
        
        DFS(node->left, sum - node->val);
        DFS(node->right, sum- node->val);
    }
    
    void DFSTraverse(TreeNode *root, int sum){
        if (root == nullptr) {
            return;
        }
        
        DFS(root, sum);
        DFSTraverse(root->left, this->sum);
        DFSTraverse(root->right, this->sum);
    }
    
public:
    int pathSum(TreeNode* root, int sum) {
        this->sum = sum;
        this->paths = 0;
        DFSTraverse(root, sum);
        return paths;
    }
};

int main(int argc, const char * argv[]) {
    TreeNode *node = new TreeNode(1);
     node->right = new TreeNode(2);
     node->right->right = new TreeNode(3);
    node->right->right->right = new TreeNode(4);
    node->right->right->right->right = new TreeNode(5);
    
    cout << Solution().pathSum(node, 3);
    
    std::cout << "Hello, World!\n";
    return 0;
}
