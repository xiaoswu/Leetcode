//
//  main.cpp
//  102 - Binary Tree Level Order Traversal
//
//  Created by xiaowu on 2018/11/22.
//  Copyright © 2018年 WSAlone. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){};
};

class Solution{
public:
    vector<vector<int>> levelOrder(TreeNode *root){
        vector<vector<int>> res;
        if (root == NULL) {
            return res;
        }
        
        // 创建一个队列,
        queue<pair<TreeNode *, int>> q;
        
        q.push(make_pair(root, 0));
        
        while (!q.empty()) {
            TreeNode *node = q.front().first;
            int level = q.front().second;
            
            // 出队
            q.pop();
            
            if (level == res.size()) {
                res.push_back(vector<int>());
            }
            
            res[level].push_back(node->val);
            
            if (node->left) {
                q.push(make_pair(node->left, level+1));
            }
            
            if (node->right) {
                q.push(make_pair(node->right, level+1));
            }
        }
        return res;
    }
};

int main() {
    return 0;
}
