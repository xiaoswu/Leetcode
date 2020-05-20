//
//  main.cpp
//  160 - Ingersection of Two Linked Lists
//
//  Created by ynfMac on 2019/6/24.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        for (ListNode *nodea = headA; nodea; nodea = nodea->next) {
            for (ListNode *nodeb = headB; nodeb; nodeb = nodeb->next) {
                if (nodea == nodeb) {
                    return nodea;
                }
            }
        }
        return NULL;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
