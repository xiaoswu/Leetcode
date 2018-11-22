//
//  main.cpp
//  61 - Totate List
//
//  Created by ynfMac on 2018/11/21.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int a): val(a),next(NULL){};
};

/**********************************/
//         辅助测试函数             //
/*********************************/


// 根据n个元素的数组创建一个链表，并返回链表的头
ListNode * createLinkedList(int arr[],int n){
    if (n == 0) return NULL;
    
    ListNode *head = new ListNode(arr[0]);
    ListNode *curList = head;
    for (int i = 1; i < n; i++) {
        curList->next = new ListNode(arr[i]);
        curList = curList->next;
    }
    
    return head;
}

// 打印以head为头结点的链表的信息内容
void printLinkedList(ListNode *head){
    ListNode *curNode = head;
    while (curNode != NULL) {
        cout << curNode->val << " -> ";
        curNode = curNode->next;
    }
    cout << "NULL" << endl;
}

// 释放以head为头结点的链表空间
void deleteLinkedList(ListNode *head){
    ListNode *curNode = head;
    while (curNode != NULL) {
        ListNode *delNode = curNode;
        curNode = curNode->next;
        delete delNode;
    }
}

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        // 当链表为NULL或者只存在一个节点,直接返回head
        if (!head ||! head->next) {
            return head;
        }
        
        // 循环一次，记录节点总数以及找到链表的最后一个节点
        ListNode *curNode = head;
        int totalNode = 1;
        while (curNode->next) {
            totalNode ++;
            curNode = curNode->next;
        };
        
        // 记录一下这是最后一个节点
        ListNode *tail = curNode;
        
        // 首尾相连 组成一个环形链表
        tail->next = head;
        
        // 计算循环次数 - 如果不太理解这个步骤，可以自己【画图理解]。
        int count = totalNode - (k % totalNode);
        
        // 找到右移后的链表中最后一个节点
        for (int i = 0; i < count; i++) {
            tail = tail->next;
        };
        
        // 确认右移后链表的头结点
        ListNode *retNode = tail->next;
        
        // 将组成的环形链表的尾节点断开,断开后就是单链表了。
        tail->next = NULL;
        
        return retNode;
    }
};

int main() {
    
    int arr[] = {1,2,3,4,5,6};
    ListNode *node = createLinkedList(arr, sizeof(arr) / sizeof(int));
    
    ListNode *newNode = Solution().rotateRight(node, 2);
    printLinkedList(newNode);
    
    delete newNode;
    return 0;
}
