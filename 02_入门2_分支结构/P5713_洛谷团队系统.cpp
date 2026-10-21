// 洛谷 P5713 洛谷团队系统
// https://www.luogu.com.cn/problem/P5713
算出两种花费，比较大小输出对应字符串
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin>>n;
    if(5*n<(11+3*n)){
cout<<"Local"<<endl; }
else{
cout<<"Luogu"<<endl;  
}    
return 0;

}