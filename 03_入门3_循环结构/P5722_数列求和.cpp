// 洛谷 P5722 数列求和
// https://www.luogu.com.cn/problem/P5722
// 备注：1 + 2 + ... + n，循环累加即可。
//       数组中转没有意义 —— 存进去马上就用掉，等于白占内存。
//       坑：原来写成 `int n, a[n]; cin >> n;`，
//           声明数组时 n 还是垃圾值，属未定义行为（UB），可能越界。
//           规则：**先把 n 读进来，再谈数组**；能不用数组就别用。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}
