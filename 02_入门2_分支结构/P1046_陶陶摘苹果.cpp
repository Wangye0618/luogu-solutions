// 洛谷 P1046 陶陶摘苹果
// https://www.luogu.com.cn/problem/P1046
// 备注：① 第一个 for 循环把 10 个苹果高度读进数组 —— 因为 x 是最后才输入的，
//          必须先存下来，这是输入顺序决定的。
//       ② 本题只统计"高度 ≤ x+30"的个数，与顺序无关，
//          所以原代码里的 sort 是多余的一步（已删除）。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h[10];
    for (int i = 0; i < 10; i++) {
        cin >> h[i];              // 用 for 循环批量读入数组
    }

    int x;
    cin >> x;
    x += 30;                      // 加上板凳高度，得到实际能摸到的最大高度

    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (h[i] <= x) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
