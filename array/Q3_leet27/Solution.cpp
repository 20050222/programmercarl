//
// Created by liuyu on 2026/10/7.
//
#include <bits/stdc++.h>
using namespace std;
//原地移除元素 采用双指针写法
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
        return slow + 1;
    }
};