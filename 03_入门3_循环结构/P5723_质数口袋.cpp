// 洛谷 P5723 质数口袋
// https://www.luogu.com.cn/problem/P5723
// 备注：从 2 开始逐个判断质数，能装下就装（sum + n <= L），装不下就停。
//       输出每个装进去的质数（每行一个），最后一行输出个数。
//
//       判断质数：只需试除到 √x。
//       因为若 x = a·b 且 a ≤ b，则 a 必然 ≤ √x —— √x 之后的因子都能在 √x 之前找到配对。
//       写成 d * d <= x 而不是 d <= sqrt(x)，避免浮点开方。
//
//       踩过的坑（两个都在函数里，且很隐蔽）：
//       1) 把 `return true;` 写进了 for 循环体内 → 只试了 d = 2 就下结论，
//          于是 9、15、21、25、27 这些「奇合数」全被判成质数。
//          return true 的意思是「所有 d 都试完、都没找到因子」，必须放在循环外面。
//       2) 循环后面忘了 `return true;` → x = 2、3 时循环一次都不进，
//          函数没有返回值，是未定义行为。而 2 正是第一个要装的质数。
//       这两个 bug 在 L = 100 时可能看不出来（答案里恰好没有 9/15/21/25），
//       所以「样例通过 ≠ 正确」。
//
//       主程序一个细节：输出的是 n（质数本身），不是 sum（累计和）。

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2) return false;               // 0 和 1 不是质数

    for (int d = 2; d * d <= x; d++) {     // 只试到 √x
        if (x % d == 0) {
            return false;                  // 找到因子，立刻判否
        }
    }

    return true;                           // 循环结束还没找到因子 → 是质数
}

int main()
{
    int L;
    cin >> L;

    int j = 0;        // 已装个数
    int sum = 0;      // 已装总和

    for (int n = 2; ; n++) {           // 不写条件，靠 break 退出
        if (!isPrime(n)) continue;     // 跳过合数
        if (sum + n > L) break;        // 装不下就停
        sum += n;
        j++;
        cout << n << endl;             // 输出质数本身
    }

    cout << j << endl;                 // 最后一行输出个数
    return 0;
}
