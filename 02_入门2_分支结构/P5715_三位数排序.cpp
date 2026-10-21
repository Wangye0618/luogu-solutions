// 洛谷 P5715 肥胖问题
// https://www.luogu.com.cn/problem/P5715
sort(起点,终点)左闭右开，sort(a+1,a+4)` 排 a[1]、a[2]、a[3]，默认升序
#include <bits/stdc++.h>


using namespace std;

int a[4];

int main()
{
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+4);
    cout<<a[1]<<' '<<a[2]<<' '<<a[3];
    return 0;
}
  