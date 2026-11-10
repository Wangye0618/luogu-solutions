// 洛谷 P2669 金币
// https://www.luogu.com.cn/problem/P2669
// 备注：第 i 档发 i 天、每天 i 枚。用 while 表达「天数没满就继续」比 for 更清楚。
//       内层有两个刹车，缺一个就错：
//         ① 本档上限    j <= i     —— 这一档最多发 i 天
//         ② 总天数额度  day < k    —— 总共不能超过 k 天
//       外层 while (day < k) 只管「要不要开下一档」；
//       内层一进去就会跑完，中途撞到 k 只能靠它自己的 ② 拦住。
//
//       踩过的坑（两个）：
//       1) 原来写 `int k, day=0, sum, i;` —— sum 和 i 都没初始化，是垃圾值。
//          局部变量不会自动清零，i 若是 0 则内层不执行、day 不增 → 死循环。
//       2) 外层曾写 `while (day <= k)` —— day 表示「已完成天数」，
//          day == k 时已经发完，用 <= 会多发一天。应写 day < k。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    int day = 0, sum = 0, i = 1;      // 三个全部初始化，i 从第 1 档开始
    cin >> k;

    while (day < k) {                 // 外层：还有天数没发完
        for (int j = 1; j <= i && day < k; j++) {   // 内层：两个刹车
            sum += i;
            day++;
        }
        i++;                          // 这一档发完，换下一档
    }

    cout << sum << endl;
    return 0;
}
