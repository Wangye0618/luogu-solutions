// 洛谷 P2433 小学数学N合一
// https://www.luogu.com.cn/problem/P2433

#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    if(T==1){
        cout<<"I love Luogu!";
    }
    if(T==2){
        cout<<6<<" "<<4;
    }
    if(T==3){
        cout << 14/4 << endl << (14/4)*4 << endl << 14%4 << endl;
    }
    if(T==4){
        double m;
        m=(500*1.0)/3;
        cout<<setprecision(6)<<m;
    }
    if(T==5){
        int t;
        t=(260+220)/(12+20);
        cout<<t;
    }
    if(T==6){
        int x;
        x=9*9+6*6;
        cout<<sqrt(x);
    }
    if(T==7)
    {
        int money=100;
        money += 10; cout<<money<<endl;
        money -= 20; cout<<money<<endl;
        money = 0; cout<<money<<endl;
    }
    if(T==8){
        double p;
        p=3.141593;
        cout<<2*5*p<<endl<<p*5*5<<endl<<(4.0/3*5*5*5*p)<<endl;
    }
    if(T==9){
        cout<<22;
    }
    if(T==10){
        cout<<9;
    }
    if(T==11){
        double ti = 100.0/(8-5);
        cout<<ti;
    }
    if(T==12){
        char c;
        c='M';
        cout<<(c-'A'+1)<<endl;
        cout<<(char)(18+'A'-1)<<endl;
    }
    if(T==13){
        int s,u;
        double r;
        r=3.141593;
        double totalV = (4.0/3)*r*4*4*4 + (4.0/3)*r*10*10*10;
        int len = cbrt(totalV);
        cout << fixed << setprecision(0) << len;
    }
    if(T==14){
        cout<<50;
    }
    return 0;
}
