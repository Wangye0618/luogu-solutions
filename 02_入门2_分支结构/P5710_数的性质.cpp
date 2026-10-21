// 洛谷 P5710 数的性质
// https://www.luogu.com.cn/problem/P5710
// 备注：并且：`&&` 两个 &
//       或者：`||` 两个竖线
//       不等于：`!=` 感叹号加等号
//       判断相等：`==` 两个等号！

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<((x%2==0)&&(x>4&&x<=12))<<" ";
    cout<<((x%2==0)||(x>4&&x<=12))<<" ";
    cout<<((x%2==0)+(x>4&&x<=12)==1)<<" ";
    cout<<((x%2==0)+(x>4&&x<=12)==0)<<" ";
    return 0;
}
