//
// Created by liuyu on 2026/10/31.
//
#include<bits/stdc++.h>
using namespace std;
//两个数组的交集 使用map进行映射出现与否
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> result;
        for(auto it = set1.begin(); it != set1.end(); ++it ) {
            if(set2.count(*it) > 0) {//如果set2中也有set1当中的这个key 证明这个是公共元素
                result.push_back(*it);
            }
        }
        return result;
    }

    //第二种写法
    vector<int> intersection1(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result_set;
        for(int num : nums2) {//遍历nums2数组
            if(set1.count(num) > 0) {//如果set1中也出现了nums中的元素num
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};