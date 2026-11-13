// 洛谷 P1720 月落乌啼算钱（斐波那契数列）· 解法一 公式法
// https://www.luogu.com.cn/problem/P1720
// 备注：题面直接给了通项公式（Binet 公式），照着翻译成代码即可：
//         F(n) = [ ((1+√5)/2)^n − ((1-√5)/2)^n ] / √5
//       三段一一对应：
//         (1+√5)/2  → a       (1-√5)/2 → b       分母 → √5
//
//       注意精度：pow(1.618, 48) ≈ 1.07e10，double 只有约 16 位有效数字，
//       算出来的 F(48) 可能是 4807526975.999996。本题要求保留两位小数，
//       四舍五入后仍是 4807526976.00，能过；
//       但若题目要求输出"精确整数"，就必须改用递推法 —— 见同题的 _递推法.cpp。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    double r5 = sqrt(5.0);
    double a  = (1 + r5) / 2;              // (1+√5)/2 ≈  1.6180339887
    double b  = (1 - r5) / 2;              // (1-√5)/2 ≈ -0.6180339887

    double f = (pow(a, n) - pow(b, n)) / r5;

    cout << fixed << setprecision(2) << f << endl;
    return 0;
}
