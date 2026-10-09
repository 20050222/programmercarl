//
// Created by liuyu on 2026/10/9.
//
#include <bits/stdc++.h>
using namespace std;

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