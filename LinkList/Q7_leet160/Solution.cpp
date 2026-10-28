//
// Created by liuyu on 2026/10/25.
//
#include<bits/stdc++.h>
using namespace std;


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
   /* ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //相交链表,使用双指针来解决
        //1.定义虚拟头结点
        ListNode * dummyHeadA = new ListNode(0);
        ListNode * dummyHeadB = new ListNode(0);
        dummyHeadA -> next = headA;
        dummyHeadB -> next = headB;
        //2.双指针遍历两个链表
        ListNode * curA = dummyHeadA;
        ListNode * curB = dummyHeadB;
        while(curA->next != NULL && curB->next != NULL && curA->next->val != curB->next->val) {//如果二者的后继节点不同,或者，诶呦遍历到头
            curA = curA->next;
            curB = curB->next;
        }
        return curA->next == NULL ? NULL : curA->next;
    }*/

   ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //相交链表指的是地址位置相交 而不是数值相等
        //1.先计算出两个链表各自长度
        int lenA = 0;
        int lenB = 0;
        ListNode * curA = headA;
        ListNode * curB = headB;
        while(curA != NULL) {
            lenA++;
            curA = curA->next;
        }

       while(curB != NULL) {
           lenB++;
           curB = curB ->next;
       }
       curA = headA;
       curB = headB;
        //2.让长的链表先走一个长度差  二者处于同一起跑线
        for(int i = lenA; i > lenB; i--) {
            curA = curA->next;
        }
        for(int j = lenB; j > lenA; j--) {
            curB = curB->next;
        }
        //3.再让两个指针同时出发  如果遇到相等  那么就是指定的地址
        while(curA != NULL) {
            if(curA == curB) {
                break;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return curA;
   }
};