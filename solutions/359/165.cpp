// 思路：按组处理物品，每组只能选择其中一件，并用倒序容量避免同组重复选择。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 110;
int f[N];
int v[N], w[N];
int n, m;

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        for (int j = 0; j < s; j++) {
            cin >> v[j] >> w[j];
        }
        for (int j = m; j >= 0; j--) {
            for (int k = 0; k < s; k++) {
                if (j >= v[k]) {
                    f[j] = max(f[j], f[j - v[k]] + w[k]); // 对当前组的每个候选物品尝试更新容量 j 的最大价值。
                }
            }
        }
    }
    
    cout << f[m] << endl;
    
    return 0;
}
// 总结：分组背包必须先固定容量再枚举组内物品，保证每组至多选一件。