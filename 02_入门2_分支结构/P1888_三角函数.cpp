// 洛谷 P1888 三角函数
// https://www.luogu.com.cn/problem/P1888
// 备注：较小锐角的正弦 = 最短边 / 最长边（斜边），最后约分。
//       ① 自己写 gcd 函数（辗转相除）—— std::gcd 需要 C++17
//       ② 用 min/max 的 initializer_list 形式一行取出三边中的最小 / 最大

#include <bits/stdc++.h>
using namespace std;

// 辗转相除求最大公约数
int gcd(int x, int y)
{
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int small = min({a, b, c});   // 最短边 -> 分子
    int big   = max({a, b, c});   // 最长边（斜边）-> 分母
    int t = gcd(small, big);      // 约分用的最大公约数

    cout << small / t << "/" << big / t << endl;
    return 0;
}
