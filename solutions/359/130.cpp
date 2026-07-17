// 思路：用数组保存节点值和下一节点下标，模拟单链表的头插、指定位置插入和删除。
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    if (!(cin >> m)) return 0;

    vector<int> e(m + 5), ne(m + 5);
    int head = -1, idx = 0;

    auto add_head = [&](int x) {
        e[idx] = x;
        ne[idx] = head;
        head = idx++;
    };

    auto add = [&](int k, int x) {
        e[idx] = x;
        ne[idx] = ne[k];
        ne[k] = idx++; // 新节点接到第 k 个节点之后，再更新该节点的后继下标。
    };

    auto del = [&](int k) {
        if (k == -1) head = ne[head];
        else ne[k] = ne[ne[k]];
    };

    while (m--)
    {
        char op;
        cin >> op;
        if (op == 'H')
        {
            int x;
            cin >> x;
            add_head(x);
        }
        else if (op == 'I')
        {
            int k, x;
            cin >> k >> x;
            add(k - 1, x);
        }
        else
        {
            int k;
            cin >> k;
            if (k == 0) del(-1);
            else del(k - 1);
        }
    }

    for (int i = head; i != -1; i = ne[i]) cout << e[i] << ' ';
    cout << "\n";
}
// 总结：数组模拟链表时输入编号通常与数组下标相差一，需要统一转换。
