//
//  main.cpp
//  257 - Binary Tree Paths
//
//  Created by ynfMac on 2019/11/25.
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        allPaths(root, res, "");
        return res;
    }
private:
    void allPaths(TreeNode *node,vector<string>&res, string s){
        if (node == nullptr) {
            return;
        }
        
        s.append(to_string(node->val));
        
        if (node->left == nullptr && node->right == nullptr) {
            res.push_back(s);
            return;
        } else {
            s.append("->");
        }
        
        if (node->left) {
            allPaths(node->left, res, s);
        }
        if (node->right) {
            allPaths(node->right, res, s);
        }
    }
};

int main(int argc, const char * argv[]) {
    
    TreeNode *node = new TreeNode(3);
    node->left = new TreeNode(5);
    node->right = new TreeNode(6);
    
    Solution().binaryTreePaths(node);
    std::cout << "Hello, World!\n";
    return 0;
}
