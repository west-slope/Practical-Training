// 思路：从每个格子记忆化搜索所有更低的相邻格，求最长下降路径。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 310;
int g[N][N];
int f[N][N];
int r, c;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int dfs(int x, int y) {
    if (f[x][y] != -1) return f[x][y];
    
    f[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= r && ny >= 1 && ny <= c && g[nx][ny] < g[x][y]) {
            f[x][y] = max(f[x][y], dfs(nx, ny) + 1); // 移动到更低位置后，把后续最长路径加一更新当前答案。
        }
    }
    
    return f[x][y];
}

int main() {
    cin >> r >> c;
    
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> g[i][j];
        }
    }
    
    memset(f, -1, sizeof(f));
    
    int ans = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            ans = max(ans, dfs(i, j));
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
// 总结：记忆化搜索可避免同一格子的最长路径被重复计算。