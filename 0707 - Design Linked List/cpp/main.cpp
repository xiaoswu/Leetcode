//
//  main.cpp
//  707 - Design Linked List
//
//  Created by ynfMac on 2019/6/18.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

struct Node {
    int val;
    Node *next;
    
    Node(int x) : val(x),next(NULL) {}
};

class MyLinkedList {
    
    
public:
    /** Initialize your data structure here. */
    Node *head;
    int size;
    
    MyLinkedList() {
        this->head = NULL;
        this->size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index < 0 || (index >= size && index != 0)) {
            return -1;
        }
        
        Node *curNode = head;
        if (curNode) {
            for (int i = 0; i < index; i++) {
                curNode = curNode->next;
            }
            return curNode->val;
        } else {
            return -1;
        }
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *node = new Node(val);
        node->next = head;
        head = node;
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }
        
        if (index < 0) {
            index = 0;
        }
        
        if (index == 0) {
            addAtHead(val);
        } else {
            Node *prev = head;
            for (int i = 0; i < index - 1; i ++) {
                prev = prev->next;
            }
            
            Node *node = new Node(val);
            node->next = prev->next;
            prev->next = node;
            size++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        
        if (index == 0) {
            Node * deleteNode = head;
            head = head->next;
            delete deleteNode;
        } else {
            Node *prev = head;
            for (int i = 0; i < index - 1; i ++) {
                prev = prev->next;
            }
            
            Node *deleteNode = prev->next;
            if (!deleteNode->next) {
                prev->next = NULL;
            } else {
                prev->next = deleteNode->next;
            }
            
            delete deleteNode;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    MyLinkedList *obj = new MyLinkedList();
    obj->addAtHead(1);
    obj->addAtIndex(1, 2);
    obj->get(1);
    obj->get(0);
    obj->get(2);
    
    std::cout << "Hello, World!\n";
    return 0;
}
