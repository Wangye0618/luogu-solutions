// 洛谷 P5718 找最小值
// https://www.luogu.com.cn/problem/P5718
// 备注：读入后 sort，a[0] 就是最小值。
//       数组开 105：n ≤ 100，固定大小即可；int a[n] 是变长数组（VLA），
//       属于 GCC 扩展，不是标准 C++，洛谷能过但不建议依赖。
//
// 心得（最小值 = 扫一遍，不是排序）：
//       这题只问最小值，sort 完再取 a[0] 当然对，但排序是 O(n log n)，
//       而扫一遍记 min 只要 O(n)、还不用数组。n 小的时候无所谓，
//       但"找最值不用排序"这个习惯值得从入门就立起来。

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    cout << a[0] << endl;
    return 0;
}
