# LeetCode27 移除元素 双指针写法

力扣题解链接

> Problem:  [27. 移除元素 - 力扣（LeetCode）](https://leetcode.cn/problems/remove-element/solutions/4039789/yi-chu-yuan-su-shuang-zhi-zhen-xie-fa-by-4280/)

思路

> 采用双指针的思路，原地移除元素

解题过程

> 设置两个指针，快指针fast和慢指针slow，fast指针用于遍历数组中的所有元素，如果遇到和val值不同的元素，则需要保留下来，使用nums[slow]来接收这个元素nums[fast]，注意每次slow指针接收完之后都要后移一位，移动到下一次待接收的位置，所以slow指针的索引就代表了移除元素之后的新数组的长度，最后的返回值返回slow即可，无需加一

复杂度

- 时间复杂度: O(n)O(n)O(n)
- 空间复杂度: O(1)O(1) O(1)

Code

C++



```
class Solution {
public:
int removeElement(vector<int> &nums, int val) {
    if(nums.size() == 0) return 0;
        int fast = 0;
        int slow = 0;
        for(fast; fast < nums.size(); fast++) {
            //fast快指针用于寻找所有元素  如果发现不是val的元素  那么作为一个元素添加到新数组里
            //并且慢指针同步++
            if(nums[fast] != val) nums[slow++] = nums[fast];
        }
        return slow;
    }
};
```