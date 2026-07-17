// 思路：用二维动态规划比较两个字符串前缀，求最长公共子序列长度。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 1010;
int f[N][N];
char a[N], b[N];
int n, m;

int main() {
    cin >> n >> m;
    cin >> a + 1;
    cin >> b + 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] == b[j]) {
                f[i][j] = f[i - 1][j - 1] + 1; // 当前字符相同时，答案由两个前缀都去掉末字符后再加一。
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    
    cout << f[n][m] << endl;
    
    return 0;
}
// 总结：字符不同时需要比较舍弃任一字符串末字符的两种状态。