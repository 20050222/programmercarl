//
// Created by liuyu on 2026/10/11.
//
#include <bits/stdc++.h>
using namespace std;
//给定一个含有 n 个正整数的数组和一个正整数 target 。
//找出该数组中满足其总和大于等于 target 的长度最小的
// 子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，
// 并返回其长度。
// 如果不存在符合条件的子数组，返回 0 。
//
// 滑动窗口可以解决
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;//当前窗口数值大小
        int left = 0;//左边界
        int lens = 0;//当前窗口长度
        int result = INT_MAX;//将result初始化为最大数值 方便之后min进行覆盖
        for(int right = 0; right < nums.size(); right++) {//遍历所有元素
            sum += nums[right];//向窗口内加入当前元素
            while(sum >= target) {//收缩左边界
                lens = right - left + 1;//计算当前窗口长度
                result = min(result, lens);//取最小的result
                sum -= nums[left++];//窗口的总大小需要减去收缩后的左边界
            }
        }
        return result == INT_MAX ? 0 : result;//如果result还是MAX证明没有找到合适的窗口  返回0否则返回result
    }
};