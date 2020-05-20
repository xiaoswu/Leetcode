//
//  main.cpp
//  230 - Kth Smallest Element in a BST
//
//  Created by ynfMac on 2019/12/10.
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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> nums;
        
        dfs(root, nums);
        
        return nums[k - 1];
    }
    
    void dfs(TreeNode *node, vector<int>& vec){
        if (node == nullptr) {
            return;
        }
        
        dfs(node->left, vec);
        vec.push_back(node->val);
        dfs(node->right, vec);
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
