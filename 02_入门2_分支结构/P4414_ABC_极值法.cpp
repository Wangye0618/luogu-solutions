// 洛谷 P4414 [COCI2006-2007#2] ABC
// https://www.luogu.com.cn/problem/P4414
// 备注：解法一 · 极值法（自己的思路）
//       先不管第二行的顺序，把三个数按大小分好：
//       A = 最小、B = 中间、C = 最大，再读第二行，
//       用 if 判断字母，输出对应的变量。
//
// 心得（存入后输出）：
//       关键是"存"和"取"分两个阶段：
//       ① 存：只由第一行三个数决定，跟第二行的字母完全无关；
//       ② 取：第二行只决定按什么顺序输出，不参与决定谁是谁。
//       一开始卡住，就是想把第二行字母也拉进"存"这一步，方向反了。
//       中间值用 总和 - 最小 - 最大 算，省掉一轮比较。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int A = min(a, min(b, c));      // 最小
    int C = max(a, max(b, c));      // 最大
    int B = a + b + c - A - C;      // 中间 = 总和 - 两头

    string s;
    cin >> s;                       // 第二行，如 "CBA"

    for (char ch : s) {
        if (ch == 'A')      cout << A << ' ';
        else if (ch == 'B') cout << B << ' ';
        else                cout << C << ' ';
    }
    cout << '\n';
    return 0;
}
