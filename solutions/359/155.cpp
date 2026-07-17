// 思路：使用一维动态规划解决零一背包，容量从大到小枚举以保证每件物品只选一次。
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
        for (int j = m; j >= v; j--) {
            f[j] = max(f[j], f[j - v] + w); // 比较不选当前物品与选入当前物品后的最大价值。
        }
    }
    
    cout << f[m] << endl;
    
    return 0;
}
// 总结：零一背包必须倒序枚举容量，防止同一轮重复使用当前物品。