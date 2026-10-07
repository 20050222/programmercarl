# LeetCode704 二分查找考虑两种边界情况

##### 力扣题解链接

> Problem: [704. 二分查找 - 力扣（LeetCode）](https://leetcode.cn/problems/binary-search/solutions/4039073/er-fen-cha-zhao-kao-lu-liang-chong-bian-tyqsb/)

##### 思路

> 二分查找，二分法

##### 解题过程

二分查找分两种情况：

> 1.闭区间 2.左闭右开区间；

##### 核心思路都是：

> 对于一个有序数组，先选取有序数组的中间元素与目标值target进行比较，如果中间元素较大，证明选取的中间元素偏右，那么需要收缩右边界。如果中间元素较小，明选取的中间元素偏左，那么需要收缩左边界

##### 区别在于

> 闭区间情况下： 1.left <= right 因为[1,1]是一个合法区间 2.收缩右边界时right=middle-1;因为middle已经确定是无效元素了，直接排除即可

> 左闭右开区间情况下： 1.left < right 因为[1,1)不是一个合法区间 2.收缩右边界时right=middle;因为middle已经确定是无效元素了，但是由于有区间是开区间，所以[left,middle)也已经把middle排除在外了; 倘若这里使用right=middle-1,那么[left,middle-1)就会把middle-1这个可能的结果给排除掉。

##### 复杂度

- 时间复杂度: O(logN) O(logN) O(logN)二分查找在对数时间内即可完成
- 空间复杂度: O(1)O(1)O(1)仅使用了一些指针元素 left right等，未开辟新的数组空间

##### Code

```
class Solution {
public:
int search(vector<int>& nums, int target) {
        //二分查找分两种情况：
        //1.左闭右闭区间
        //2.左闭右开区间
        
        //1.情况1 [left,right]
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            int middle = (left + right) / 2;
            if (left <= right) {//满足二分的条件
                if (nums[middle] == target) return middle;
                if (nums[middle] > target) {//如果中心值比target大 收缩右边界
                    right = middle - 1;//由于区间是左闭右闭的 所以right右边界必须要移动到middle这个界外值的左侧
                } else {
                    left = middle + 1;
                }
            }
        }
        return -1;
        
        //情况2 [left, right)
        int left = 0;
        int right = nums.size();//左右边界
        while (left < right) {//由于是左闭右开 所以[1,1)的请情况不成立了
            int middle = (left + right) / 2;
            if (nums[middle] < target) {//中心值比目标值要小,收缩左边界
                left = middle + 1;//原本的middle不在考虑范围内了
            } else if (nums[middle] > target) {//中心值比目标值要大,收缩右边界
                right = middle;////原本的middle不在考虑范围内， 但是由于右边界是开区间 所以即使right=middle也不会取到
            } else {
                return middle;
            }
        }
        return -1;
    }
};
```