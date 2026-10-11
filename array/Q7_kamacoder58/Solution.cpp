//
// Created by liuyu on 2026/10/11.
//
//给定一个整数数组 Array，请计算该数组在每个指定区间内元素的总和。
//第一行输入为整数数组 Array 的长度 n，接下来 n 行，
// 每行一个整数，表示数组的元素。随后的输入为需要计算总和的区间下标：a，b （b > = a），直至文件结束。
#include<bits/stdc++.h>
using namespace std;
int main() {
    //本题需要用到前缀和来节约时间
    int n;
    cin >> n;
    vector<int> Array(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> Array[i];
        cout << endl;
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