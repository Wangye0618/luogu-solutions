// 洛谷 P1720 月落乌啼算钱（斐波那契数列）· 解法二 递推法
// https://www.luogu.com.cn/problem/P1720
// 备注：从标题「斐波那契数列」入手，用递推而不是通项公式：
//         F(0) = 0，F(1) = 1，F(n) = F(n-1) + F(n-2)
//
//       只用两个变量滚动，不需要数组 —— a 装下标小的那项，b 装下标大的那项：
//         每轮 c = a + b;  a = b;  b = c;
//       转 n 圈之后 a 正好是 F(n)（a 永远比 b 落后一步）。
//
//       两个要点：
//       1) 用 long long：F(48) = 4807526976，超过 int 上限 2147483647，
//          用 int 会在第 47 项左右溢出成负数。
//       2) n 可以是 0（题面 0 ≤ n ≤ 48），循环写 i = 1..n，
//          n = 0 时一次不进，a 仍为 F(0) = 0，正确。
//
//       与公式法相比：全程整数运算，没有浮点误差；代码长几行，但更通用。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long a = 0, b = 1;          // a = F(0), b = F(1)

    for (int i = 1; i <= n; i++) {
        long long c = a + b;         // 新的一项
        a = b;                       // 前一项往前挪
        b = c;                       // 当前项往前挪
    }

    cout << fixed << setprecision(2) << (double)a << endl;
    return 0;
}
