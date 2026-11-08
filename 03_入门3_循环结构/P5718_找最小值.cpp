// 洛谷 P5718 找最小值
// https://www.luogu.com.cn/problem/P5718
// 备注：找最值只需扫一遍记 min —— O(n)，不用排序也不用数组。
//
// 心得（最小值 = 扫一遍，不是排序）：
//       这题只问最小值，sort 完再取 a[0] 当然对，但排序是 O(n log n)，
//       而扫一遍记 min 只要 O(n)、还不用数组。n 小的时候无所谓，
//       但"找最值不用排序"这个习惯值得从入门就立起来。
//       —— 这句原来只是感想，现在代码已经真的这么写了。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;               // 边读边比，连数组都省了
        if (v < mn) {
            mn = v;
        }
    }

    cout << mn << endl;
    return 0;
}
