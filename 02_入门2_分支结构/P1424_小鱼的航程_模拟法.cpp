// 洛谷 P1424 小鱼的航程（改进版）
// https://www.luogu.com.cn/problem/P1424
// 备注：解法二 · 循环模拟 O(n)
//       从周 x 开始逐天走，周六(6)周日(7)休息，其余每天 +250
//       写法短、不易写错；缺点是天数很大时会慢，不如解法一的 O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, n, g = 0;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        if (x != 6 && x != 7) {
            g += 250;
        }
        x++;
        if (x > 7) x = 1;           // 周日之后回到周一
    }
    cout << g << endl;
    return 0;
}
