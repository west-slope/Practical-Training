// 思路：按区间长度枚举石子段，并尝试每个分割点计算合并该区间的最小代价。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 310;
int a[N], s[N];
int f[N][N];
int n;

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= n; i++) f[i][i] = 0;
    
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            for (int k = i; k < j; k++) {
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]); // 左右子区间代价加上当前区间总重量得到一次完整转移。
            }
        }
    }
    
    cout << f[1][n] << endl;
    
    return 0;
}
// 总结：区间 DP 通常先枚举长度，再枚举左端点和分割点。