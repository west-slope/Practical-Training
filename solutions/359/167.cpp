// 思路：把每个正整数看作可无限使用的物品，用完全背包统计和为 n 的划分方案数。
#include <iostream>
using namespace std;

const int N = 1010;
const int MOD = 1e9 + 7;
int f[N];
int n;

int main() {
    cin >> n;
    
    f[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            f[j] = (f[j] + f[j - i]) % MOD; // 加入整数 i 后，原来和为 j-i 的方案都会转化为和为 j 的方案。
        }
    }
    
    cout << f[n] << endl;
    
    return 0;
}
// 总结：先枚举可用整数再正序枚举总和，可以避免同一组合因顺序不同被重复计数。