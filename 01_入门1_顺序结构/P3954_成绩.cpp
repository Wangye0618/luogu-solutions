// 洛谷 P3954 成绩
// https://www.luogu.com.cn/problem/P3954
// 思路/踩坑：

#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,C;
    double D;
  cin>>A>>B>>C;
    D=A*0.2+B*0.3+C*0.5;
    D=ceil(D);
    cout<<D<<endl;
    return 0;



    
}