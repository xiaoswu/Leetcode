//
//  main.cpp
//  0203 - Remove Linked List Elements
//
//  Created by ynfMac on 2020/6/1.
//  Copyright © 2020 ynfMac. All rights reserved.
//  使用虚拟头节点

#include <iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr ) {
            return nullptr;
        }
        
        ListNode *dammyHead = new ListNode(0);
        dammyHead->next = head;
        
        ListNode *returnHead = dammyHead;
        while (dammyHead->next != nullptr) {
            if (dammyHead->next->val == val) {
                dammyHead->next = dammyHead->next->next;
                
            } else {
                dammyHead = dammyHead->next;
            }
        }
        return returnHead->next;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
