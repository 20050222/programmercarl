//
// Created by liuyu on 2026/10/28.
//
#include<bits/stdc++.h>
using namespace std;
// 判断链表是否有环 并寻找环的入口
class Solution {
private:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * fast = head;//快慢指针判断是否有环
        ListNode * slow = head;
        while(fast != NULL && fast->next != NULL ) {
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) {//如果两个指针相遇  出现环
                ListNode * tempA = head;
                ListNode * tempB = fast;
                while(tempA != tempB) {
                    tempA = tempA->next;
                    tempB = tempB->next;
                }
                return tempA;
            }
        }
        return NULL;
    }
};