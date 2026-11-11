// 洛谷 P1423 小玉在游泳
// https://www.luogu.com.cn/problem/P1423
// 备注：第 1 天游 2 米，之后每天是前一天的 98%，累加到 ≥ s 为止。
//       ① 用 `dist *= 0.98` 逐日递推，不要用 pow(0.98, i)：
//          pow 每轮重算一次 exp(i*log(0.98))，比一次乘法慢几十倍。
//       ② 不要写 `if (sum == s) break;` —— 浮点数不能用 == 比较
//          （0.98 在二进制里除不尽，sum 会是 3.9600000000000004 这种），
//          而且 while (sum < s) 本来就会退出，break 是冗余的。
//       ③ 累加型循环的骨架：累加 → 计数 → 更新下一项。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s;
    cin >> s;

    double sum = 0;      // 累计游的距离
    double dist = 2;     // 第 1 天游 2 米
    int day = 0;         // 天数

    while (sum < s) {
        sum += dist;     // 累加
        day++;           // 计数
        dist *= 0.98;    // 更新下一项：明天只有今天的 98%
    }

    cout << day << endl;
    return 0;
}
