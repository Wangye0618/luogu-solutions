// 洛谷 P5705 数字反转
// https://www.luogu.com.cn/problem/P5705
// 备注：`strlen(arr)`：得到字符串实际字符数

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    cin>>arr;
    int s=strlen(arr);
    int i;
    for(i=s-1;i>=0;i--)
    cout<<arr[i];
    return 0;
}
