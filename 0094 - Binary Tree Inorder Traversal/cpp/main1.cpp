//
//  main.cpp
//  94 - Binary Tree Inorder Traversal
//
//  Created by xiaowu on 2018/11/14.
//  Copyright © 2018年 WSAlone. All rights reserved.
//  使用栈模拟递归过程

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x),left(NULL),right(NULL) {};
};

struct Command{
    string s; // 命令 go, print
    TreeNode *node;
    Command(string s,TreeNode *node): s(s),node(node){};
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        
        if (root == NULL) {
            return res;
        }
        
        stack<Command> stack;
        stack.push(Command("go", root));
        while (!stack.empty()) {
            
            // 获取栈顶的元素
            Command command = stack.top();
            
            // 将栈顶的元素推出栈
            stack.pop();
            
            if (command.s == "print") {
                res.push_back(command.node->val);
            } else {
                assert(command.s == "go");
                if (command.node->right) {
                    stack.push(Command("go", command.node->right));
                }
                
                stack.push(Command("print",command.node));
                
                if (command.node->left) {
                    stack.push(Command("go", command.node->left));
                }
                
                
            }
        }
        return res;
    }
};

int main1() {
    
    
    return 0;
}
