# Leet707设计链表 单链表思路

> 力扣题解链接: [707. 设计链表 - 力扣（LeetCode）](https://leetcode.cn/problems/design-linked-list/solutions/4047823/she-ji-lian-biao-dan-lian-biao-by-xi-duo-2yql/)

##### 思路

> 单链表思路

##### 解题过程

> 主要是掌握虚拟头结点的写法，虚拟头结点指向链表原有的头结点，这样对链表进行增删改查操作时候不需要单独列出头结点的情况。

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(1)

##### Code

```c++
//
// Created by liuyu on 2026/10/14.
//
#include<bits/stdc++.h>
using namespace std;
/**
 * get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回-1。
addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
addAtIndex(index,val)：在链表中的第 index 个节点之前添加值为 val  的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。
 */

class MyLinkedList {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    MyLinkedList() {//初始化链表  虚拟头结点和长度为0
        _dummyHead = new ListNode(0);
        _size = 0;
    }

    int get(int index) {
        //获取第index位置的节点数值
        if(index > _size - 1 || index < 0) {
            return -1;
        }
        ListNode * cur  = _dummyHead->next;
        int count = 0;
        while(count < index) {
            cur = cur->next;
            count++;
        }
        return cur->val;//找到之后需要返回对应值
    }

    void addAtHead(int val) {
        //在头结点位置插入一个新结点
        ListNode * newHead = new ListNode(val);//构造新节点
        newHead -> next = _dummyHead -> next;//取代原本的头结点
        _dummyHead -> next = newHead;
        _size++;//插入节点之后size需要增加
    }

    void addAtTail(int val) {
        //在链表尾部插入一个元素
        ListNode * cur = _dummyHead;
        while(cur->next != NULL) {
            cur = cur->next;
        }
        //现在cur指向的就是末尾元素
        ListNode * newTail = new ListNode(val);
        cur -> next = newTail;
        _size++;//插入节点之后size需要增加
    }

    void addAtIndex(int index, int val) {
        //在指定索引位置插入一个元素
        if(index > _size || index < 0) {//最后一个位置也是允许插入的  相当于尾插
            return;
        }
        ListNode * newNode = new ListNode(val);//创造一个新节点
        ListNode * cur = _dummyHead;//起始结点要从虚拟头结点开始
        while(index--) {
            cur = cur->next;
        }
        //这样cur指向的就是待插入节点的前一个位置
        newNode -> next = cur -> next;
        cur -> next = newNode;
        _size++;//插入节点之后size需要增加
    }

    void deleteAtIndex(int index) {
        if(index > _size - 1 || index < 0) {
            return;
        }
        //删除指定索引的元素
        ListNode * cur = _dummyHead;//起始结点要从虚拟头结点开始
        while(index--) {
            cur = cur->next;
        }
        //这样cur指向的就是待删除节点的前一个位置
        ListNode * del = cur->next;
        cur -> next = del ->  next;
        delete del;
        _size--;
    }
private:
    int _size;
    ListNode * _dummyHead;
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
```