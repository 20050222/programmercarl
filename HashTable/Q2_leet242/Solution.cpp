//
// Created by liuyu on 2026/10/29.
//
#include<bits/stdc++.h>
using namespace std;
//寻找字母异位词  即看哈希表是否相同
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