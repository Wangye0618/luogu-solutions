// 洛谷 P5714 肥胖问题
// https://www.luogu.com.cn/problem/P5714
BMI 公式 `m/(h*h)`（h*h 必须加括号）；if-else if-else 区间判断；`setprecision(6)`不带 fixed 是 6 位有效数字，只改输出
#include <bits/stdc++.h>
using namespace std;

int main() {
    double z,m,h;
    cin >> m >> h;
    z = (m /(h * h));
    if (z < 18.5) cout << "Underweight";
    else if (z >= 18.5 && z < 24) cout << "Normal";
    else cout << setprecision(6) << z << endl << "Overweight";
    return 0;
    
}
