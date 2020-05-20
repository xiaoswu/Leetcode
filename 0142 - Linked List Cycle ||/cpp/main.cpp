//
//  main.cpp
//  142 - Linked List Cycle ||
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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
            return NULL;
        
        // Use long long type for 64-bit os
        unordered_set<ListNode *> node_address;
        
        ListNode* p = head;
        while(p != NULL){
            if(node_address.find((p)) == node_address.end())
                node_address.insert((p));
            else
                return p;
            
            p = p->next;
        }
        return NULL;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
