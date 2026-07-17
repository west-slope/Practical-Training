// 思路：用位掩码表示已访问节点集合，动态规划求从零出发到 n-1 的最短哈密顿路径。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 20;
const int M = 1 << N;
int g[N][N];
int f[M][N];
int n;

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }
    
    memset(f, 0x3f, sizeof(f));
    f[1][0] = 0;
    
    for (int mask = 1; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (!(mask & (1 << i))) continue;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (!(mask & (1 << j))) continue;
                f[mask][i] = min(f[mask][i], f[mask ^ (1 << i)][j] + g[j][i]); // 去掉终点 i 后，从前驱 j 的状态转移并加上边权。
            }
        }
    }
    
    cout << f[(1 << n) - 1][n - 1] << endl;
    
    return 0;
}
// 总结：状态压缩 DP 适合节点较少但需要记录访问集合的路径问题。