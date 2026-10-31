//
// Created by liuyu on 2026/10/31.
//
#include<bits/stdc++.h>
using namespace std;
//判断一个数n是不是happy数  那么在平方和计算的过程中 会出现某个sum值 如果他重复出现 证明肯定不是happy数了
class Solution {
public:
    //1.定义一个计算各个位置平方和的函数
    int squareSum(int n){
        //1.拆分数字
        int sum = 0;
        while(n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    //2.判断是否为happy数
    bool isHappy(int n) {
        unordered_set<int> set;
        while(1) {
            int sum = squareSum(n);//得到当前数字的平方和
            if(sum == 1) return true;
            if(set.count(sum) > 0) {//如果当前元素在set中出现过
                return false;
            } else {
                //将每一个sum加入一个set数组当中
                set.insert(sum);
            }
            //再次执行平方和操作
            n = sum;
        }

    }
};