// 洛谷 P1422 小玉家的电费
// https://www.luogu.com.cn/problem/P1422
#include<bits/stdc++.h>
using namespace std;
int main(){
int x,q;
    cin>>x;
    bool m=(x<150);
    if(m){
cout<<fixed<<setprecision(1)<<x*0.4463<<endl;
    }
    else if(x<=400){
        x-=150;
        cout<<fixed<<setprecision(1)<<x*0.4663+150*0.4463<<endl;
   }
else{
q=x-400;
    cout<<fixed<<setprecision(1)<<q*0.5663+250*0.4663+150*0.4463<<endl;  
}
return 0;  
}