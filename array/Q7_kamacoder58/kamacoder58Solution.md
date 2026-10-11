# kamacoder56 区间和 采用前缀和

> Problem:[58. 区间和（第九期模拟笔试）](https://kamacoder.com/problempage.php?pid=1070)

##### 思路

> 采用前缀和来解决

##### 解题过程

###### 定义变量

> Array(n)表示长为n的数组  prefix(n)表示数组Array的前缀和 a和b表示区间范围

###### 前缀和过程

> 计算前缀和 只需要从prefix数组的下标1开始遍历 令prefix[i] = prefix[i - 1] + Array[i]。
>
> 接下来要知道区间[a,b]之间的数组之和  只需要用prefix[b] - prefix[a-1]即可，举个例子要知道[1,3]的区间和
>
> prefix[1] = Array[0] + Array[1] ; prefix[3]= Array[0] + Array[1]+ Array[2] + Array[3];
>
> prefix[3]-prefix[1-1]=Array[0] + Array[1]+ Array[2] + Array[3] - ( Array[0] ) = Array[1]+ Array[2] + Array[3]

##### 复杂度

- 时间复杂度: O(n)
- 空间复杂度: O(n)

##### Code

```c++
#include<bits/stdc++.h>
using namespace std;
int main() {
    //本题需要用到前缀和来节约时间
    int n;
    cin >> n;
    vector<int> Array(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> Array[i];
    }
    //计算前缀和
    vector<int> prefix(n, 0);
    prefix[0] = Array[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + Array[i];
    }
    //输入数组范围区间
    int a, b;
    while(cin >> a >> b) {
        cout << prefix[b] - prefix[a-1] << '\n';
    }
    return 0;
}
```

