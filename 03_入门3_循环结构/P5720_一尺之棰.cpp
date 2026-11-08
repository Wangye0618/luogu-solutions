// 洛谷 P5720 【深基4.例4】一尺之棰
// https://www.luogu.com.cn/problem/P5720
// 备注：每天长度除以 2（向下取整），问第几天变成 1。
//       第一天长度为 a，所以天数从 1 开始计数。
//       a == 1 要特判，否则 do-while 会先把 1 除成 0，之后永远等不到 1。
//
// 心得（模拟 + 边界）：
//       这题没有公式，照着题意一天天除以 2 就行，最多约 30 次（a ≤ 1e9）。
//       用 do-while 是因为"先锯再判断"：先除一次、天数加一，再看结果是不是 1。
//       但 do-while 至少执行一次，a = 1 时会先把长度除成 0 再死循环，
//       所以前面单独写了 if (a == 1) 输出 1。边界先想清楚，循环才安全。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    c = 1;
    cin >> a;

    if (a == 1) {
        cout << 1 << endl;
    } else {
        do {
            b = a / 2;
            a = b;
            c++;
        } while (b != 1);
        cout << c << endl;
    }
    return 0;
}
