# LeetCode202快乐数 set去重

> Problem: [202. 快乐数 - 力扣（LeetCode）](https://leetcode.cn/problems/happy-number/solutions/4051490/kuai-le-shu-setqu-zhong-by-xi-duo-bu-yu-e2bgl/)

##### 思路

> 使用set集合去重

##### 解题过程

> 首先定义一个计算各个位置平方和的函数。 在isHappy函数中进行逻辑判断，每一次平方和的计算结果都保存在set集合中，如果某一次计算平方和的过程中出现了一个数字在set中重复出现了，证明陷入了死循环，这个数肯定就不是happy数了，返回false；如果出现某个sum=1，那么直接返回true即可。

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(n)

##### Code

```c++
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
            }
            //将每一个sum加入一个set数组当中
            set.insert(sum);
            //再次执行平方和操作
            n = sum;
        }

    }
};
```