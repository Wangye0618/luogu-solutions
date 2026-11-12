// 洛谷 P1089 [NOIP2004 提高组] 津津的储蓄计划
// https://www.luogu.com.cn/problem/P1089
// 备注：每个月的资金流向是「一条主线 + 一次分叉」：
//         z    = hand + 300        本月能动用的钱
//         s    = z - budget        月末剩余
//         s 的整百 → m             存给妈妈
//         s 的零头 → hand          留到下个月
//       （同一个 s 分给两个去处，不是三笔独立的流水）
//
//       四个坑，都踩过：
//       1) 变量必须初始化。局部变量不会自动清零，`m += ...` 会从垃圾值开始。
//       2) 钱不够时要 return 0，不能用 break —— break 只跳出循环，
//          后面的年末 cout 仍会执行，结果输出两行（-month 和一个金额）→ WA。
//       3) 年末结算必须写在 for 循环外面。它属于「一年结束后做的事」，
//          放进循环体就会每月输出一次。
//       4) 年末要算「手上零钱 + 存款本息」，不能只算存款本息。
//          样例 1 会在中途 return，看不出来；只有样例 2 能暴露这一条。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hand = 0;        // 手上的零钱
    int m = 0;           // 存在妈妈那里的钱
    int z, budget, s;

    for (int month = 1; month <= 12; month++) {
        cin >> budget;

        z = hand + 300;              // 本月能动用的钱
        if (z < budget) {
            cout << -month << endl;  // 第 month 个月钱不够
            return 0;                // 立刻结束，不再输出年末金额
        }

        s = z - budget;              // 月末剩余
        m += s / 100 * 100;          // 整百存给妈妈
        hand = s % 100;              // 零头留到下个月
    }

    cout << hand + m * 1.2 << endl;  // 年末：手上零钱 + 存款本息
    return 0;
}
