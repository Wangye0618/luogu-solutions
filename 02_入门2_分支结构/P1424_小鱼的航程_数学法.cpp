// 洛谷 P1424 小鱼的航程（改进版）
// https://www.luogu.com.cn/problem/P1424
// 备注：解法一 · 数学推导 O(1)
//       整周部分：n/7 个完整周 × 每周 5 个工作日 × 250
//       零头部分：按起点 x 与余数 r 分四种情况讨论（是否跨过周六周日）

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;                  // x: 起始星期几(1=周一)  n: 连续游多少天

    int r = n % 7;                  // 零头天数
    int base = (n / 7) * 5 * 250;   // 完整周贡献的里程

    if (r == 0) {
        cout << base << endl;                 // 正好整周，无零头
    } else if (x + r < 7) {
        cout << r * 250 + base << endl;       // 零头全落在工作日
    } else if (x + r == 7) {
        cout << (r - 1) * 250 + base << endl; // 零头只碰到周六
    } else if (x == 7) {
        cout << (r - 1) * 250 + base << endl; // 从周日开始，只休第一天
    } else {
        cout << (r - 2) * 250 + base << endl; // 零头同时跨过周六和周日
    }
    return 0;
}
