// 洛谷 P5711 闰年判断
// https://www.luogu.com.cn/problem/P5711

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<((n%4==0)&&(n%100!=0)||(n%400==0));
    return 0;
}
