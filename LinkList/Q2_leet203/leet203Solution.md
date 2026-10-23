# LeetCode203移动链表元素 原地移除方法

> 力扣题目连接: [203. 移除链表元素 - 力扣（LeetCode）](https://leetcode.cn/problems/remove-linked-list-elements/solutions/4043534/yi-chu-lian-biao-yuan-su-yuan-di-yi-chu-or0hv/)

##### 思路

> 采用一次遍历原地移除

##### 解题过程

> 首先定义一个虚拟头结点dummy，它指向head节点，用于统一处理头结点的情况。 记下来设置一个cur指针遍历整个链表，如果cur的next是空指针的话，结束循环，对于每一个cur->next 如果其val值等于val，证明需要删除cur->next，首先定义一个del指向cur->next 然后令cur的next指向del的next  ，最后释放del即可。

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
```