// 洛谷 P1089 [NOIP2004 提高组] 津津的储蓄计划
// https://www.luogu.com.cn/problem/P1089
// 备注：每个月的资金流向是「一条主线 + 一次分叉」：
//         total = hand + 300         本月能动用的钱
//         rem   = total - budget     月末剩余
//         rem 的整百  → save         存给妈妈
//         rem 的零头  → hand         留到下个月
//       （同一个 rem 分给两个去处，不是三笔独立的流水）
//
//       两个坑：
//       1) save 必须初始化。局部变量不会自动清零，save += 会从垃圾值开始。
//       2) 钱不够时必须 return 0。用 break 只跳出循环，后面的年末 cout 仍会执行，
//          结果输出两行（-month 和一个年末金额）→ WA；
//          什么都不做更糟：rem 变成负数，hand 被算成负数，后面 12 个月全错。
//
//       年末用 hand + save * 6 / 5，不要 hand + save * 1.2 —— 全程整数，无精度风险。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hand = 0;      // 手上的钱
    int save = 0;      // 存在妈妈那里的钱

    for (int month = 1; month <= 12; month++) {
        int budget;
        cin >> budget;

        int total = hand + 300;        // 本月能动用的钱
        if (total < budget) {
            cout << -month << endl;    // 第 month 个月钱不够
            return 0;                  // 立刻结束，不再输出年末金额
        }

        int rem = total - budget;      // 月末剩余
        save += rem / 100 * 100;       // 整百存给妈妈
        hand = rem % 100;              // 零头留到下个月
    }

    cout << hand + save * 6 / 5 << endl;   // 年末：手上零钱 + 存款 × 1.2
    return 0;
}
