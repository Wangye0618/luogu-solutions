// 洛谷 P4956 [COCI2017-2018#6] Davor
// https://www.luogu.com.cn/problem/P4956
// 备注：一周存 7X + (0+1+2+3+4+5+6)K = 7X + 21K，存 52 周，所以
//         N = 52 * (7X + 21K) = 364X + 1092K = 364 * (X + 3K)
//       于是 N 必为 364 的倍数，且 X + 3K = N / 364 —— 两个未知数只剩一个自由度，
//       只需要枚举 K（或 X），另一个直接算出来。
//
//       "X 最大且 K 最小"其实是一个条件：因为 X + 3K 固定，X 越大 K 必然越小。
//       从 K = 1 往上试，第一个让 X 落在 [1, 100] 的解就是答案。
//
//       踩过的坑：写成 `if ((X = M - 3*i)) break;` —— 那是对赋值结果判断真假，
//       只要 X 非 0 就立刻 break，等于永远只试 K = 1；
//       而且没检查 X <= 100，N 一大就输出超过上限的 X。
//       （`if` 里不要写赋值，g++ -Wall 会警告 "assignment used as truth value"）

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int M = N / 364;                  // X + 3K = M

    for (int K = 1; 3 * K < M; K++) { // K 从小到大，对应 X 从大到小
        int X = M - 3 * K;
        if (X >= 1 && X <= 100) {     // 题目的两个约束都要检查
            cout << X << endl << K << endl;
            break;
        }
    }
    return 0;
}
