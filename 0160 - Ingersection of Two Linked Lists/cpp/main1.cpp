//
//  main.cpp
//  160 - Ingersection of Two Linked Lists
//
//  Created by ynfMac on 2019/6/24.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <unordered_set>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode *> set;
        for (ListNode *nodeA = headA; nodeA; nodeA = nodeA->next) {
            set.insert(nodeA);
        }
        
        for (ListNode *nodeB = headB; nodeB; nodeB = nodeB->next) {
            if (set.count(nodeB)) {
                return nodeB;
            }
        }
        return NULL;
    }
};

int main(int argc, const char * argv[]) {
    
    
    return 0;
}
