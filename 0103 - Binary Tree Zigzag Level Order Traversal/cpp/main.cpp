//
//  main.cpp
//  103 - Binary Tree Zigzag Level Order Traversal
//
//  Created by ynfMac on 2019/12/3.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
        if (!root) {
            return res;
        }
        
        queue<pair<TreeNode *, int>> q;
        q.push(make_pair(root, 0));
        
        while (!q.empty()) {
            TreeNode *node = q.front().first;
            int level = q.front().second;
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
        
        for (int i = 0; i < res.size(); i++) {
            if (i % 2 == 1) {
                revese(res[i]);
            }
        }
        return res;
    }
    
private:
   void revese(vector<int>& c) {
       if (c.size() <= 1) {
           return;
       }
       
       for (int i = 0; i < c.size() / 2; i++) {
           swap(c[i], c[c.size()-i-1]);
       }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
