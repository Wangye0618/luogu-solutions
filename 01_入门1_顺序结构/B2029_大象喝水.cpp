// 洛谷 B2029 大象喝水
// https://www.luogu.com.cn/problem/B2029
// 备注：在除法时要想得出小数，注意要分子为一个小数

#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,r,t;
    double p,s;
    p=3.14;
    cin>>h>>r;
    s=r*r*p*h;
    t=ceil(20000.0/s);
    cout<<t;
    return 0;
}
