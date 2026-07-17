// 思路：使用一维动态规划解决完全背包，容量从小到大枚举以允许物品重复选择。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 1010;
int f[N];
int n, m;

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int v, w;
        cin >> v >> w;
        for (int j = v; j <= m; j++) {
            f[j] = max(f[j], f[j - v] + w); // 当前状态可以继续使用本轮物品更新后的较小容量状态。
        }
    }
    
    cout << f[m] << endl;
    
    return 0;
}
// 总结：完全背包与零一背包转移相同，区别在于容量枚举方向。