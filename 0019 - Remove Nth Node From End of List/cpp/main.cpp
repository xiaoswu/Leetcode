//
//  main.cpp
//  19 - Remove Nth Node From End of List
//
//  Created by xiaowu on 2018/11/10.
//  Copyright © 2018年 WSAlone. All rights reserved.
//

#include <iostream>
#include <cassert>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL) {};
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        assert(n >= 0); 
        
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        
        ListNode *p = dummyHead;
        ListNode *q = dummyHead;
        
        for (int i = 0; i < n + 1; i++) {
            assert(q);
            q = q->next;
        }
        
        while (q != NULL) {
            p = p->next;
            q = q->next;
        }
        
        ListNode *delNode = p->next;
        p->next = delNode->next;
        delete delNode;
        
        ListNode *retNode= dummyHead->next;
        
        delete dummyHead;
        return retNode;
    }
};

int main(int argc, const char * argv[]) {

    return 0;
}
