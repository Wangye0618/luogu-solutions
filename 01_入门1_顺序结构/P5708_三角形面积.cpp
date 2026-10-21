// 洛谷 P5708 三角形面积
// https://www.luogu.com.cn/problem/P5708
// 备注：sqrt()函数

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double p,a,b,c;
    cin>>a>>b>>c;
    p=(a+b+c)/2.0;
    double ans=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<ans<<endl;
    return 0;
}
