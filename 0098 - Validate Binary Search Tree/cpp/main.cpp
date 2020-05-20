//
//  main.cpp
//  98 - Validate Binary Search Tree
//
//  Created by ynfMac on 2019/11/29.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

using namespace std;
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> vec;
        inOrder(root, vec);
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i-1] >= vec[i]) {
                return false;
            }
        }
        return true;
    }
    
private:
    void inOrder(TreeNode *node, vector<int>& vec){
        if (node == nullptr) {
            return;
        }
        
        inOrder(node->left, vec);
        vec.push_back(node->val);
        inOrder(node->right, vec);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
