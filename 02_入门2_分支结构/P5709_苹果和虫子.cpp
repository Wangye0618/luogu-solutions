// 洛谷 P5709 苹果和虫子
// https://www.luogu.com.cn/problem/P5709
// 备注：一定要记得考虑总数小于吃掉的数量的情况

#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,t,s;
    cin>>m>>t>>s;
    if(m>ceil(s*1.0/t)){
    cout<<m-ceil(s*1.0/t);}
    else{
        cout<<0;
    }
    return 0;
}
