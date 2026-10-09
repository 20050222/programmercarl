# LeetCode977有序数组的平方 前后指针

##### 力扣题解链接

> Problem: [977. 有序数组的平方 - 力扣（LeetCode）](https://leetcode.cn/problems/squares-of-a-sorted-array/solutions/4040891/you-xu-shu-zu-de-ping-fang-shuang-zhi-zh-kuun/)

##### 思路

> 采用前后双指针解法，逐步比较

##### 解题过程

###### 双指针定义

> 首先定义首指针start指向nums首元素，尾指针end指向nums末尾元素；

###### 额外空间

> 开辟一个结果数组result用于保存原数组元素平方后的结果，长度和nums保持一致，而且需要定义一个新的索引l指向result的末尾元素，因为元素组非单调递减排列，之后遍历的时候是先比较出最大的平方项；

###### 正式开始遍历

> 循环结束的条件是start > end，意为只要start <= end 那么循环就持续下去 ，这样是为了避免漏掉元素，否则的话会漏掉start==end时的中间元素,遍历的时候如果nums[start] 的平方>= nums[end]的平方，证明首指针对应元素较大，保存在result数组中，并且start后移；反之，尾指针对应元素较大，保存在result数组中，并且end前移。

##### 复杂度

- 时间复杂度: O(n) O(n) O(n)即使是双指针，也是要遍历完整个原始数组
- 空间复杂度: O(n) O(n) O(n)开辟了结果数组

##### Code

```c++
class Solution {
public:
   vector<int> sortedSquares(vector<int> &nums) {
        //由于元素组非递减排序  那么平方最大值要么在首元素 要么在末尾
        //所以可以采用首尾双指针
        int start = 0;
        int end = nums.size() - 1;
        vector<int> result(nums.size(), 0);
        int k = nums.size() - 1;
        while(start <= end) {
            if(nums[start] * nums[start] >= nums[end] * nums[end]) {
                result[k--] = nums[start] * nums[start];
                start++;
            } else {
                result[k--] = nums[end] * nums[end];
                end--;
            }
        }
        return result;
    }
};
```