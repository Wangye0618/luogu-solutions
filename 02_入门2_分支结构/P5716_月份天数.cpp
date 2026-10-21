// 洛谷 P5716 月份天数
// https://www.luogu.com.cn/problem/P5716
闰年规则 `(m%4==0 && m%100!=0) || m%400==0`（四年一闰、百年不闰、四百年再闰）
#include <bits/stdc++.h>
using namespace std;

int main() {
int m,n;
    cin>>m>>n;
   if(n==2 && ((m%4==0 && m%100!=0) || m%400==0)){cout<<29<<endl;
        
        
    }
   if(n==2 && !((m%4==0 && m%100!=0) || m%400==0)){
cout<<28<<endl;
        
    }
if((n<8)&&((n%2)!=0)){
cout<<31<<endl;    

}if((n<8)&&((n%2)==0)&&(n!=2))
{
cout<<30<<endl;
    
}
if((n>7)&&((n%2)==0)){
cout<<31<<endl;

    
}
 if((n>7)&&((n%2)!=0))   {
cout<<30<<endl;

     
 }
    return 0;
}