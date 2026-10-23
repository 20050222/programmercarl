//
// Created by liuyu on 2026/10/13.
//
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    struct ListNode {
             int val;
             ListNode *next;
             ListNode() : val(0), next(nullptr) {}
             ListNode(int x) : val(x), next(nullptr) {}
             ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode* removeElements(ListNode* head, int val) {
        // 虚拟头，统一处理头节点删除的情况
        ListNode* dummy = new ListNode(0, head);
        ListNode* cur = dummy;
        while(cur->next != NULL) {
            if(cur->next->val == val) {//拆除next指针对应的元素·
                ListNode * del = cur->next;
                cur->next = del->next;
                delete del;
            } else {
                cur = cur->next;//只有不删除的时候才会向后移动指针
            }
        }
        ListNode * newNode = dummy->next;
        delete dummy;
        return newNode;
    }
};