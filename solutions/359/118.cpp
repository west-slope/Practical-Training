#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> path;

void printPath() {
    for (int i = 0; i < (int)path.size(); i++) {
        if (i) cout << ' ';
        cout << path[i];
    }
    cout << '\n';
}

// 从 start 开始选择下一个数字，保证当前 path 中的数字递增
void dfs(int start) {
    for (int i = start; i <= n; i++) {
        path.push_back(i);      // 选 i
        printPath();            // 输出当前组合
        dfs(i + 1);             // 继续选更大的数
        path.pop_back();        // 回溯，不选 i
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    dfs(1);

    return 0;
}