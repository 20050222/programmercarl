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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //删除链表倒数第n个元素  等于删除整数第size + 1 - n个元素
        ListNode * dummyHead = new ListNode(0);
        dummyHead -> next = head;
        //1.第一轮循环 计算；链表长度
        ListNode * cur = dummyHead;
        int LinkLength = 0;
        while(cur -> next != NULL) {
            LinkLength++;
            cur = cur -> next;
            int count = LinkLength - n + 1;//这样的话  cur可以停在目标节点的前一个位置
            //写法二: count = LinkLength - n + 1;
            while(--count) {
                cur = cur -> next;
            }        }
        //2.第二轮循环 删除第LinkLength + 1 - n个元素
        cur = dummyHead;

        //3.删除指定节点
        ListNode * del = cur -> next;
        cur -> next = del -> next;
        delete del;

        return dummyHead -> next;
    }
};
