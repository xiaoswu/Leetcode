//
//  main.cpp
//  513 - Find Bottom Left Tree Value
//
//  Created by ynfMac on 2019/11/28.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <queue>
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
    int findBottomLeftValue(TreeNode* root) {
        
        // int 存放层级
        queue<pair<TreeNode *, int>> q = queue<pair<TreeNode *, int>>();
        q.push(make_pair(root, 1));
        vector<pair<TreeNode *,int>> vec;
        
        while (!q.empty()) {
            TreeNode *node = q.front().first;
            int deep = q.front().second;
            q.pop();
            
            vec.push_back(make_pair(node, deep));
            
            if (node->left) {
                q.push(make_pair(node->left, deep+1));
            }
            if (node->right) {
                q.push(make_pair(node->right, deep+1));
            }
        }
        
        for (int i = vec.size()-1; i > 0; i--) {
            if (vec[i].second != vec[i - 1].second) {
                return vec[i].first->val;
            }
        }
        
        return vec.empty()? 0 : vec[0].first->val;
    }
};

int main(int argc, const char * argv[]) {
    
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    
    cout << Solution().findBottomLeftValue(root) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
