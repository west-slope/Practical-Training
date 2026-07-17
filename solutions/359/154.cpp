// 思路：对每个连通块进行双色 DFS，相邻节点染相反颜色并检查冲突。
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int N = 100010;
vector<int> g[N];
int color[N];
int n, m;

bool dfs(int u, int c) {
    color[u] = c;
    
    for (int i = 0; i < g[u].size(); i++) {
        int v = g[u][i];
        if (!color[v]) {
            if (!dfs(v, 3 - c)) return false; // 未染色邻点递归使用另一种颜色，出现冲突则立即失败。
        } else if (color[v] == c) {
            return false;
        }
    }
    
    return true;
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (!color[i]) {
            if (!dfs(i, 1)) {
                flag = false;
                break;
            }
        }
    }
    
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
// 总结：图是二分图当且仅当每条边连接的两个节点颜色不同。