// 洛谷 P1035 级数求和
// https://www.luogu.com.cn/problem/P1035
// 备注：一直累加 1/n，直到总和超过 k，此时 n 就是答案。
//       ① 必须写 1.0 / n —— 写成 1 / n 是整数除法，永远得 0，会死循环
//       ② 用 while 而不是 for，因为不知道要加多少次，只能"加到超过为止"
//       ③ 这题不需要数组：n 和 sum 都是每轮更新、不再回头查的变量

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    int n = 0;
    double sum = 0;

    while (sum <= k) {
        n++;
        sum += 1.0 / n;
    }

    cout << n << endl;
    return 0;
}
