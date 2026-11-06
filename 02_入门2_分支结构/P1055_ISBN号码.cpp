// 洛谷 P1055 ISBN 号码
// https://www.luogu.com.cn/problem/P1055
// 备注：① 整串读入，循环前 12 位（不含识别码），遇到 '-' 就 continue；
//       ② 单独用计数器 w 记"现在是第几个数字"，只在数字处 +1，
//          9 个数字自然拿到 1~9 的权重，横杠不会占位；
//       ③ 余 10 记作 'X'；识别码 s[12] 不参与求和，只拿来比较；
//       ④ 识别码错误时只改 s[12]，横杠和前面的数字原样保留。
//
// 心得（先过滤，再编号）：
//       这题的关键不是"算"，而是"编号"——横杠不是数字，不能占权重。
//       一开始想过把数字先存进数组再按位置取，但 s 本身就能下标访问，
//       那层数组是多余的；直接扫 s 最省事。
//       字符要 -'0' 才是数字，'X' 是字符不是数字，别混进 int 数组。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int sum = 0, w = 1;
    for (int i = 0; i < 12; i++) {      // 前 12 位，不含识别码
        if (s[i] == '-') continue;      // 跳横杠，w 不前进
        sum += (s[i] - '0') * w;        // 第几个数字就乘几
        w++;
    }

    int r = sum % 11;
    char chk = (r == 10) ? 'X' : char('0' + r);

    if (s[12] == chk) {
        cout << "Right" << endl;
    } else {
        s[12] = chk;                    // 只改最后一位
        cout << s << endl;
    }
    return 0;
}
