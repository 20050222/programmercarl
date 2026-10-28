# LeetCode142环形链表 FLoyd判环算法

> 力扣题解链接:  [142. 环形链表 II - 力扣（LeetCode）](https://leetcode.cn/problems/linked-list-cycle-ii/solutions/4050037/huan-xing-lian-biao-floydpan-huan-suan-f-soyu/)

##### 思路

> FLoyd判环算法，即快慢指针算法

##### 解题过程

###### 判断环

> 快指针一次走两步，慢指针一次走一步，如果链表中有环，那么两个指针一定会相遇

###### 寻找环入口

> 如果确认链表有环，那么两个指针的相遇点，到环入口的距离，和链表头到环入口的距离是相同的，由此既可以找到具体的环入口

##### 复杂度

- 时间复杂度:O(n)
- 空间复杂度:O(1)

##### Code

```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
     ListNode *detectCycle(ListNode *head) {
        ListNode * fast = head;//快慢指针判断是否有环
        ListNode * slow = head;
        while(fast != NULL && fast->next != NULL) {
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
```