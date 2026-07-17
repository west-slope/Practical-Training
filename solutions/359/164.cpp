// 思路：把每种物品数量按一、二、四等组拆分，并逐组执行零一背包更新。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 20010;
int f[N];
int n, m;

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int v, w, s;
        cin >> v >> w >> s;
        
        int k = 1;
        while (k <= s) {
            for (int j = m; j >= k * v; j--) {
                f[j] = max(f[j], f[j - k * v] + k * w); // 当前二进制组作为一件物品倒序更新容量。
            }
            s -= k;
            k *= 2;
        }
        if (s > 0) {
            for (int j = m; j >= s * v; j--) {
                f[j] = max(f[j], f[j - s * v] + s * w);
            }
        }
    }
    
    cout << f[m] << endl;
    
    return 0;
}
// 总结：拆分后的每组只能选一次，因此容量仍需从大到小枚举。