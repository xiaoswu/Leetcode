//
//  main.cpp
//  113 - Path Sum ||
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        search(root, res, vector<int>(), sum);
        return res;
    }
    
private:

    void search(TreeNode *node,vector<vector<int>>& res,vector<int> cur ,int sum){
        if (node == nullptr) {
            return;
        }
        
        if (node->left == nullptr &&
            node->right == nullptr &&
            sum == node->val) {
            cur.push_back(node->val);
            res.push_back(cur);
            return;
        }
        
        cur.push_back(node->val);
        if (node->left) {
            search(node->left, res, cur, sum - node->val);
        }
        
        if (node->right) {
            search(node->right, res, cur, sum- node->val);
        }
    }
};


int main(int argc, const char * argv[]) {
    TreeNode *node = new TreeNode(-2);
    node->left = new TreeNode(-4);
    node->right = new TreeNode(-4);
    
    Solution().pathSum(node, -6);
    std::cout << "Hello, World!\n";
    return 0;
}
