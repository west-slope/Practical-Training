//代码由AI生成
//解决了原python代码可能超时的问题
#include <bits/stdc++.h>
using namespace std;

bool solvable(const string &s, const string &t) {
    auto inv = [](const string &str) {
        int cnt = 0;
        for (int a = 0; a < 9; a++)
            for (int b = a + 1; b < 9; b++)
                if (str[a] != 'x' && str[b] != 'x' && str[a] > str[b])
                    cnt++;
        return cnt;
    };
    return (inv(s) % 2) == (inv(t) % 2);
}

int bfs(string s, const string &t) {
    if (s == t) return 0;
    if (!solvable(s, t)) return -1;

    const int dx[4] = {-1, 0, 1, 0};
    const int dy[4] = {0, 1, 0, -1};

    unordered_map<string, int> d;
    queue<string> q;
    d[s] = 0;
    q.push(s);

    while (!q.empty()) {
        string cur = q.front();
        q.pop();
        int k = cur.find('x');
        int x = k / 3, y = k % 3;

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];
            if (nx < 0 || nx >= 3 || ny < 0 || ny >= 3) continue;

            int nk = nx * 3 + ny;
            string ns = cur;
            swap(ns[k], ns[nk]);

            if (ns == t) return d[cur] + 1;
            if (!d.count(ns)) {
                d[ns] = d[cur] + 1;
                q.push(ns);
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string all((istreambuf_iterator<char>(cin)), istreambuf_iterator<char>());
    while (!all.empty() && (all.back() == '\n' || all.back() == '\r' || all.back() == ' '))
        all.pop_back();

    vector<string> lines;
    size_t pos = 0;
    while (pos < all.size()) {
        size_t nxt = all.find('\n', pos);
        if (nxt == string::npos) nxt = all.size();
        string line = all.substr(pos, nxt - pos);
        while (!line.empty() && line.back() == '\r') line.pop_back();
        lines.push_back(line);
        pos = nxt + 1;
    }

    vector<string> out;
    size_t i = 0;
    while (i < lines.size()) {
        string s = lines[i];
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if (s.empty()) { i++; continue; }

        string t;
        if (i + 1 < lines.size()) {
            t = lines[i + 1];
            t.erase(remove(t.begin(), t.end(), ' '), t.end());
            if (t.empty()) t = "12345678x";
            i += 2;
        } else {
            t = "12345678x";
            i += 1;
        }

        out.push_back(to_string(bfs(s, t)));
    }

    for (size_t j = 0; j < out.size(); j++)
        cout << out[j] << '\n';
    return 0;
}
