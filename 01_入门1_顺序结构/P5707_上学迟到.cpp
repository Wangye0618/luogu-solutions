// 洛谷 P5707 上学迟到
// https://www.luogu.com.cn/problem/P5707
// 备注：加一天的判断语句一定要在最上

#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,v,t,x,m;
    cin>>s>>v;
    t=8*60;
    t-=10;
    x=(s+v-1)/v;
    m=t-x;
    if(m<0){
        m+=60*24;
    }
    if(m/60<10){
        cout<<0<<(m/60);
    }
    else{
        cout<<(m/60);
    }
    if((m%60)<10){
        cout<<":"<<0<<(m%60);
    }
    else{
        cout<<":"<<(m%60);
    }
    return 0;
}
