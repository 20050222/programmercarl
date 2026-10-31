# LeetCode242有效字母异位词 哈希表

> 力扣题目连接:  [242. 有效的字母异位词 - 力扣（LeetCode）](https://leetcode.cn/problems/valid-anagram/solutions/4050650/you-xiao-zi-mu-yi-wei-ci-ha-xi-biao-by-x-va70/)

##### 思路

> 数组模拟哈希表

##### 解题过程

定义

> 我们定义一个长度为 26 的计数数组record，数组下标 0 至 25 依次对应小写字母 a 至 z，用于统计字符出现频次。

###### 循环

> 首先遍历字符串s，每读取一个字母，就在record对应的下标位置计数加一，完成s中字母频次统计；随后遍历字符串t，每读取一个字母，在record对应下标位置计数减一。

> 若两个字符串互为字母异位词，说明二者每个字母的出现次数完全一致，经过一次累加、一次抵消后，record数组内所有元素都应为 0；只要数组中存在不为 0 的元素，就代表两个字符串的字母频次不匹配，不是异位词。

###### 结果

> 如果两个字符串完全相同，那么record数组应该是完全相同的，一加一减record数组所有元素应该都是0，如果不是0证明两个字符串不相同

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(1)

##### Code

```c++
class Solution {
public:
    bool isAnagram(string s, string t) {
        //定义一个数组来记录s中字母出现的次数，
        int record[26];//由于英文字母最多26个
        for(int i = 0; i < s.size(); i++) {
            record[s[i] - 'a']++;
        }
        //检验t中字母是否和s中一样
        for(int i = 0; i < t.size(); i++) {
            record[t[i] - 'a']--;
        }
        //如果最后record全是0 那么证明二者相同
        for(auto r : record) {
            if(r != 0) {
                return false;
            }
        }
        return true;
    }
};
```

