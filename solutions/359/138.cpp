// 思路：用并查集合并连通集合，并通过根节点是否相同回答连通性查询。
#include <iostream>
#include <vector>
using namespace std;

const int N = 100010;
int p[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]); // 递归寻找根节点的同时压缩路径，缩短后续查询链路。
    return p[x];
}

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) p[i] = i;
    
    while (m--) {
        char op;
        int a, b;
        cin >> op >> a >> b;
        
        if (op == 'M') {
            int pa = find(a), pb = find(b);
            if (pa != pb) p[pa] = pb;
        } else if (op == 'Q') {
            if (find(a) == find(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
    return 0;
}
// 总结：并查集适合处理只增加连接、不删除连接的动态连通问题。