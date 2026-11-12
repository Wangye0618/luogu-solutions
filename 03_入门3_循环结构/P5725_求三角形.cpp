// 洛谷 P5725 【深基4.习8】求三角形
// https://www.luogu.com.cn/problem/P5725
// 备注：两个图形共用一套骨架 —— 外层管行、内层管"这一行几个数"、每行末尾 endl。
//         正方形：内层 j 从 1 到 n（每行 n 个）
//         三角形：内层 j 从 1 到 i（第 i 行 i 个）
//       两个图形之间空一行（题目明确要求）。
//       三角形要重新从 01 开始，所以计数器 num 要重置成 1。
//
//       踩过的坑：
//       1) 把 `int sum = 0;` 声明在第一个 for 的循环体里，却在第二个 for 里用
//          → 编译错误 'sum' was not declared in this scope。
//          变量只在它被声明的那对大括号内有效（作用域）。
//       2) 三角形的内层循环结束后忘了 cout << endl，整张图会挤成一行。
//       3) 计数器初值写成 0，会先打印出 00。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int num = 1;

    // ① 正方形：n 行 n 列
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << setfill('0') << setw(2) << num;
            num++;
        }
        cout << endl;
    }

    cout << endl;                 // 两个图形之间的空行

    // ② 三角形：第 i 行有 i 个数
    num = 1;                      // 计数器重置，重新从 01 开始
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setfill('0') << setw(2) << num;
            num++;
        }
        cout << endl;             // 每行结束必须换行
    }

    return 0;
}
