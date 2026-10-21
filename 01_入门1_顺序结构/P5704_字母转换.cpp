// 洛谷 P5704 字母转换
// https://www.luogu.com.cn/problem/P5704
// 备注：大写字母的ASCll是小写字母的ASCll减去32

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    cout<<(char)(ch-32);
    return 0;
}
