// 洛谷 P1425 小鱼的游泳时间
// https://www.luogu.com.cn/problem/P1425

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=c-a;
    f=d-b;
    if(f<0)
    {
        f+=60;
        e-=1;
    }
    cout<<e<<" "<<f;
    return 0;
}
