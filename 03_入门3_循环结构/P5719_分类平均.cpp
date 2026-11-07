// 洛谷 P5719 分类平均
// https://www.luogu.com.cn/problem/P5719
// 备注：① A 类 = k 的倍数（i % k == 0），B 类 = 其余；
//       ② 不用存数组，边循环边累加 sum 和 cnt；
//       ③ i 从 1 到 n（含 n），0 不是正整数，也不能算进去；
//       ④ 平均数要浮点除：sum * 1.0 / cnt；
//       ⑤ cout << fixed << setprecision(1) 保留 1 位小数。
//
// 心得（平均数 = 和 ÷ 个数）：
//       一开始想开两个数组分别装 A、B 类，再遍历求和；其实每个数只用一次，
//       存下来纯属多余——循环里直接 sumA += i、cntA++ 就够了。
//       另外踩过两个坑：i 从 0 开始会把 0 算进一类；A/B 的判断写反过。
//       先把"谁是 A、谁是 B"用一句话写清楚，再落代码，能避免这类错。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int sumA = 0, sumB = 0;
    int cntA = 0, cntB = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {          // A 类：k 的倍数
            sumA += i;
            cntA++;
        } else {                   // B 类：其余
            sumB += i;
            cntB++;
        }
    }

    cout << fixed << setprecision(1)
         << sumA * 1.0 / cntA << ' '
         << sumB * 1.0 / cntB << endl;
    return 0;
}
