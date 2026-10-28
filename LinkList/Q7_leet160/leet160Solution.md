# LeetCode160相交链表 双指针解法

> 力扣题解链接:  [160. 相交链表](https://leetcode.cn/problems/intersection-of-two-linked-lists/description/)

##### 思路

> 双指针解法

##### 解题过程

###### 变量定义

> 首先定义两个指针分别指向两个链表头结点，在定义两个变量保存链表长度信息

###### 多轮循环

> 第一轮循环用于计算两个链表各自的长度，得到两个链表长度差值 第二轮循环，让指向较长的链表的指针，先移动这个差值的步数，这样两个链表剩余要走的步数就是相同的了 第三轮循环，终止条件是指针指向空，如果出现两个指针指向相同元素的情况，证明找到了相交的节点，返回即可。

###### 复杂度

- 时间复杂度: O(n)O(n)O(n)
- 空间复杂度: O(1)O(1)O(1)

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
```