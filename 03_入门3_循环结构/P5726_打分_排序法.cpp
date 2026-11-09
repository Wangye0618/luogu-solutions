// 洛谷 P5726 打分
// https://www.luogu.com.cn/problem/P5726
// 备注：我的原始思路 —— 排序后跳过两端，把中间的加起来再求平均。
//       唯一的坑：分母是 (n-2) 不是 n，因为去掉两个评委后只剩 n-2 个数。
//
//       这个解法直观好想，代价是要 O(n log n) 排序 + 一个数组；
//       不用排序的写法见 P5726_打分_扫描法.cpp。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int j = 1; j < n - 1; j++) {     // 跳过 a[0]（最低）和 a[n-1]（最高）
        sum = sum + a[j];
    }

    cout << fixed << setprecision(2) << sum * 1.0 / (n - 2) << endl;
    return 0;
}
