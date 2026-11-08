// 洛谷 P5721 【深基4.例6】数字直角三角形
// https://www.luogu.com.cn/problem/P5721
// 备注：外层控制行（n 行，每行比上一行少一个），内层控制每行打印几个数；
//       编号从 1 连续递增，setw(2) + setfill('0') 补成两位。
//       总个数 n+(n-1)+…+1 = n(n+1)/2，n ≤ 13 时最多 91，两位够用。
//
// 心得（for 的内外循环）：
//       外层 for 管"行"，内层 for 管"这一行有几个数"，这是打印图形的固定套路：
//       外层每转一次 = 换一行；内层每转一次 = 这一行多一个数。
//       这里外层 i 从 n 递减到 1，内层 j 从 1 到 i，行宽就自然地一行行变短。
//       注意 setw(2) 只对"下一次输出"生效，所以每次输出前都要写；
//       setfill('0') 是填充字符，设置一次后一直有效，写在循环外也行。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    num = 1;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << setfill('0') << setw(2) << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}
