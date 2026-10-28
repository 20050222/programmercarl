# 代码随想录二刷：思考与总结

> 按照[代码随想录算法学习路线](https://programmercarl.com/algo/)记录二刷过程。
> 每道题保留原站入口，并在“我的题解”列补充自己的 LeetCode 题解链接。

## 使用说明

- [ ] 待完成　　- [x] 已完成
- “我的题解”统一指向 LeetCode 讨论区；没有链接时先保留“待补充”。
- 题解建议固定记录：**核心思路、关键不变量、边界/易错点、复杂度、二刷新理解**。
- 代码随想录中的理论基础、周总结和总结篇作为章节导读，不单独计入题目。

## 目录

1. [数组](#一数组)
2. [链表](#二链表)
3. [哈希表](#三哈希表)
4. [字符串](#四字符串)
5. [双指针法](#五双指针法)
6. [栈与队列](#六栈与队列)
7. [二叉树](#七二叉树)
8. [回溯算法](#八回溯算法)
9. [贪心算法](#九贪心算法)
10. [动态规划](#十动态规划)
11. [单调栈](#十一单调栈)
12. [图论](#十二图论)

---

## 一、数组

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [x] | 704. 二分查找 | [教程](https://programmercarl.com/algo/array/0704-binary-search.html) | [二分查找：考虑两种边界情况](https://leetcode.cn/problems/binary-search/solutions/4039073/er-fen-cha-zhao-kao-lu-liang-chong-bian-tyqsb/) |
| [x] | 27. 移除元素 | [教程](https://programmercarl.com/algo/array/0027-remove-element.html) | [移除元素：双指针写法](https://leetcode.cn/problems/remove-element/solutions/4039789/yi-chu-yuan-su-shuang-zhi-zhen-xie-fa-by-4280/) |
| [x] | 977. 有序数组的平方 | [教程](https://programmercarl.com/algo/array/0977-squares-of-a-sorted-array.html) | [有序数组的平方：双指针](https://leetcode.cn/problems/squares-of-a-sorted-array/solutions/4040891/you-xu-shu-zu-de-ping-fang-shuang-zhi-zh-kuun/) |
| [x] | 209. 长度最小的子数组 | [教程](https://programmercarl.com/algo/array/0209-minimum-size-subarray-sum.html) | [长度最小的子数组：滑动窗口](https://leetcode.cn/problems/minimum-size-subarray-sum/solutions/4041918/chang-du-zui-xiao-de-zi-shu-zu-hua-dong-ccqfm/) |
| [ ] | 59. 螺旋矩阵 II | [教程](https://programmercarl.com/algo/array/0059-spiral-matrix-ii.html) | 待补充 |
| [ ] | 卡码 58. 区间和 | [教程](https://programmercarl.com/algo/array/kamacoder-0058-range-sum.html) | 待补充 |
| [ ] | 卡码 44. 开发商购买土地 | [教程](https://programmercarl.com/algo/array/kamacoder-0044-land-purchase.html) | 待补充 |

## 二、链表

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [x] | 203. 移除链表元素 | [教程](https://programmercarl.com/algo/linked-list/0203-remove-linked-list-elements.html) | [移除链表元素：原地移除](https://leetcode.cn/problems/remove-linked-list-elements/solutions/4043534/yi-chu-lian-biao-yuan-su-yuan-di-yi-chu-or0hv/) |
| [x] | 707. 设计链表 | [教程](https://programmercarl.com/algo/linked-list/0707-design-linked-list.html) | [设计链表：单链表](https://leetcode.cn/problems/design-linked-list/solutions/4047823/she-ji-lian-biao-dan-lian-biao-by-xi-duo-2yql/) |
| [x] | 206. 翻转链表 | [教程](https://programmercarl.com/algo/linked-list/0206-reverse-linked-list.html) | [翻转链表：双指针](https://leetcode.cn/problems/reverse-linked-list/solutions/4047838/fan-zhuan-lian-biao-shuang-zhi-zhen-by-x-lqef/) |
| [x] | 19. 删除链表的倒数第 N 个节点 | [教程](https://programmercarl.com/algo/linked-list/0019-remove-nth-node-from-end-of-list.html) | [删除链表倒数第 N 个节点：正难则反](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/solutions/4048638/shan-chu-lian-biao-dao-shu-di-nge-jie-di-wklh/) |
| [ ] | 面试题 02.07. 链表相交 | [教程](https://programmercarl.com/algo/linked-list/interview-02-07-linked-list-intersection.html) | 待补充 |
| [ ] | 142. 环形链表 II | [教程](https://programmercarl.com/algo/linked-list/0142-linked-list-cycle-ii.html) | 待补充 |

## 三、哈希表

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 242. 有效的字母异位词 | [教程](https://programmercarl.com/algo/hash-table/0242-valid-anagram.html) | 待补充 |
| [ ] | 349. 两个数组的交集 | [教程](https://programmercarl.com/algo/hash-table/0349-intersection-of-two-arrays.html) | 待补充 |
| [ ] | 202. 快乐数 | [教程](https://programmercarl.com/algo/hash-table/0202-happy-number.html) | 待补充 |
| [ ] | 1. 两数之和 | [教程](https://programmercarl.com/algo/hash-table/0001-two-sum.html) | 待补充 |
| [ ] | 454. 四数相加 II | [教程](https://programmercarl.com/algo/hash-table/0454-4sum-ii.html) | 待补充 |
| [ ] | 383. 赎金信 | [教程](https://programmercarl.com/algo/hash-table/0383-ransom-note.html) | 待补充 |
| [ ] | 15. 三数之和 | [教程](https://programmercarl.com/algo/hash-table/0015-3sum.html) | 待补充 |
| [ ] | 18. 四数之和 | [教程](https://programmercarl.com/algo/hash-table/0018-4sum.html) | 待补充 |

## 四、字符串

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 344. 反转字符串 | [教程](https://programmercarl.com/algo/string/0344-reverse-string.html) | 待补充 |
| [ ] | 541. 反转字符串 II | [教程](https://programmercarl.com/algo/string/0541-reverse-string-ii.html) | 待补充 |
| [ ] | 卡码 54. 替换数字 | [教程](https://programmercarl.com/algo/string/kamacoder-0054-replace-digits.html) | 待补充 |
| [ ] | 151. 翻转字符串里的单词 | [教程](https://programmercarl.com/algo/string/0151-reverse-words-in-a-string.html) | 待补充 |
| [ ] | 卡码 55. 右旋转字符串 | [教程](https://programmercarl.com/algo/string/kamacoder-0055-right-rotate-string.html) | 待补充 |
| [ ] | 28. 实现 strStr() | [教程](https://programmercarl.com/algo/string/0028-find-the-index-of-the-first-occurrence-in-a-string.html) | 待补充 |
| [ ] | 459. 重复的子字符串 | [教程](https://programmercarl.com/algo/string/0459-repeated-substring-pattern.html) | 待补充 |

## 五、双指针法

> 本节是专题串联，部分题目已在数组、链表、字符串和哈希表章节出现；二刷时重点记录“指针语义”和区间不变量。

| 状态 | 题目 | 所属章节 | 我的题解 |
| --- | --- | --- | --- |
| [x] | 27. 移除元素 | 数组 | [已记录](https://leetcode.cn/problems/remove-element/solutions/4039789/yi-chu-yuan-su-shuang-zhi-zhen-xie-fa-by-4280/) |
| [ ] | 344. 反转字符串 | 字符串 | 待补充 |
| [ ] | 卡码 54. 替换数字 | 字符串 | 待补充 |
| [ ] | 151. 翻转字符串里的单词 | 字符串 | 待补充 |
| [x] | 206. 翻转链表 | 链表 | [已记录](https://leetcode.cn/problems/reverse-linked-list/solutions/4047838/fan-zhuan-lian-biao-shuang-zhi-zhen-by-x-lqef/) |
| [x] | 19. 删除链表的倒数第 N 个节点 | 链表 | [已记录](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/solutions/4048638/shan-chu-lian-biao-dao-shu-di-nge-jie-di-wklh/) |
| [ ] | 面试题 02.07. 链表相交 | 链表 | 待补充 |
| [ ] | 142. 环形链表 II | 链表 | 待补充 |
| [ ] | 15. 三数之和 | 哈希表 | 待补充 |
| [ ] | 18. 四数之和 | 哈希表 | 待补充 |

## 六、栈与队列

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 232. 用栈实现队列 | [教程](https://programmercarl.com/algo/stack-queue/0232-implement-queue-using-stacks.html) | 待补充 |
| [ ] | 225. 用队列实现栈 | [教程](https://programmercarl.com/algo/stack-queue/0225-implement-stack-using-queues.html) | 待补充 |
| [ ] | 20. 有效的括号 | [教程](https://programmercarl.com/algo/stack-queue/0020-valid-parentheses.html) | 待补充 |
| [ ] | 1047. 删除字符串中的所有相邻重复项 | [教程](https://programmercarl.com/algo/stack-queue/1047-remove-all-adjacent-duplicates-in-string.html) | 待补充 |
| [ ] | 150. 逆波兰表达式求值 | [教程](https://programmercarl.com/algo/stack-queue/0150-evaluate-reverse-polish-notation.html) | 待补充 |
| [ ] | 239. 滑动窗口最大值 | [教程](https://programmercarl.com/algo/stack-queue/0239-sliding-window-maximum.html) | 待补充 |
| [ ] | 347. 前 K 个高频元素 | [教程](https://programmercarl.com/algo/stack-queue/0347-top-k-frequent-elements.html) | 待补充 |

## 七、二叉树

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 二叉树的递归遍历 | [教程](https://programmercarl.com/algo/binary-tree/recursive-binary-tree-traversal.html) | 待补充 |
| [ ] | 二叉树的迭代遍历 | [教程](https://programmercarl.com/algo/binary-tree/iterative-binary-tree-traversal.html) | 待补充 |
| [ ] | 二叉树的统一迭代法 | [教程](https://programmercarl.com/algo/binary-tree/unified-iterative-binary-tree-traversal.html) | 待补充 |
| [ ] | 102. 二叉树的层序遍历 | [教程](https://programmercarl.com/algo/binary-tree/0102-binary-tree-level-order-traversal.html) | 待补充 |
| [ ] | 226. 翻转二叉树 | [教程](https://programmercarl.com/algo/binary-tree/0226-invert-binary-tree.html) | 待补充 |
| [ ] | 101. 对称二叉树 | [教程](https://programmercarl.com/algo/binary-tree/0101-symmetric-tree.html) | 待补充 |
| [ ] | 104. 二叉树的最大深度 | [教程](https://programmercarl.com/algo/binary-tree/0104-maximum-depth-of-binary-tree.html) | 待补充 |
| [ ] | 111. 二叉树的最小深度 | [教程](https://programmercarl.com/algo/binary-tree/0111-minimum-depth-of-binary-tree.html) | 待补充 |
| [ ] | 222. 完全二叉树的节点个数 | [教程](https://programmercarl.com/algo/binary-tree/0222-count-complete-tree-nodes.html) | 待补充 |
| [ ] | 110. 平衡二叉树 | [教程](https://programmercarl.com/algo/binary-tree/0110-balanced-binary-tree.html) | 待补充 |
| [ ] | 257. 二叉树的所有路径 | [教程](https://programmercarl.com/algo/binary-tree/0257-binary-tree-paths.html) | 待补充 |
| [ ] | 404. 左叶子之和 | [教程](https://programmercarl.com/algo/binary-tree/0404-sum-of-left-leaves.html) | 待补充 |
| [ ] | 513. 找树左下角的值 | [教程](https://programmercarl.com/algo/binary-tree/0513-find-bottom-left-tree-value.html) | 待补充 |
| [ ] | 112. 路径总和 | [教程](https://programmercarl.com/algo/binary-tree/0112-path-sum.html) | 待补充 |
| [ ] | 106. 从中序与后序遍历序列构造二叉树 | [教程](https://programmercarl.com/algo/binary-tree/0106-construct-binary-tree-from-inorder-and-postorder-traversal.html) | 待补充 |
| [ ] | 654. 最大二叉树 | [教程](https://programmercarl.com/algo/binary-tree/0654-maximum-binary-tree.html) | 待补充 |
| [ ] | 617. 合并二叉树 | [教程](https://programmercarl.com/algo/binary-tree/0617-merge-two-binary-trees.html) | 待补充 |
| [ ] | 700. 二叉搜索树中的搜索 | [教程](https://programmercarl.com/algo/binary-tree/0700-search-in-a-binary-search-tree.html) | 待补充 |
| [ ] | 98. 验证二叉搜索树 | [教程](https://programmercarl.com/algo/binary-tree/0098-validate-binary-search-tree.html) | 待补充 |
| [ ] | 530. 二叉搜索树的最小绝对差 | [教程](https://programmercarl.com/algo/binary-tree/0530-minimum-absolute-difference-in-bst.html) | 待补充 |
| [ ] | 501. 二叉搜索树中的众数 | [教程](https://programmercarl.com/algo/binary-tree/0501-find-mode-in-binary-search-tree.html) | 待补充 |
| [ ] | 236. 二叉树的最近公共祖先 | [教程](https://programmercarl.com/algo/binary-tree/0236-lowest-common-ancestor-of-a-binary-tree.html) | 待补充 |
| [ ] | 235. 二叉搜索树的最近公共祖先 | [教程](https://programmercarl.com/algo/binary-tree/0235-lowest-common-ancestor-of-a-binary-search-tree.html) | 待补充 |
| [ ] | 701. 二叉搜索树中的插入操作 | [教程](https://programmercarl.com/algo/binary-tree/0701-insert-into-a-binary-search-tree.html) | 待补充 |
| [ ] | 450. 删除二叉搜索树中的节点 | [教程](https://programmercarl.com/algo/binary-tree/0450-delete-node-in-a-bst.html) | 待补充 |
| [ ] | 669. 修剪二叉搜索树 | [教程](https://programmercarl.com/algo/binary-tree/0669-trim-a-binary-search-tree.html) | 待补充 |
| [ ] | 108. 将有序数组转换为二叉搜索树 | [教程](https://programmercarl.com/algo/binary-tree/0108-convert-sorted-array-to-binary-search-tree.html) | 待补充 |
| [ ] | 538. 把二叉搜索树转换为累加树 | [教程](https://programmercarl.com/algo/binary-tree/0538-convert-bst-to-greater-tree.html) | 待补充 |

## 八、回溯算法

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 77. 组合 | [教程](https://programmercarl.com/algo/backtracking/0077-combinations.html) | 待补充 |
| [ ] | 77. 组合（优化） | [教程](https://programmercarl.com/algo/backtracking/0077-combinations-optimized.html) | 待补充 |
| [ ] | 216. 组合总和 III | [教程](https://programmercarl.com/algo/backtracking/0216-combination-sum-iii.html) | 待补充 |
| [ ] | 17. 电话号码的字母组合 | [教程](https://programmercarl.com/algo/backtracking/0017-letter-combinations-of-a-phone-number.html) | 待补充 |
| [ ] | 39. 组合总和 | [教程](https://programmercarl.com/algo/backtracking/0039-combination-sum.html) | 待补充 |
| [ ] | 40. 组合总和 II | [教程](https://programmercarl.com/algo/backtracking/0040-combination-sum-ii.html) | 待补充 |
| [ ] | 131. 分割回文串 | [教程](https://programmercarl.com/algo/backtracking/0131-palindrome-partitioning.html) | 待补充 |
| [ ] | 93. 复原 IP 地址 | [教程](https://programmercarl.com/algo/backtracking/0093-restore-ip-addresses.html) | 待补充 |
| [ ] | 78. 子集问题 | [教程](https://programmercarl.com/algo/backtracking/0078-subsets.html) | 待补充 |
| [ ] | 90. 子集 II | [教程](https://programmercarl.com/algo/backtracking/0090-subsets-ii.html) | 待补充 |
| [ ] | 491. 递增子序列 | [教程](https://programmercarl.com/algo/backtracking/0491-non-decreasing-subsequences.html) | 待补充 |
| [ ] | 46. 全排列 | [教程](https://programmercarl.com/algo/backtracking/0046-permutations.html) | 待补充 |
| [ ] | 47. 全排列 II | [教程](https://programmercarl.com/algo/backtracking/0047-permutations-ii.html) | 待补充 |
| [ ] | 51. N 皇后 | [教程](https://programmercarl.com/algo/backtracking/0051-n-queens.html) | 待补充 |
| [ ] | 37. 解数独 | [教程](https://programmercarl.com/algo/backtracking/0037-sudoku-solver.html) | 待补充 |

## 九、贪心算法

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 455. 分发饼干 | [教程](https://programmercarl.com/algo/greedy/0455-assign-cookies.html) | 待补充 |
| [ ] | 376. 摆动序列 | [教程](https://programmercarl.com/algo/greedy/0376-wiggle-subsequence.html) | 待补充 |
| [ ] | 53. 最大子序和 | [教程](https://programmercarl.com/algo/greedy/0053-maximum-subarray.html) | 待补充 |
| [ ] | 122. 买卖股票的最佳时机 II | [教程](https://programmercarl.com/algo/greedy/0122-best-time-to-buy-and-sell-stock-ii.html) | 待补充 |
| [ ] | 55. 跳跃游戏 | [教程](https://programmercarl.com/algo/greedy/0055-jump-game.html) | 待补充 |
| [ ] | 45. 跳跃游戏 II | [教程](https://programmercarl.com/algo/greedy/0045-jump-game-ii.html) | 待补充 |
| [ ] | 1005. K 次取反后最大化的数组和 | [教程](https://programmercarl.com/algo/greedy/1005-maximize-sum-of-array-after-k-negations.html) | 待补充 |
| [ ] | 134. 加油站 | [教程](https://programmercarl.com/algo/greedy/0134-gas-station.html) | 待补充 |
| [ ] | 135. 分发糖果 | [教程](https://programmercarl.com/algo/greedy/0135-candy.html) | 待补充 |
| [ ] | 860. 柠檬水找零 | [教程](https://programmercarl.com/algo/greedy/0860-lemonade-change.html) | 待补充 |
| [ ] | 406. 根据身高重建队列 | [教程](https://programmercarl.com/algo/greedy/0406-queue-reconstruction-by-height.html) | 待补充 |
| [ ] | 452. 用最少数量的箭引爆气球 | [教程](https://programmercarl.com/algo/greedy/0452-minimum-number-of-arrows-to-burst-balloons.html) | 待补充 |
| [ ] | 435. 无重叠区间 | [教程](https://programmercarl.com/algo/greedy/0435-non-overlapping-intervals.html) | 待补充 |
| [ ] | 763. 划分字母区间 | [教程](https://programmercarl.com/algo/greedy/0763-partition-labels.html) | 待补充 |
| [ ] | 56. 合并区间 | [教程](https://programmercarl.com/algo/greedy/0056-merge-intervals.html) | 待补充 |
| [ ] | 738. 单调递增的数字 | [教程](https://programmercarl.com/algo/greedy/0738-monotone-increasing-digits.html) | 待补充 |
| [ ] | 968. 监控二叉树 | [教程](https://programmercarl.com/algo/greedy/0968-binary-tree-cameras.html) | 待补充 |

## 十、动态规划

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 509. 斐波那契数 | [教程](https://programmercarl.com/algo/dynamic-programming/0509-fibonacci-number.html) | 待补充 |
| [ ] | 70. 爬楼梯 | [教程](https://programmercarl.com/algo/dynamic-programming/0070-climbing-stairs.html) | 待补充 |
| [ ] | 746. 使用最小花费爬楼梯 | [教程](https://programmercarl.com/algo/dynamic-programming/0746-min-cost-climbing-stairs.html) | 待补充 |
| [ ] | 62. 不同路径 | [教程](https://programmercarl.com/algo/dynamic-programming/0062-unique-paths.html) | 待补充 |
| [ ] | 63. 不同路径 II | [教程](https://programmercarl.com/algo/dynamic-programming/0063-unique-paths-ii.html) | 待补充 |
| [ ] | 343. 整数拆分 | [教程](https://programmercarl.com/algo/dynamic-programming/0343-integer-break.html) | 待补充 |
| [ ] | 96. 不同的二叉搜索树 | [教程](https://programmercarl.com/algo/dynamic-programming/0096-unique-binary-search-trees.html) | 待补充 |
| [ ] | 416. 分割等和子集 | [教程](https://programmercarl.com/algo/dynamic-programming/0416-partition-equal-subset-sum.html) | 待补充 |
| [ ] | 1049. 最后一块石头的重量 II | [教程](https://programmercarl.com/algo/dynamic-programming/1049-last-stone-weight-ii.html) | 待补充 |
| [ ] | 494. 目标和 | [教程](https://programmercarl.com/algo/dynamic-programming/0494-target-sum.html) | 待补充 |
| [ ] | 474. 一和零 | [教程](https://programmercarl.com/algo/dynamic-programming/0474-ones-and-zeroes.html) | 待补充 |
| [ ] | 518. 零钱兑换 II | [教程](https://programmercarl.com/algo/dynamic-programming/0518-coin-change-ii.html) | 待补充 |
| [ ] | 377. 组合总和 IV | [教程](https://programmercarl.com/algo/dynamic-programming/0377-combination-sum-iv.html) | 待补充 |
| [ ] | 70. 爬楼梯（进阶版） | [教程](https://programmercarl.com/algo/dynamic-programming/0070-climbing-stairs-complete-knapsack.html) | 待补充 |
| [ ] | 322. 零钱兑换 | [教程](https://programmercarl.com/algo/dynamic-programming/0322-coin-change.html) | 待补充 |
| [ ] | 279. 完全平方数 | [教程](https://programmercarl.com/algo/dynamic-programming/0279-perfect-squares.html) | 待补充 |
| [ ] | 139. 单词拆分 | [教程](https://programmercarl.com/algo/dynamic-programming/0139-word-break.html) | 待补充 |
| [ ] | 198. 打家劫舍 | [教程](https://programmercarl.com/algo/dynamic-programming/0198-house-robber.html) | 待补充 |
| [ ] | 213. 打家劫舍 II | [教程](https://programmercarl.com/algo/dynamic-programming/0213-house-robber-ii.html) | 待补充 |
| [ ] | 337. 打家劫舍 III | [教程](https://programmercarl.com/algo/dynamic-programming/0337-house-robber-iii.html) | 待补充 |
| [ ] | 121. 买卖股票的最佳时机 | [教程](https://programmercarl.com/algo/dynamic-programming/0121-best-time-to-buy-and-sell-stock.html) | 待补充 |
| [ ] | 122. 买卖股票的最佳时机 II | [教程](https://programmercarl.com/algo/dynamic-programming/0122-best-time-to-buy-and-sell-stock-ii-dynamic-programming.html) | 待补充 |
| [ ] | 123. 买卖股票的最佳时机 III | [教程](https://programmercarl.com/algo/dynamic-programming/0123-best-time-to-buy-and-sell-stock-iii.html) | 待补充 |
| [ ] | 188. 买卖股票的最佳时机 IV | [教程](https://programmercarl.com/algo/dynamic-programming/0188-best-time-to-buy-and-sell-stock-iv.html) | 待补充 |
| [ ] | 309. 最佳买卖股票时机含冷冻期 | [教程](https://programmercarl.com/algo/dynamic-programming/0309-best-time-to-buy-and-sell-stock-with-cooldown.html) | 待补充 |
| [ ] | 714. 买卖股票的最佳时机含手续费 | [教程](https://programmercarl.com/algo/dynamic-programming/0714-best-time-to-buy-and-sell-stock-with-transaction-fee-dynamic-programming.html) | 待补充 |
| [ ] | 300. 最长上升子序列 | [教程](https://programmercarl.com/algo/dynamic-programming/0300-longest-increasing-subsequence.html) | 待补充 |
| [ ] | 674. 最长连续递增序列 | [教程](https://programmercarl.com/algo/dynamic-programming/0674-longest-continuous-increasing-subsequence.html) | 待补充 |
| [ ] | 718. 最长重复子数组 | [教程](https://programmercarl.com/algo/dynamic-programming/0718-maximum-length-of-repeated-subarray.html) | 待补充 |
| [ ] | 1143. 最长公共子序列 | [教程](https://programmercarl.com/algo/dynamic-programming/1143-longest-common-subsequence.html) | 待补充 |
| [ ] | 1035. 不相交的线 | [教程](https://programmercarl.com/algo/dynamic-programming/1035-uncrossed-lines.html) | 待补充 |
| [ ] | 53. 最大子序和 | [教程](https://programmercarl.com/algo/dynamic-programming/0053-maximum-subarray-dynamic-programming.html) | 待补充 |
| [ ] | 392. 判断子序列 | [教程](https://programmercarl.com/algo/dynamic-programming/0392-is-subsequence.html) | 待补充 |
| [ ] | 115. 不同的子序列 | [教程](https://programmercarl.com/algo/dynamic-programming/0115-distinct-subsequences.html) | 待补充 |
| [ ] | 583. 两个字符串的删除操作 | [教程](https://programmercarl.com/algo/dynamic-programming/0583-delete-operation-for-two-strings.html) | 待补充 |
| [ ] | 72. 编辑距离 | [教程](https://programmercarl.com/algo/dynamic-programming/0072-edit-distance.html) | 待补充 |
| [ ] | 647. 回文子串 | [教程](https://programmercarl.com/algo/dynamic-programming/0647-palindromic-substrings.html) | 待补充 |
| [ ] | 516. 最长回文子序列 | [教程](https://programmercarl.com/algo/dynamic-programming/0516-longest-palindromic-subsequence.html) | 待补充 |

## 十一、单调栈

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 739. 每日温度 | [教程](https://programmercarl.com/algo/monotonic-stack/0739-daily-temperatures.html) | 待补充 |
| [ ] | 496. 下一个更大元素 I | [教程](https://programmercarl.com/algo/monotonic-stack/0496-next-greater-element-i.html) | 待补充 |
| [ ] | 503. 下一个更大元素 II | [教程](https://programmercarl.com/algo/monotonic-stack/0503-next-greater-element-ii.html) | 待补充 |
| [ ] | 42. 接雨水 | [教程](https://programmercarl.com/algo/monotonic-stack/0042-trapping-rain-water.html) | 待补充 |
| [ ] | 84. 柱状图中最大的矩形 | [教程](https://programmercarl.com/algo/monotonic-stack/0084-largest-rectangle-in-histogram.html) | 待补充 |

## 十二、图论

| 状态 | 题目 | 代码随想录 | 我的题解 |
| --- | --- | --- | --- |
| [ ] | 卡码 98. 可达路径 | [教程](https://programmercarl.com/algo/graph/kamacoder-0098-all-paths.html) | 待补充 |
| [ ] | 卡码 99. 岛屿问题（一）：孤岛计数（深搜版） | [教程](https://programmercarl.com/algo/graph/kamacoder-0099-number-of-islands-dfs.html) | 待补充 |
| [ ] | 卡码 99. 岛屿问题（二）：孤岛计数（广搜版） | [教程](https://programmercarl.com/algo/graph/kamacoder-0099-number-of-islands-bfs.html) | 待补充 |
| [ ] | 卡码 100. 岛屿问题（三）：最大岛屿的面积 | [教程](https://programmercarl.com/algo/graph/kamacoder-0100-maximum-island-area.html) | 待补充 |
| [ ] | 卡码 101. 岛屿问题（四）：孤岛的总面积 | [教程](https://programmercarl.com/algo/graph/kamacoder-0101-isolated-island-area.html) | 待补充 |
| [ ] | 卡码 102. 岛屿问题（五）：沉没孤岛 | [教程](https://programmercarl.com/algo/graph/kamacoder-0102-sink-isolated-islands.html) | 待补充 |
| [ ] | 卡码 103. 岛屿问题（六）：高山流水 | [教程](https://programmercarl.com/algo/graph/kamacoder-0103-water-flow.html) | 待补充 |
| [ ] | 卡码 104. 岛屿问题（七）：建造最大工岛 | [教程](https://programmercarl.com/algo/graph/kamacoder-0104-make-largest-island.html) | 待补充 |
| [ ] | 卡码 106. 岛屿问题（八）：海岸线计算 | [教程](https://programmercarl.com/algo/graph/kamacoder-0106-island-perimeter.html) | 待补充 |
| [ ] | 卡码 110. 字符串接龙 | [教程](https://programmercarl.com/algo/graph/kamacoder-0110-word-ladder.html) | 待补充 |
| [ ] | 卡码 105. 有向图的完全连通 | [教程](https://programmercarl.com/algo/graph/kamacoder-0105-directed-graph-reachability.html) | 待补充 |
| [ ] | 卡码 107. 寻找存在的路线 | [教程](https://programmercarl.com/algo/graph/kamacoder-0107-path-existence.html) | 待补充 |
| [ ] | 卡码 108. 多余的边 | [教程](https://programmercarl.com/algo/graph/kamacoder-0108-redundant-connection.html) | 待补充 |
| [ ] | 卡码 109. 多余的边 II | [教程](https://programmercarl.com/algo/graph/kamacoder-0109-redundant-connection-ii.html) | 待补充 |
| [ ] | 卡码 53. 最小生成树之 Prim | [教程](https://programmercarl.com/algo/graph/kamacoder-0053-treasure-prim.html) | 待补充 |
| [ ] | 卡码 53. 最小生成树之 Kruskal | [教程](https://programmercarl.com/algo/graph/kamacoder-0053-treasure-kruskal.html) | 待补充 |
| [ ] | 卡码 117. 拓扑排序 | [教程](https://programmercarl.com/algo/graph/kamacoder-0117-software-build.html) | 待补充 |
| [ ] | 卡码 47. Dijkstra 朴素版 | [教程](https://programmercarl.com/algo/graph/kamacoder-0047-meeting-dijkstra-naive.html) | 待补充 |
| [ ] | 卡码 47. Dijkstra 堆优化版 | [教程](https://programmercarl.com/algo/graph/kamacoder-0047-meeting-dijkstra-heap.html) | 待补充 |
| [ ] | 卡码 94. Bellman-Ford 算法 | [教程](https://programmercarl.com/algo/graph/kamacoder-0094-city-goods-transportation-i.html) | 待补充 |
| [ ] | 卡码 94. Bellman-Ford 队列优化 | [教程](https://programmercarl.com/algo/graph/kamacoder-0094-city-goods-transportation-i-spfa.html) | 待补充 |
| [ ] | 卡码 95. Bellman-Ford 判断负权回路 | [教程](https://programmercarl.com/algo/graph/kamacoder-0095-city-goods-transportation-ii.html) | 待补充 |
| [ ] | 卡码 96. Bellman-Ford 单源有限最短路 | [教程](https://programmercarl.com/algo/graph/kamacoder-0096-city-goods-transportation-iii.html) | 待补充 |
| [ ] | 卡码 97. Floyd 算法 | [教程](https://programmercarl.com/algo/graph/kamacoder-0097-xiaoming-visits-park.html) | 待补充 |
| [ ] | 卡码 126. A* 算法 | [教程](https://programmercarl.com/algo/graph/kamacoder-0126-knight-attack-a-star.html) | 待补充 |

---

## 单题题解建议模板

发布每道题时，可以沿用下面的小节，保证二刷记录可复盘：

```markdown
### [题号. 题目名称](题目链接)

- 代码随想录：[教程链接](教程链接)
- 我的题解：[LeetCode 题解链接](待补充)
- 核心思路：
- 关键不变量 / 状态定义：
- 边界与易错点：
- 复杂度：时间 O(...)，空间 O(...)
- 二刷新理解：
```

## 阶段总结

### 本阶段掌握

- 

### 仍然薄弱

- 

### 下一阶段计划

- 
