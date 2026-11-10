// 洛谷 P2669 金币
// https://www.luogu.com.cn/problem/P2669
// 备注：第 i 档发 i 天、每天 i 枚。
//       内循环有两个"刹车"，缺一个就错：
//         ① 本档上限  j <= i        —— 这一档最多发 i 天
//         ② 总天数额度 if (day == k) break;  —— 总共不能超过 k 天
//       外循环靠 day 收尾（day < k），不要用 i <= k，因为档位数远小于 k。
//       踩过的坑：内循环只写 day <= k，结果第 1 档就发了 k+1 天，答案全错。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    long long sum = 0;
    int day = 0;                        // 已经发了几天

    for (int i = 1; day < k; i++) {         // 外：档位，天数够了就停
        for (int j = 1; j <= i; j++) {      // ① 本档最多 i 天
            if (day == k) break;            // ② 总天数不能超 k
            sum += i;                       // 每天拿 i 枚
            day++;
        }
    }

    cout << sum << endl;
    return 0;
}
