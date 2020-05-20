//
//  main.cpp
//  95 Unique_Binary_Search_Trees ||
//
//  Created by ynfMac on 2019/10/14.
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
   vector<TreeNode*> generateTrees(int n) {
       
       if (n == 0) {
           return vector<TreeNode *>();
       }
       return generate_trees(1, n);
    }
    
private:
    
    vector<TreeNode *> generate_trees(int start, int end) {
        
        vector<TreeNode *> all_trees;
        if (start > end) {
            all_trees.push_back(nullptr);
            return all_trees;
        }
        
        for (int i = start; i <= end; i++) {
            vector<TreeNode *> left_trees = generate_trees(start, i - 1);

            vector<TreeNode *> right_trees = generate_trees(i + 1, end);

            for (TreeNode * l : left_trees) {
                
                for (TreeNode * r : right_trees) {
                    TreeNode *currentNode = new TreeNode(i);
                    currentNode->left = l;
                    currentNode->right = r;
                    all_trees.push_back(currentNode);
                }
            }
        }
        
        return all_trees;
    }
    
    // 打印一棵树,使用前序遍历
    void printTreeNode(TreeNode *node){
        if (node == nullptr) {
            return;
        }
        cout << node->val << " -> ";
        printTreeNode(node->left);
        printTreeNode(node->right);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Solution().generateTrees(4);

    
    
    std::cout << "Hello, World!\n";
    return 0;
}
