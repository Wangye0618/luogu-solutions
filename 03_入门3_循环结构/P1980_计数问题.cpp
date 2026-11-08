// 洛谷 P1980 计数问题
// https://www.luogu.com.cn/problem/P1980
// 备注：枚举 1..n，对每个数反复 %10 取末位、/10 去掉末位，
//       遇到等于 x 的位就计数；b > 0 保证不数前导零（x = 0 也正确）。
//
// 心得（拆位统计）：
//       统计"数字 x 出现了几次"，本质是把每个数一位一位拆开来看。
//       固定套路：while (b > 0) { 取 b % 10 判断; b /= 10; }，
//       循环结束时 b == 0，正好把所有位都过一遍。
//       容易错的是 x = 0：如果按字符串或补零的思路去数，会多数前导零；
//       用整数拆位就不会，因为 10 拆出来只有 1 和 0 两位。
//       复杂度 O(n log n)，n ≤ 10^6 时约 600 万次，足够快。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, o;
    o = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        int b = i;
        while (b > 0) {
            int c;
            c = b % 10;
            if (c == x) {
                o++;
            }
            b = b / 10;
        }
    }

    cout << o << endl;
    return 0;
}
