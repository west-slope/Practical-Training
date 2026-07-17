// 思路：维护严格递增的单调栈，为每个元素找到左侧最近且更小的值。
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (!st.empty() && st.back() >= x) st.pop_back(); // 弹出所有不小于当前值的元素后，栈顶才可能是最近较小值。
        if (i) cout << ' ';
        cout << (st.empty() ? -1 : st.back());
        st.push_back(x);
    }
    cout << "\n";
}
// 总结：单调栈通过及时删除不可能成为答案的元素，把整体复杂度降为线性。
