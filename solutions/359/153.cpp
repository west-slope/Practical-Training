// 思路：Kruskal 算法按边权升序扫描，用并查集选择不会形成环的边。
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100010;
const int M = 200010;
int p[N];
int n, m;

struct Edge {
    int a, b, w;
    bool operator< (const Edge &W) const {
        return w < W.w;
    }
} edges[M];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) p[i] = i;
    
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i] = {a, b, w};
    }
    
    sort(edges, edges + m);
    
    int res = 0, cnt = 0;
    
    for (int i = 0; i < m; i++) {
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;
        int pa = find(a), pb = find(b);
        
        if (pa != pb) { // 两个端点属于不同集合时才能安全加入当前生成树。
            p[pa] = pb;
            res += w;
            cnt++;
        }
    }
    
    if (cnt < n - 1) cout << "impossible" << endl;
    else cout << res << endl;
    
    return 0;
}
// 总结：最小生成树最终应恰好选中 n-1 条边，否则原图不连通。