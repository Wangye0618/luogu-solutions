// 洛谷 P5724 求极差
// https://www.luogu.com.cn/problem/P5724
// 备注：极差 = 最大值 - 最小值。
//       扫一遍同时维护 max / min 即可，O(n) —— 不需要排序，也不需要数组。
//       （这条就是 P5718 里写过的"找最值不用排序"，这次真的用上了）

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;               // 边读边比，不存数组，也就用不到 VLA
        if (v < mn) mn = v;
        if (v > mx) mx = v;
    }

    cout << mx - mn << endl;
    return 0;
}
