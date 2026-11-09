// 洛谷 P5726 打分
// https://www.luogu.com.cn/problem/P5726
// 备注：去掉一个最高、一个最低后求平均 —— 分母是 (n-2)，不是 n（这里踩过坑）。
//       扫一遍同时维护 sum / max / min，不用数组也不用排序：
//          去掉两端后剩下的和 = sum - max - min
//       即使最大值有多个，sum - max 也只减掉一个，正好符合"去掉一个"的要求。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mn = INT_MAX, mx = INT_MIN;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        sum += v;                // 累加
        if (v < mn) mn = v;      // 记最小值
        if (v > mx) mx = v;      // 记最大值
    }

    cout << fixed << setprecision(2)
         << (sum - mn - mx) * 1.0 / (n - 2) << endl;   // 注意分母 n-2
    return 0;
}
