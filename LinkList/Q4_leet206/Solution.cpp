//
// Created by liuyu on 2026/10/23.
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
    //反转一个带头结点的单链表
public:
    ListNode* reverseList(ListNode* head) {
        //依旧需要一个虚拟头结点
        ListNode * _dummyHead = new ListNode(0);
        _dummyHead -> next = head;
        ListNode * cur = head;
        ListNode * temp = _dummyHead;
        ListNode * nextCur = cur -> next;
        while( cur != NULL) {
            cur -> next = temp;
            temp = cur;
            cur = nextCur;
            cur = cur -> next;
        }
        return temp;
    }

    ListNode* reverseList1(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;

        while(cur != NULL) {
            ListNode * nextCur = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = nextCur;
        }
        return prev;
    }
};