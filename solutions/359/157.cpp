// 思路：从数字三角形倒数第二层向上合并，每个位置选择下方两个方向中的较大值。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 510;
int f[N][N];
int n;

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> f[i][j];
        }
    }
    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]); // 当前位置累加下一层两条可选路径中的最大路径和。
        }
    }
    
    cout << f[1][1] << endl;
    
    return 0;
}
// 总结：自底向上原地 DP 可以把最终答案汇总到三角形顶点。