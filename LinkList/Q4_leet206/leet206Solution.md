# Leet206反转链表 双指针

> 力扣题解链接:[206. 反转链表 - 力扣（LeetCode）](https://leetcode.cn/problems/reverse-linked-list/solutions/4047838/fan-zhuan-lian-biao-shuang-zhi-zhen-by-x-lqef/)

##### 思路

> 采用双指针写法对链表原地翻转

##### 解题过程

###### 初始化

> 首先定义prev指针指向空，cur指针指向head节点。

###### 循环过程

> 如果cur指针不为空，那么循环一直进行下去，定义一个nextCur记录下cur的下一个位置，防止丢失，令cur的next指向prev 再将 prev移动到cur指向的几点，最后将 cur移动到nextCur指向的节点，如此便完成了一轮反转，此时首结点的next指向空，如此循环往复即可

###### 输出

> 由于最后cur指向NULL 因此cur的上一个节点  即prev就是新链表的头结点

复杂度

- 时间复杂度:  O(n)
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
      ListNode* reverseList(ListNode* head) {
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
```