// 洛谷 P5717 三角形分类
// https://www.luogu.com.cn/problem/P5717
利用s与t这同一边但不同表示，注意要先判断是否为三角形在进行接下来的判断
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long x = min({a, b, c}), z = max({a, b, c}), y = a + b + c - x - z;
    if (x + y <= z) { cout << "Not triangle\n"; return 0; }

    long long s = x * x + y * y, t = z * z;
    if (s == t) cout << "Right triangle\n";
    if (s >  t) cout << "Acute triangle\n";
    if (s <  t) cout << "Obtuse triangle\n";
    if (a == b || a == c || b == c) cout << "Isosceles triangle\n";
    if (a == b && b == c)         cout << "Equilateral triangle\n";
    return 0;
}