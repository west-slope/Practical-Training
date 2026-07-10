#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 20000;
const int m = 16 * 16 * 4;

int u[N], d[N], l[N], r[N], s[N], col[N], row[N], idx;
int ans[N], top;
struct Op {
    int x, y;
    char z;
} op[N];
char g[20][20];

void init() {
    for (int i = 0; i <= m; i++) {
        l[i] = i - 1;
        r[i] = i + 1;
        s[i] = 0;
        d[i] = u[i] = i;
    }
    l[0] = m;
    r[m] = 0;
    idx = m + 1;
}

void add(int &hh, int &tt, int x, int y) {
    row[idx] = x;
    col[idx] = y;
    s[y]++;
    u[idx] = y;
    d[idx] = d[y];
    u[d[y]] = idx;
    d[y] = idx;
    r[hh] = l[tt] = idx;
    r[idx] = tt;
    l[idx] = hh;
    tt = idx++;
}

void remove(int p) {
    r[l[p]] = r[p];
    l[r[p]] = l[p];
    for (int i = d[p]; i != p; i = d[i]) {
        for (int j = r[i]; j != i; j = r[j]) {
            s[col[j]]--;
            u[d[j]] = u[j];
            d[u[j]] = d[j];
        }
    }
}

void resume(int p) {
    for (int i = u[p]; i != p; i = u[i]) {
        for (int j = l[i]; j != i; j = l[j]) {
            u[d[j]] = j;
            d[u[j]] = j;
            s[col[j]]++;
        }
    }
    r[l[p]] = p;
    l[r[p]] = p;
}

bool dfs() {
    if (!r[0]) return true;
    int p = r[0];
    for (int i = r[0]; i; i = r[i]) {
        if (s[i] < s[p]) p = i;
    }
    remove(p);
    for (int i = d[p]; i != p; i = d[i]) {
        ans[top++] = row[i];
        for (int j = r[i]; j != i; j = r[j]) {
            remove(col[j]);
        }
        if (dfs()) return true;
        for (int j = l[i]; j != i; j = l[j]) {
            resume(col[j]);
        }
        top--;
    }
    resume(p);
    return false;
}

int main() {
    while (~scanf("%s", g[0])) {
        for (int i = 1; i < 16; i++) scanf("%s", g[i]);
        init();
        int n = 1;
        for (int i = 0; i < 16; i++) {
            for (int j = 0; j < 16; j++) {
                int a = 0, b = 15;
                if (g[i][j] != '-') a = b = g[i][j] - 'A';
                for (int k = a; k <= b; k++, n++) {
                    int hh = idx, tt = idx;
                    op[n] = {i, j, char(k + 'A')};
                    add(hh, tt, n, i * 16 + j + 1);
                    add(hh, tt, n, 256 + i * 16 + k + 1);
                    add(hh, tt, n, 512 + j * 16 + k + 1);
                    int block = (i / 4) * 4 + (j / 4);
                    add(hh, tt, n, 768 + block * 16 + k + 1);
                }
            }
        }
        top = 0;
        if (dfs()) {
            for (int i = 0; i < top; i++) {
                Op &o = op[ans[i]];
                g[o.x][o.y] = o.z;
            }
            for (int i = 0; i < 16; i++) {
                printf("%s\n", g[i]);
            }
            printf("\n");
        }
    }
    return 0;
}