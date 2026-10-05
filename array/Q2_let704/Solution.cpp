//
// Created by liuyu on 2026/10/5.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //二分查找分两种情况：
        //1.左闭右闭区间
        //2.左闭右开区间
        //1.情况1[left, right]
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            int middle = (left + right) / 2;
            if (left <= right) {//满足二分的条件
                if (nums[middle] == target) return middle;
                if (nums[middle] > target) {//如果中心值比target大 收缩右边界
                    right = middle - 1;//优于区间是左闭右闭的 所以right右边界必须要移动到middle这个界外值的左侧
                } else {
                    left = middle + 1;
                }
            }
        }
        return -1;
    }

    //方法二
    int search1(vector<int>& nums, int target) {
        //二分查找分两种情况：
        //1.左闭右闭区间
        //2.左闭右开区间
        //情况2 [left , right)
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