// 思路：用二进制掩码表示元素是否被选中，枚举一到 2^n-1 的所有非空子集。
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    for (int mask = 1; mask < (1 << n); mask++)
    {
        bool first = true;
        for (int i = 0; i < n; i++)
        {
            if (mask >> i & 1) // 掩码第 i 位为一时，把编号 i+1 加入当前子集。
            {
                if (!first) cout << ' ';
                first = false;
                cout << i + 1;
            }
        }
        cout << "\n";
    }
}
// 总结：位运算枚举子集时，零掩码代表空集，可按题意决定是否跳过。
