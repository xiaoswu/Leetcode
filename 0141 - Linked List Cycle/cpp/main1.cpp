//
//  main.cpp
//  141 - Linked List Cycle
//
//  Created by ynfMac on 2019/6/20.
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
    bool hasCycle(ListNode *head) {
        if (!head) return false;
        
        unordered_set<ListNode *> q;
        
        ListNode *curNode = head;
        while (curNode != NULL) {
            if (q.find(curNode) == q.end()) {
                q.insert(curNode);
            } else {
                return true;
            }
            curNode = curNode->next;
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
