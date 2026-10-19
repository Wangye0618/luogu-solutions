// 洛谷 P5706 再分肥宅水
// https://www.luogu.com.cn/problem/P5706
// 思路/踩坑：

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,s;
    int n,b;
     cin>>t>>n;
    b=n*2;
    s=t/n;
    cout<<fixed<<setprecision(3)<<s<<endl;
    cout<<b<<endl;
    return 0;
    
    


    
}
如果要保留小数点后几位就加fixed<<setprecision(),如果只要保留有效数字就不加fixed