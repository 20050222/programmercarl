# LeetCode19删除链表倒数第N个结点 正难则反思想

> 力扣题解链接：[19. 删除链表的倒数第 N 个结点 - 力扣（LeetCode）](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/solutions/4048638/shan-chu-lian-biao-dao-shu-di-nge-jie-di-wklh/)

##### 思路

> 正难则反，寻找正数第size+1-n个节点更简单

##### 解题过程

###### 转换思路

> 假设链表长度为size，并不难观察到 一个节点如果是倒数第n个，那么他就是正数第size+1-n个；例如长度为5的链表，倒数第2个就是正数第4个、倒数第1个就是正数第五个。

###### 多轮循环

> 第一轮循环用于计算整个链表的长度 第二轮循环用于寻找正数第size+1-n个节点的前一个位置

###### 注意事项

> 1.第二轮循环的时候，如果初始化计数器count=LinkLength - n,那么接下来while(count--)要放在后面，这样才能让指针停留在目标节点的前一个位置；同理如果初始化计数器count=LinkLength - n + 1,那么接下来while(--count)要放在后面。 2.cur指针可以反复利用 但是需要重置 3.虚拟头结点dummyHead可以避免单独考虑头结点head，最后返回结果时返回dummyHead的next指针即可。

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(1)

##### Code

```c++
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
        }
        //2.第二轮循环 删除第LinkLength + 1 - n个元素
        cur = dummyHead;
        int count = LinkLength - n + 1;//这样的话  cur可以停在目标节点的前一个位置
        //写法二: count = LinkLength - n + 1;
        while(--count) {
            cur = cur -> next;
        }
        //3.删除指定节点
        ListNode * del = cur -> next;
        cur -> next = del -> next;
        delete del;
        
        return dummyHead -> next;
    }
};
```