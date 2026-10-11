# LeetCode209 长度最小的子数组 滑动窗口解法

> Problem: [209. 长度最小的子数组 - 力扣（LeetCode）](https://leetcode.cn/problems/minimum-size-subarray-sum/solutions/4041918/chang-du-zui-xiao-de-zi-shu-zu-hua-dong-ccqfm/)

##### 思路

> 采用不定长滑动窗口解题

##### 解题过程

###### 定义变量

> 首先定义滑动窗口基本信息，sum代表窗口内所有元素之和  left代表窗口左边界，lens代表窗口长度，result用于记录最后的结果初始化为INT_MAX是为了后续使用min函数进行覆盖。

###### 滑动窗口核心

> 使用right指针遍历nums数组的所有元素，遍历到的每个元素可以直接将其加入窗口当中 sum+=nums[right]，但是每次循环都需要判断一下sum是否≥target，如果满足这个条件，证明窗口可以收缩，即为收缩左边界，先记录当前窗口大小lens = right - left + 1, 随后记录result结果，result取result和lens中的最小值。最后将left所对应的元素从窗口中排除并且left指针右移即可。

###### 返回结果

> 最后的result规则，如果result等于初始化的最大值，证明找不到对应的子数组，直接返回0，反之则直接返回result具体数值。

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(1)

##### Code

```c++
class Solution {
public:
      int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int left = 0;//左边界
        int lens = 0;
        int result = INT_MAX;
        for(int right = 0; right < nums.size(); right++) {//遍历所有元素
            sum += nums[right];//向窗口内加入当前元素
            while(sum >= target) {//收缩左边界
                lens = right - left + 1;
                result = min(result, lens);
                sum -= nums[left++];
            }
        }
        return result == INT_MAX ? 0 : result;
    }
};
```