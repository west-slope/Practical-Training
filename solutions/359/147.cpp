// 思路：统计每个节点入度，把所有零入度节点入队并依次删除其出边得到拓扑序。
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 100010;
vector<int> g[N];
int d[N];
int n, m;

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        d[b]++;
    }
    
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (d[i] == 0) {
            q.push(i);
        }
    }
    
    vector<int> ans;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        ans.push_back(u);
        
        for (int i = 0; i < g[u].size(); i++) {
            int v = g[u][i];
            d[v]--;
            if (d[v] == 0) { // 邻接点入度减到零时，说明它的所有前驱都已处理，可以入队。
                q.push(v);
            }
        }
    }
    
    if (ans.size() != n) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
        }
    }
    
    return 0;
}
// 总结：拓扑序长度不足节点总数说明图中存在有向环。