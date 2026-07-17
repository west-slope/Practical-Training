// 思路：Prim 算法每轮选择距当前生成树最近的未选节点，并用它更新其他节点距离。
#include <iostream>
#include <cstring>
using namespace std;

const int N = 510;
const int INF = 0x3f3f3f3f;
int g[N][N];
int dist[N];
bool st[N];
int n, m;

int prim() {
    memset(dist, 0x3f, sizeof(dist));
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        int t = -1;
        for (int j = 1; j <= n; j++) {
            if (!st[j] && (t == -1 || dist[t] > dist[j])) {
                t = j;
            }
        }
        
        if (i && dist[t] == INF) return -1;
        
        if (i) res += dist[t]; // 除起点外，每次选中节点时把连接它的最小边权加入答案。
        st[t] = true;
        
        for (int j = 1; j <= n; j++) {
            if (dist[j] > g[t][j]) {
                dist[j] = g[t][j];
            }
        }
    }
    
    return res;
}

int main() {
    cin >> n >> m;
    
    memset(g, 0x3f, sizeof(g));
    
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a][b] = g[b][a] = min(g[a][b], w);
    }
    
    int ans = prim();
    
    if (ans == -1) cout << "impossible" << endl;
    else cout << ans << endl;
    
    return 0;
}
// 总结：若某轮最小距离仍为无穷大，说明图不连通，无法形成生成树。