// 洛谷 P1217 [USACO1.5] 回文质数 Prime Palindromes
// https://www.luogu.com.cn/problem/P1217
//
// 【思路】b 最大 10^8，逐个数字判断会超时。所以改用「构造」：
//         不枚举每个数，而是直接生成回文数，再判断它是不是质数。
//
// 【为什么能快下来 —— 三个优化】
//   ① 偶数位回文（2、4、6、8 位）一定能被 11 整除（除 11 本身不可能是质数）。
//      所以只生成奇数位回文，b 也不用超过 10^7。
//   ② 回文判断约 7 次除法，质数判断约 √x 次除法 —— 构造法直接省掉了回文判断。
//   ③ 候选只有约 1 万个，而不是 1 亿个。
//
// 【镜像法】half = 左半 + 中间数
//         回文 = half 接上「half 去掉末位后的反转」
//           例：half = 123 → t = 12 → 拼成 123 + 21 = 12321
//         为什么不连中间数一起镜像（即 t = half）？
//           那样得到的是偶数位回文（123 → 123321），而它们全是 11 的倍数，
//           不可能是质数，白算。
//
// 【输出顺序】11 是唯一的偶数位回文质数，它夹在 9 和 101 之间。
//         所以不能"在循环前提前输出"，而要等到 p 第一次超过 11 时补上（need11 标记）。
//
// 【踩过的坑】
//   - if (x % b = 0) 写成了赋值（应该 ==）
//   - while 里漏了 t /= 10 → 死循环
//   - 三个 if 放进了 while 里面 → continue/break 作用在了 while 上，而不是 for
//   - main 的大括号提前闭合，for 跑到了函数外面 → 编译错误
//   - 多了一句无条件的 cout << p，把所有回文数都打了出来
//   - 11 提前输出，导致答案顺序错误

#include <bits/stdc++.h>
using namespace std;

// 判断质数：只需试除到 √x（若 x = a·b 且 a ≤ b，则 a ≤ √x）
bool isPrime(int x)
{
    if (x < 2) return false;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0) return false;
    }
    return true;
}

int main()
{                                          // ===== main 开始 =====
    int a, b;
    cin >> a >> b;

    bool need11 = (a <= 11 && 11 <= b);    // 11 是否该出现在答案里

    for (int half = 1; half <= 9999; half++)   // ===== for 开始 =====
    {
        // 生成奇数位回文：p = half 接上「half 去掉末位后的反转」
        int p = half;
        int t = half / 10;                 // 去掉末位（末位当作回文的中心）
        while (t > 0)                      // ---- while 开始 ----
        {
            p = p * 10 + t % 10;           // 把 t 的末位接到 p 后面
            t /= 10;                       // 必须有，否则死循环
        }                                  // ---- while 结束 ----

        // ↓ 三个判断在 while 外面、for 里面
        // p 递增，所以 p 第一次超过 11 时，正是 11 该输出的时候
        if (need11 && p > 11) {
            cout << 11 << endl;
            need11 = false;
        }

        if (p < a) continue;               // 太小，后面可能够，继续
        if (p > b) break;                  // 太大，后面只会更大，结束
        if (isPrime(p)) cout << p << endl;

    }                                      // ===== for 结束 =====

    return 0;
}                                          // ===== main 结束 =====
