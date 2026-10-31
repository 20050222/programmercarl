# LeetCode两个数组的交集 set去重

> 力扣题解链接:  [349. 两个数组的交集 - 力扣（LeetCode）](https://leetcode.cn/problems/intersection-of-two-arrays/solutions/4051481/liang-ge-shu-zu-de-jiao-ji-setqu-zhong-b-3l71/)

##### 思路

> 使用set进行去重

##### 解题过程

###### 思路一

> 首先定义两个set集合set1和set2 分别用于对两个数组的去重，之后遍历set1，如果set1和set2中出现了相同的元素（也就是key相同），证明找到了一个元素属于两个数组的交集，把它放入结果集合中。

###### 思路二

> 首先定义一个set集合set1用于对nums1进行去重合，之后使用强化for遍历nums2中的所有元素，如果某个元素num属于集合set1，证明证明找到了一个元素属于两个数组的交集，把它放入结果集合中。

###### 思考

> 其中结果集合可以用vector<int> 遇到结果直接push_back()即可；也可以使用unorder_set<int>避免重复，最后返回结果使用vector的迭代构造器即可

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(n)

##### Code

```c++
class Solution {
public:
    //方法一
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

    //方法二
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
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
```